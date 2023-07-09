#include <iostream>

using namespace std;

void remplitTab(int[], int);
void afficherTab(int[], int);

int main(int argc, char const *argv[])
{
    int taille = 10;
    int tab[taille];
    remplitTab(tab, taille);
    afficherTab(tab, taille);

    return 0;
}

void remplitTab(int tab[], int taille)
{
    cout << "Entrer successivement les éléments du tableau :" << endl;
    for (int i = 0; i < taille; i++)
    {
        cin >> tab[i];
    }
}

void afficherTab(int tab[], int taille)
{
    cout << "Les éléments du tableau ";
    for (int i = 0; i < taille; i++)
    {
        cout << tab[i] << endl;
    }
}