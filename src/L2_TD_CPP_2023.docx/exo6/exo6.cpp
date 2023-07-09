#include <iostream>

using namespace std;

struct Essai
{
    int n;
    double x;
};

void raz1(Essai *&);
void raz2(Essai **);

int main(int argc, char const *argv[])
{
    Essai *essai1 = new Essai();

    essai1->n = 10;
    essai1->x = 3.14;

    cout << "Par référence : " << endl;
    cout << "Avant :" << endl;
    cout << essai1->n << endl;
    cout << essai1->x << endl;
    raz1(essai1);
    cout << "Après :" << endl;
    cout << essai1->n << endl;
    cout << essai1->x << endl;

    Essai *essai2 = new Essai();

    essai2->n = 20;
    essai2->x = 6.28;

    cout << "Par pointeur : " << endl;
    cout << "Avant :" << endl;
    cout << essai2->n << endl;
    cout << essai2->x << endl;
    raz2(&essai2);
    cout << "Après :" << endl;
    cout << essai2->n << endl;
    cout << essai2->x << endl;

    return 0;
}

void raz1(Essai *&essai)
{
    essai->n = 0;
    essai->x = 0;
}

void raz2(Essai **essai)
{
    (*essai)->n = 0;
    (*essai)->x = 0;
}
