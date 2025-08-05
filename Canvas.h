#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"

class Canvas {
    private:
        Shape* shapes;
    public:
        Memento* captureCurrent();
        void undoAction(Memento* prev);
}

#endif