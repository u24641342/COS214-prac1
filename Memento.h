#ifndef MEMENTO_H
#define MEMENTO_H

#include "Shape.h"

class Memento {

    public:
        Memento(Shape* elements);
        Shape* getMemento() {return shapes;};
        void deleteMemento();
    private:
        Shape* shapes;

};

#endif