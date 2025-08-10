#ifndef SHAPE_H
#define SHAPE_H
#include <string>
#include <iostream>
using namespace std;

// Abstract Product
class Shape {
    protected:
        int length;
        int width;
        string colour;
        int position_X;
        int position_Y;
    public: 
        Shape(int length = 0, int width = 0, string colour = "white", int posX = 0, int posY = 0)
            : length(length), width(width), colour(colour), position_X(posX), position_Y(posY) {}
        virtual Shape* clone() const = 0;
        virtual ~Shape() = 0;
        virtual void toString() const = 0;
};

class Square : public Shape {
        public:
            Square(int length = 0, string colour = "white", int posX = 0, int posY = 0);
            Square(const Square& other);
            Shape* clone() const override;
            ~Square() override;
            void toString() const override;
    };

class Rectangle : public Shape {
        public:
            Rectangle(int length = 0, int width = 0, string colour = "white", int posX = 0, int posY = 0);
            Rectangle(const Rectangle& other);
            Shape* clone() const override;
            ~Rectangle() override;
            void toString() const override;
    };

class Textbox : public Shape {
        private:
            string text;
        public:
            Textbox(int length = 0, int width = 0, string colour = "white", int posX = 0, int posY = 0, string text = "");
            Textbox(const Textbox& other);
            Shape* clone() const override;
            ~Textbox() override;
            void toString() const override;
    };

#endif