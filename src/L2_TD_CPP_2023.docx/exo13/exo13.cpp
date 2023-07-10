#include <iostream>

using namespace std;

class Chaine
{
private:
    string chars;
    int length;

public:
    Chaine(string chars);
    ~Chaine();
    string getChaine();
    void setChaine(string);
    int getLongueur();
    void afficher();
    char extraire(int);
};

Chaine::Chaine(string chars)
{
    this->chars = chars;
}

Chaine::~Chaine()
{
}

string Chaine::getChaine()
{
    return this->chars;
}

void Chaine::setChaine(string chars)
{
    this->chars = chars;
}

int Chaine::getLongueur()
{
    return this->chars.length();
}

void Chaine::afficher()
{
    cout << "La chaine est : " << this->chars << " et a une longueur " << this->getLongueur() << endl;
}

char Chaine::extraire(int index)
{
    return this->chars[index];
}

int main(int argc, char const *argv[])
{
    Chaine chaine = Chaine("Hello");

    cout << "C : " << chaine.getChaine() << endl;
    cout << "L : " << chaine.getLongueur() << endl;
    chaine.afficher();

    chaine.setChaine("World!");
    chaine.afficher();

    int index = 5;
    cout << "Charactère à la position " << index << " : " << chaine.extraire(index) << endl;

    return 0;
}
