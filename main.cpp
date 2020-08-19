#include <iostream>
#include <string>
#include <vector>
#include "GinClient.h"
#include <string>
#include <pthread.h>
#include "Shape.h"
#include "Rectangle.h"


using namespace std;

void* sayHello(void* args) {
    cout << "Hello" << endl;
    return 0;
}

namespace first_namespace {
    void show() {
        cout << "first name" << endl;
    }
}

namespace second_namespace {
    void show() {
        cout << "second name" << endl;
    }
}

using namespace second_namespace;

void testThread() {
   pthread_t tids[5];
   for (int i = 0; i < 5; i++) {
       int ret = pthread_create(&tids[i], NULL, sayHello, NULL);
       if (ret != 0) {
           cout << "pthread_create error"  << ret << endl;
       }
   }
   pthread_exit(NULL);
}

void testOperator() {
   GinClient client;
   GinClient client2;
   client2.setId(9);
   GinClient client3 = client + client2;
   cout << "client id = " << client3.getId() << endl;
}

void testContainer() {
   vector<int> vec;
   int i;
   cout << "vector size = " << vec.size() << endl;

   for(i = 0; i < 5; i++){
      vec.push_back(i);
   }
}

void testExtends() {
    Shape *shape;
    Rectangle retangle;
    shape = &retangle;
    shape->area();
}

void testException() {
    try {
        throw 10;
    } catch (int num) {
        cout << "exception play " << num << endl;
    }

    vector<int> v(10);
    try {
        v.at(100) = 100;
    }
    catch (out_of_range & e) {
        cerr << e.what() << endl;
    }
}

void testNew() {
    double * data = NULL;
    data = new double;
    *data = 100;
    cout << "data=" << *data << endl;
    delete data;
}

void testNameSpace() {
    show();
}

template <typename T>
inline const T getMax(const T a, const T b) {
   if (a > b) {
       return a;
   } else {
       return b;
   }
}

int isLittleEndian()
{
    union
    {
        char ch;
        int a;
    }a;

    a.a = 1;
    return (a.ch == 1);
}

int main()
{
    //testNameSpace();

    unsigned char b = 0x12;
    unsigned char d = 0x34;
    int sum = (b << 8) + d;

    return 0;
}
