#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nb = 10;
    int &refNb = nb;
    int *pointNb = &nb;

    cout << "Par référence " << endl;
    cout << "Variable :" << refNb << endl;
    cout << "Adresse :" << &refNb << endl;
    cout << "Valeur :" << refNb << endl;

    cout << "Par pointeur " << endl;
    cout << "Variable :" << pointNb << endl;
    cout << "Adresse :" << pointNb << endl;
    cout << "Valeur :" << *pointNb << endl;
    return 0;
}
