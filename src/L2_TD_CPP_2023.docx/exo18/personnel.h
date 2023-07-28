#ifndef PERSONNEL_H
#define PERSONNEL_H

#include <iostream>
#include <string>

using namespace std;

class Personnel
{
private:
    string nom;
    string position;
    double salaire;

public:
    Personnel(string, string, double);
    Personnel(const Personnel &);
    ~Personnel();
    virtual void affiche() const; // will be binded during the runtime not the compile time
};

Personnel::Personnel(string nom, string position, double salaire)
{
    this->nom = nom;
    this->position = position;
    this->salaire = salaire;
}

Personnel::~Personnel()
{
}

Personnel::Personnel(const Personnel &personnel)
{
    this->nom = personnel.nom;
    this->position = personnel.position;
    this->salaire = personnel.salaire;
}

void Personnel::affiche() const
{
    cout << "Nom: " << this->nom << "\n";
    cout << "Position: " << this->position << "\n";
    cout << "Salaire: " << this->salaire << "\n";
}

#endif