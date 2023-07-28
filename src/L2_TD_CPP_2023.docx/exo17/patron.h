#ifndef PATRON_H
#define PATRON_H

#include <iostream>
#include <string>
#include "personnel.h"

using namespace std;

class Patron : public Personnel
{
private:
    double bonus_annuel;
    string marque_voiture_fonction;

public:
    Patron(string, string, double, double, string);
    Patron(const Patron &);
    ~Patron();
    void affiche_patron();
};

Patron::Patron(string nom, string position, double salaire, double bonus_annuel, string marque_voiture_fonction) : Personnel(nom, position, salaire)
{
    this->bonus_annuel = bonus_annuel;
    this->marque_voiture_fonction = marque_voiture_fonction;
}

Patron::Patron(const Patron &patron) : Personnel(patron)
{
    this->bonus_annuel = patron.bonus_annuel;
    this->marque_voiture_fonction = patron.marque_voiture_fonction;
}

Patron::~Patron()
{
}

void Patron::affiche_patron()
{
    affiche_personnel();
    cout << "Bonus annuel: " << this->bonus_annuel << "\n";
    cout << "Marque de voiture de fonction: " << this->marque_voiture_fonction << "\n";
}

#endif