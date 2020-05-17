#ifndef GIN_CLIENT_H
#define GIN_CLIENT_H

#include <string>

using namespace std;

class GinClient {

private:
    int mId;
    string mName;

public:
    int getId();
    void setId(int id);
    string getName();
    void setName(string name);

};

#endif // GIN_CLIENT_H
