#include <iostream>

using namespace std;

class Rational
{
private:
    int num;
    int den;
    static int compte;

public:
    Rational(int, int);
    ~Rational();
    double convert();
    void invert();
    void print();
    static void afficherCompteur();
};

int Rational::compte = 0;

Rational::Rational(int num = 0, int den = 1)
{
    compte++;
    this->num = num;
    this->den = den;
}

Rational::~Rational()
{
    compte--;
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

void Rational::afficherCompteur()
{
    cout << "Il y a maintenant " << compte << " rationnels" << endl;
}

int main(int argc, char const *argv[])
{
    Rational *rational1 = new Rational(5, 2);
    Rational *rational2 = new Rational(5, 2);

    Rational::afficherCompteur();

    Rational *rational3 = new Rational(5, 2);
    Rational *rational4 = new Rational(5, 2);
    Rational *rational5 = new Rational(5, 2);
    Rational *rational6 = new Rational(5, 2);

    Rational::afficherCompteur();

    delete rational1;
    delete rational2;
    delete rational3;
    delete rational4;

    Rational::afficherCompteur();

    Rational *rational7 = new Rational(5, 2);

    Rational::afficherCompteur();

    return 0;
}
