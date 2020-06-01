#ifndef GINCLIENT_H
#define GINCLIENT_H

#include <string>

class GinClient
{
    public:
        GinClient();
        virtual ~GinClient();
        int getId() const;
        void setId(int id);
        GinClient operator+(const GinClient& c) {
            GinClient client;
            client.mId = this->mId + c.mId;
            return client;
        }
        //string getName();
        //void setName(string name);

    protected:

    private:
        int mId;
        //string mName;
};

#endif // GINCLIENT_H
