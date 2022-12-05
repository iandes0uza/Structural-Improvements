#pragma once
#include <string>
using namespace std;

class Shape{
    public:
        void draw();
        Shape(int l, int w);
        int getLength();
        int getWidth();

    private:
        const int l;
        const int w;
};

//Fillable objects must be shapes
class Fillable: public Shape{
    public:
        Fillable(string f);
        string getFill();

    private:
        const string fill;
};

//Objects that have Text must be filled
class Text: public Shape{
    public:
        Text(string t);
        string getText();

    private:
        const string text;
};

//Square item must be a shape
class Square: public Shape{
    public:
        Square(int l, int w, string o);
        string getOutlineColour();

    private:
        const int area
        const string outline;
};

//Filled Square inherits Fillable and Square
class FilledSquare: public Square, public Fillable{
    public:
        FilledSquare(int l, int w, string o, string f);
};

//FilledTextSquare is Fillable and includes Text
class FilledTextSquare: public FilledSquare, public Text{
    public:
        FilledTextSquare(int l, int w, string o, string f, string t);
};

//Circle item must be a shape
class Circle: public Shape{
    public:
        Circle(int l, int w, string o);
        string getOutlineColour();

    private:
        const int area
        const string outline;
};

//FilledCircle inherits Fillable and Circle
class FilledCircle: public Circle, public Fillable{
    public:
        FilledCircle(int l, int w, string o, string f);
};

//Arc item must be a shape
class Arc: public Shape{
    public:
        Arc(int l, int w, string o);
        string getOutlineColour();

    private:
        const string outline;
};