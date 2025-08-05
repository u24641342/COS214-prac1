#ifndef MEMENTO_H
#define MEMENTO_H

#include "Shape.h"

class Memento {

private:
    // The state of the object to be saved
    Shape* shapes;

public:
    // Constructor
    Memento(Shape* elements);
    Shape getMemento();
    void deleteMemento();
};

#endif