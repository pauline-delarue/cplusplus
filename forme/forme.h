# include <iostream>

class Forme {

public:

    void move (float x0, float y0) {
        x += x0;
        y += y0;
    }

private:

    int x;
    int y;

protected: 

    Forme (float x0, float y0) : x(x0), y(y0) {}

};

class Cercle : public Forme {

public:

    Cercle (float x0, float y0, float r0): Forme (x0,y0), rayon(r0) {}

    float area () {
        return 3.14159*rayon*rayon;
    }

private:

    float rayon;

};

class Rectangle : public Forme {

public: 

    Rectangle (float x0, float y0, float lo, float la) : Forme (x0,y0), largeur(la), longueur(lo) {}

    float area () {
        return largeur*longueur;
    } 

private:

    float largeur;
    float longueur;

};