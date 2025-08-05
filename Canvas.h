#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"
#include <iostream>

class Canvas {
    private:
        Shape* shapes;
    public:
        Memento* captureCurrent();
        void undoAction(Memento* prev);
}

#endif