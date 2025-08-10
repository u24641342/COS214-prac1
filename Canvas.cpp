#include "Canvas.h"

class Canvas {
    Shape* shapes;

    Canvas :: Canvas()
    {
        //shapes = new Shape();
        //should we ask Keegan or someone how to do the memento with the shapes?
        //atm im using an example where they use the code above to initialize the shapes array.
        //but shape is an abstract class. so what do we do?
    } 

    Memento* captureCurrent()
    {
        return new Memento(shapes);
    }

    void Canvas :: undoAction(Memento* prev)
    {
        shapes = prev->getMemento();
    }
}