#include "Shape.h"

Shape* Square::clone(){
    
    return new Square(*this);
};

Shape* Rectangle::clone(){
    return new Rectangle(*this);
};

Shape* Textbox::clone(){
    return new Textbox(*this);
};