#include "Shape.h"

Shape::~Shape() 
{
    delete shape;
    // Destructor implementation
}

Rectangle::~Rectangle() 
{
    
}
Square::~Square() 
{

}
Textbox::~Textbox() 
{
    
}

Rectangle::Rectangle(int length, int width, string colour, int posX, int posY) : Shape(length, width, colour, posX, posY) {}

Square::Square(int length, string colour, int posX, int posY) : Shape(length, length, colour, posX, posY) {
    this->width = length;
}

Textbox::Textbox(int length, int width, string colour, int posX, int posY, string text) : Shape(length, width, colour, posX, posY), text(text) {}

Square::Square(const Square& other) : Shape(other) {
    this->length = other.length;
    this->width = other.width;
    this->colour = other.colour;
    this->position_X = other.position_X;
    this->position_Y = other.position_Y;
}
Rectangle::Rectangle(const Rectangle& other) : Shape(other) {
    this->length = other.length;
    this->width = other.width;
    this->colour = other.colour;
    this->position_X = other.position_X;
    this->position_Y = other.position_Y;
}
Textbox::Textbox(const Textbox& other) : Shape(other) {
    this->length = other.length;
    this->width = other.width;
    this->colour = other.colour;
    this->position_X = other.position_X;
    this->position_Y = other.position_Y;
    this->text = other.text;
}

Shape* Square::clone() const{
    return new Square(*this);
};

Shape* Rectangle::clone() const{
    return new Rectangle(*this);
};

Shape* Textbox::clone() const{
    return new Textbox(*this);
};