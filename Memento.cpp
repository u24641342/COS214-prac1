#include "Memento.h"


    Memento::Memento(vector<Shape*> elements)
    {
        for (Shape* shape : elements) {
            if (shape != nullptr) {
                shapes.push_back(shape->clone());
            }
        }
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
