#ifndef MEMENTO_H
#define MEMENTO_H

#include "Shape.h"
#include <vector>

class Memento {

    public:
        Memento(vector<Shape*> elements);
        vector<Shape*> getMemento();
        void deleteMemento();
    private:
        vector<Shape*> shapes;

};

#endif