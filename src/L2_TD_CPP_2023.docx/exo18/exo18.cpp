#include <iostream>
#include "personnel.h"
#include "patron.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "==============\n";
    Personnel *personnel = new Personnel("Damian Willard", "Comptable", 2000);

    Patron patron = Patron("Dirk Howitzer", "PDG", 4000, 500, "Volvo");

    Personnel *pointeur_personnel = &patron;
    pointeur_personnel->affiche();

    cout << "==============\n";

    delete personnel;
    return 0;
}
