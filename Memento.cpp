#include "Memento.h"

class Memento {
    private:
    Shape* shapes;
public:
    Memento(Shape* elements)
    {
        
    };

    Shape getMemento() 
    {
        return *shapes;
    };

    void deleteMemento() 
    {
        delete shapes;
        shapes = nullptr;
    };
}