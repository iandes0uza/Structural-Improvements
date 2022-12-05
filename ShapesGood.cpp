#include <iostream>
#include <string>
#include "ShapesGood.h"

using namespace std;

//DESTRUCTORS
Shape::~Shape() {};
Fillable::~Fillable() {};
Text::~Text() {};
Square::~Square() {};
FilledSquare::~FilledSquare() {};
FilledTextSquare::~FilledTextSquare() {};
Circle::~Circle() {};
FilledCircle::~FilledCircle() {};
Arc::~Arc() {};

//SHAPE
Shape::Shape(): length(0), width(0) {};
//Constructor for one value, throws error
Shape::Shape(int l, int w): length(l), width(w) {};
//Creates the root of the outputted string
void Shape::draw(){ cout << "\nDrawing a "; };
//Getter functions
int Shape::getLength(){ return this->length; };
int Shape::getWidth(){ return this->width; };

//FILLABLE
Fillable::Fillable(string f): fill(f) {};
string Fillable::getFill() { return this->fill; };

//TEXT
Text::Text(string t): text(t) {};
string Text::getText() { return this->text; };

//SQUARE
Square::Square(int l, int w, string o): Shape(l, w), outline(o), area(l*w) {};
string Square::getOutline(){ return this->outline; };
void Square::draw() { Shape::draw(); cout << getOutline() <<" square."; };

//FILLED SQUARE
FilledSquare::FilledSquare(int l, int w, string o, string f): Square(l, w, o), Fillable(f) {};
void FilledSquare::draw() { Square::draw(); cout << " With " << getFill() << " fill."; };

//FILLED TEXT SQUARE
FilledTextSquare::FilledTextSquare(int l, int w, string o, string f, string t): FilledSquare(l, w, o, f), Text(t) {};
void FilledTextSquare::draw() { FilledSquare::draw(); cout << " Containing the text: \"" << getText() << "\"."; };

//CIRCLE
Circle::Circle(int l, int w, string o): Shape(l, w), outline(o) {};
string Circle::getOutline(){ return this->outline; };
void Circle::draw() { Shape::draw(); cout << getOutline() <<" circle."; };

//FILLED CIRCLE
FilledCircle::FilledCircle(int l, int w, string o, string f): Circle(l, w, o), Fillable(f) {};
void FilledCircle::draw() { Circle::draw(); cout << " With " << getFill() << " fill."; };

//ARC
Arc::Arc(int l, int w, string o): Shape(l, w), outline(o) {};
string Arc::getOutline(){ return this->outline; };
void Arc::draw() { Shape::draw(); cout << getOutline() <<" arc."; };



