#include <iostream>
#include "GinClient.h"
#include <string>

using namespace std;

GinClient changeId() {
    GinClient client;
    client.setId(500);
    return client;
}

int main()
{
    GinClient mGinClient;
    mGinClient.setId(100);
    string name = "client";
    mGinClient.setName(name);
    mGinClient = changeId();
    //mGinClient.setName(new string("client"));
    //string name = mGinClient.getName();
    cout << mGinClient.getId() << endl;
    return 0;
}
