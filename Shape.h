#ifndef SHAPE_H
#define SHAPE_H
#include <string>
using namespace std;
class Shape {
    private:
        int length;
        int width;
        string colour;
        int position_X;
        int position_Y;
    public: 
        virtual Shape* clone() = 0;
};

#endif