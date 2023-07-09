#include <iostream>
#include <math.h>

using namespace std;

void calculer(double, double &, double &);

int main(int argc, char const *argv[])
{
    double rayon, area, circum;

    rayon = 4;

    calculer(rayon, area, circum);

    cout << "Rayon : " << rayon << endl;
    cout << "Surface : " << area << endl;
    cout << "Circonférence : " << circum << endl;
    return 0;
}

void calculer(double rayon, double &area, double &circum)
{
    area = M_PI * pow(rayon, 2);
    circum = 2 * M_PI * rayon;
}