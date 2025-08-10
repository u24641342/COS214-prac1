#include "Memento.h"


    Memento::Memento(vector<Shape*> elements)
    {
        shapes = elements;
    };

    Memento::getMemento() {
        return shapes;
    };

    /* void deleteMemento() 
    {
        delete shapes;
        shapes = nullptr;
    };*/
