#include "Canvas.h"

    Canvas :: Canvas()
    {
        //shapes = new Shape();
        //should we ask Keegan or someone how to do the memento with the shapes?
        //atm im using an example where they use the code above to initialize the shapes array.
        //but shape is an abstract class. so what do we do?
    } 

    void Canvas::addShape(Shape* shape)
    {
        if (shape != nullptr) {
            shapes.push_back(shape);
        } else {
            std::cerr << "Cannot add a null shape." << std::endl;
        }
    }
    Memento* Canvas::captureCurrent()
    {
        return new Memento(shapes);
    }

    void Canvas :: undoAction(Memento* prev)
    {
        shapes = prev->getMemento();
    }
