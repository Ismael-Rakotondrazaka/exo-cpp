#include <iostream>
#include "personnel.h"
#include "patron.h"

using namespace std;

int main(int argc, char const *argv[])
{
    cout << "==============\n";
    Personnel personnel = Personnel("Damian Willard", "Comptable", 2000);
    personnel.affiche_personnel();

    cout << "==============\n";
    Patron patron = Patron("Dirk Howitzer", "PDG", 4000, 500, "Volvo");
    patron.affiche_patron();

    cout << "==============\n";
    return 0;
}
