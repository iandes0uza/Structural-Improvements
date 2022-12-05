#pragma once
#include <string>
using namespace std;

//Shape Structure
struct Shape{
    public:
        ~Shape();
        Shape();
        Shape(int l, int w);
        int getLength();
        int getWidth();
        virtual void draw();

    private:
        const int length;
        const int width;
};

//Fillable objects must be shapes
struct Fillable{
    public:
        ~Fillable();
        Fillable(string f);
        string getFill();

    private:
        const string fill;
};

//Objects that have Text must be filled
struct Text{
    public:
        ~Text();
        Text(string t);
        string getText();

    private:
        const string text;
};

//Square item must be a shape
struct Square: public Shape{
    public:
        ~Square();
        Square(int l, int w, string o);
        string getOutline();
        void draw();

    private:
        const int area;
        const string outline;
};

//Filled Square inherits Fillable and Square
struct FilledSquare: public Square, public Fillable{
    public:
        ~FilledSquare();
        FilledSquare(int l, int w, string o, string f);
        void draw();
};

//FilledTextSquare is Fillable and includes Text
struct FilledTextSquare: public FilledSquare, public Text{
    public:
        ~FilledTextSquare();
        FilledTextSquare(int l, int w, string o, string f, string t);
        void draw();
};

//Circle item must be a shape
struct Circle: public Shape{
    public:
        ~Circle();
        Circle(int l, int w, string o);
        string getOutline();
        void draw();

    private:
        const string outline;
};

//FilledCircle inherits Fillable and Circle
struct FilledCircle: public Circle, public Fillable{
    public:
        ~FilledCircle();
        FilledCircle(int l, int w, string o, string f);
        void draw();
};

//Arc item must be a shape
struct Arc: public Shape{
    public:
        ~Arc();
        Arc(int l, int w, string o);
        string getOutline();
        void draw();

    private:
        const string outline;
};