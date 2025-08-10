#include "Memento.h"


    Memento::Memento(vector<Shape*> elements)
    {
        shapes = elements;
    };

    vector<Shape*> Memento::getMemento() {
        return shapes;
    };

    Memento::~Memento() {
        for (Shape* shape : shapes) {
            delete shape;
        }
        shapes.clear();
    }
