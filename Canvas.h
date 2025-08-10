#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"
#include "Memento.h"
#include <iostream>
#include <vector>
#include <map>
#include <fstream>

class Canvas {
    public:
        vector<Shape*> shapes;
        Canvas();
        ~Canvas();
        void addShape(Shape* shape);
        void clearCanvas();
        Memento* captureCurrent();
        void undoAction(Memento*);
    private:
};

#endif