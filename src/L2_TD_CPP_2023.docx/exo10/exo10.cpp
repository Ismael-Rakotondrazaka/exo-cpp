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
    double convert();
    void invert();
    void print();
};

Rational::Rational(int num = 0, int den = 1)
{
    this->num = num;
    this->den = den;
}

Rational::~Rational()
{
    cout << "Suppression de l'objet" << endl;
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

void Rational::print()
{
    cout << num << "/" << den << endl;
}

int main(int argc, char const *argv[])
{
    Rational *rational = new Rational();

    cout << "Avant :" << endl;
    rational->print();
    cout << rational->convert() << endl;

    rational->invert();

    cout << "Après inversion :" << endl;
    rational->print();
    cout << rational->convert() << endl;

    delete rational;

    return 0;
}
