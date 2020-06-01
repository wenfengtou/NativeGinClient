#include <iostream>
#include <string>
#include <vector>
#include <GinClient.h>
#include <string>
#include <pthread.h>

using namespace std;

void* sayHello(void* args) {
    cout << "Hello Runoob£¡" << endl;
    return 0;
}


int main()
{
   vector<int> vec;
   int i;
   cout << "vector size = " << vec.size() << endl;

   for(i = 0; i < 5; i++){
      vec.push_back(i);
   }

   GinClient client;
   GinClient client2;
   client2.setId(9);
   GinClient client3 = client + client2;
   //client.setId(10);
   cout << "client id = " << client3.getId() << endl;


   pthread_t tids[5];
   for (int i = 0; i < 5; i++) {
       int ret = pthread_create(&tids[i], NULL, sayHello, NULL);
       if (ret != 0) {
           cout << "pthread_create error"  << ret << endl;
       }
   }
   pthread_exit(NULL);
   return 0;
}
