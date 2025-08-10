#include "Canvas.h"

    Canvas :: Canvas()
    {
        // std::vector<Shape*> shapes = new std::vector<Shape*>();
        //should we ask Keegan or someone how to do the memento with the shapes?
        //atm im using an example where they use the code above to initialize the shapes array.
        //but shape is an abstract class. so what do we do?
    } 

    Canvas :: ~Canvas()
    {
        clearCanvas();
    }

    void Canvas::addShape(Shape* shape)
    {
        if (shape != nullptr) {
            shapes.push_back(shape->clone());    
        } 
        else 
        {
            std::cout << "Canvas.cpp addShape shape is nullptr." << std::endl;
        }
    }

    Memento* Canvas::captureCurrent()
    {
        return new Memento(shapes);
    }

    void Canvas :: undoAction(Memento* prev)
    {
        clearCanvas();
        shapes = prev->getMemento();
    }

    void Canvas :: clearCanvas() 
    {
        for (Shape* shape : shapes) {
        delete shape;
        }
        shapes.clear();
    }
