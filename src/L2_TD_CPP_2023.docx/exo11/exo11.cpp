#include <iostream>

using namespace std;

class Rational
{
private:
    int num;
    int den;

public:
    Rational(int, int);
    ~Rational();
    int numerator();
    int denominator();
    double convert();
    void invert();
};

Rational::Rational(int num, int den)
{
    this->num = num;
    this->den = den;
}

Rational::~Rational()
{
    cout << "Suppression de l'objet" << endl;
}

int Rational::numerator() {
    return num;
}

int Rational::denominator() {
    return den;
}

double Rational::convert()
{
    return (double)num / den;
}

void Rational::invert()
{
    int temp = num;
    num = den;
    den = temp;
}

int main(int argc, char const *argv[])
{
    Rational *rational = new Rational(5, 2);

    cout << "Avant :" << endl;
    cout << rational->numerator() << "/" << rational->denominator() << endl;
    cout << rational->convert() << endl;

    rational->invert();

    cout << "Après inversion :" << endl;
    cout << rational->numerator() << "/" << rational->denominator() << endl;
    cout << rational->convert() << endl;

    delete rational;

    return 0;
}
