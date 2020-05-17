#include "GinClient.h"

void GinClient::setId(int id) {
    this->mId = id;
}

int GinClient::getId()   {
    return this->mId;
}

void GinClient::setName(string name) {
    this->mName = name;
}

string GinClient::getName() {
    return this->mName;
}
