#include <iostream>
#include "vecteur3d.h"

using namespace std;

int main()
{
    // Création de deux vecteurs
    Vecteur3d v1(1.0, 2.0, 3.0);
    Vecteur3d v2(4.0, 5.0, 6.0);

    // Test de l'opérateur d'addition
    Vecteur3d somme = v1 + v2;
    cout << "Somme : ";
    somme.afficher();

    // Test de l'opérateur binaire *
    double produitScalaire = v1 * v2;
    cout << "Produit scalaire : " << produitScalaire << endl;

    return 0;
}
