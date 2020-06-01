#include "GinClient.h"

GinClient::GinClient():
    mId(5)
{
    //ctor
}

GinClient::~GinClient()
{
    //dtor
}

void GinClient::setId(int id) {
    this->mId = id;
}

int GinClient::getId() const {
    return this->mId;
}



/*
void GinClient::setName(string name) {
    this->mName = name;
}

string GinClient::getName() {
    return this->mName;
}
*/
