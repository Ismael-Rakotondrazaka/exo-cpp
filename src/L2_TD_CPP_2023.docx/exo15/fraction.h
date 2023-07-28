#include <iostream>
#include <string>

using namespace std;

class Fraction
{
private:
    int num;
    int den;
    static int PGCD(int, int);

public:
    /** Constructeur */
    Fraction(int num, int den);
    /** Constructeur par recopie */
    Fraction(const Fraction &);
    /** Destructeur */
    ~Fraction();
    /* Surcharge d'opérateur */
    Fraction operator+(const Fraction &);
    Fraction operator-(const Fraction &);
    Fraction operator*(const Fraction &);
    Fraction operator/(const Fraction &);
    Fraction operator-(); // opposite
    /* Getters */
    int getNum() const;
    int getDen() const;
    string getString();
    /* Setters */
    void setNum(int);
    void setDen(int);
    /* methods */
    void afficher();
    void reduire();
    static void reduire(Fraction &fraction);
};

Fraction::Fraction(int num, int den)
{
    this->num = num;
    this->den = den;
}

Fraction::Fraction(const Fraction &fraction)
{
    this->num = fraction.num;
    this->den = fraction.den;
}

Fraction::~Fraction()
{
}

int Fraction::PGCD(int a, int b)
{
    // Ensure a is greater than or equal to b
    if (b > a)
    {
        swap(a, b);
    }

    while (b != 0)
    {
        int remainder = a % b;
        a = b;
        b = remainder;
    }

    return a;
}

void Fraction::reduire(Fraction &fraction)
{
    int pgcd = Fraction::PGCD(fraction.num, fraction.den);
    fraction.setNum(fraction.num / pgcd);
    fraction.setDen(fraction.den / pgcd);
}

void Fraction::reduire()
{
    int pgcd = Fraction::PGCD(this->num, this->den);
    int newNum = this->num / pgcd;
    int newDen = this->den / pgcd;
    if (newDen < 0)
    {
        newNum = -newNum;
        newDen = -newDen;
    }

    this->num = newNum;
    this->den = newDen;
}

Fraction Fraction::operator+(const Fraction &f)
{
    Fraction fraction = Fraction(this->num * f.den + f.num * this->den, this->den * f.den);
    fraction.reduire();
    return fraction;
}

Fraction Fraction::operator-(const Fraction &f)
{
    Fraction fraction = Fraction(this->num * f.den - f.num * this->den, this->den * f.den);
    fraction.reduire();
    return fraction;
}

Fraction Fraction::operator*(const Fraction &f)
{
    Fraction fraction = Fraction(this->num * f.num, this->den * f.den);
    fraction.reduire();
    return fraction;
}

Fraction Fraction::operator/(const Fraction &f)
{
    Fraction fraction = Fraction(this->num * f.den, this->den * f.num);
    fraction.reduire();
    return fraction;
}

Fraction Fraction::operator-()
{
    Fraction fraction = Fraction(-this->num, this->den);
    fraction.reduire();
    return fraction;
}

int Fraction::getNum() const
{
    return this->num;
}

int Fraction::getDen() const
{
    return this->den;
}

string Fraction::getString()
{
    return (to_string(this->num) + "/" + to_string(this->den));
}

void Fraction::setNum(int num)
{
    this->num = num;
}

void Fraction::setDen(int den)
{
    this->den = den;
}

void Fraction::afficher()
{
    cout << this->num << "/" << this->den << " ";
}