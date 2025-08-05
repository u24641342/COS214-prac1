#ifndef CANVAS_H
#define CANVAS_H

#include "Shape.h"
#include "Memento.h"
#include <iostream>
#include <vector>
#include <map>
#include <fstream>

class Canvas {
    private:
        Shape* shapes;
    public:
        Memento* captureCurrent();
        void undoAction(Memento* prev);
};

#endif