#include "Memento.h"

class Memento {
    private:
    Shape* shapes;
public:
    Memento(Shape* elements)
    {
        shapes = elements;
    };

    void deleteMemento() 
    {
        delete shapes;
        shapes = nullptr;
    };
}