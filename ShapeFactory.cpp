#include "ShapeFactory.h"

Shape* SquareFactory::createShape(int length = 0, int width = 0, string colour = "white", int posX = 0, int posY = 0, string text = "") const {
    return new Square(length, colour, posX, posY);
}
void SquareFactory::toString() {
    // Implementation for Square
}
Shape* RectangleFactory::createShape(int length = 0, int width = 0, string colour = "white", int posX = 0, int posY = 0, string text = "") const {
    return new Rectangle(length, width, colour, posX, posY);
}
void RectangleFactory::toString() {
    // Implementation for Rectangle
}
Shape* TextboxFactory::createShape(int length = 0, int width = 0, string colour = "white", int posX = 0, int posY = 0, string text = "") const {
    return new Textbox(length, width, colour, posX, posY, text);
}
void TextboxFactory::toString() {
    // Implementation for Textbox
}