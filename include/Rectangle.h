#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"

class Rectangle:public Shape {
    public:
        Rectangle();
        virtual ~Rectangle();
        int area();

    protected:

    private:
};

#endif // RECTANGLE_H
