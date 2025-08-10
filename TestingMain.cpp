#include <iostream>
#include "Canvas.h"
#include "Shape.h"
#include "ShapeFactory.h"
#include "ExportCanvas.h"
#include "Caretaker.h"
// #include "Memento.h"

int main()
{
    // Create a canvas
    Canvas canvas;
    // Create shape factories
    SquareFactory squareFactory;
    RectangleFactory rectangleFactory;
    TextboxFactory textboxFactory;
    // Create shapes using factories
    Shape* square1 = squareFactory.createShape(5, 0, "blue", 10, 10);
    Shape* rectangle1 = rectangleFactory.createShape(10, 5, "red", 20, 20);
    Shape* textbox1 = textboxFactory.createShape(15, 10, "green", 30, 30, "Hello World");
    Shape* square2 = square1->clone();
    Shape* rectangle2 = rectangle1->clone();
    Shape* textbox2 = textbox1->clone();
    canvas.addShape(square1);
    //canvas.addShape(rectangle1);
    //canvas.addShape(textbox1);
    
    // Capture the current state of the canvas
    Caretaker caretaker;
    Memento* memento = canvas.captureCurrent();
    
    
    canvas.addShape(square2);
    canvas.addShape(rectangle2);
    canvas.addShape(textbox2);
    cout << "Initial canvas state:" << std::endl;
    canvas.toString();
    caretaker.addMemento(memento);
    canvas.undoAction(caretaker.getMemento());
    std::cout << "Canvas state after undo:" << std::endl;
    canvas.toString();

    // Export the canvas to a file
    PNGExporter pngExporter(&canvas);
    PDFExporter pdfExporter(&canvas);
    pngExporter.exportToFile();
    pdfExporter.exportToFile();
    // // Clear the canvas
    // canvas.clearCanvas();
    // // Undo the last action
    // canvas.undoAction(memento);
    // Clean up
    delete square1;
    delete rectangle1;   
    delete textbox1;
    delete square2;
    delete rectangle2;   
    delete textbox2;
    // memento->deleteMemento();
    // delete memento;
    std::cout << "Testing completed successfully." << std::endl;

    return 0;
}