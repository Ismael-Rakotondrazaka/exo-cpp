#include <iostream>

using namespace std;

#define nb 10
#define exclus 5

int main(int argc, char const *argv[])
{
    int valeurs[nb], i, nbval = 0;

    cout << "Saisissez " << nb << endl;

    for (i = 0; i < nb; i++)
        cin >> valeurs[i];

    for (i = 0; i < nb; i++)
    {
        switch (valeurs[i])
        {
        case exclus - 1:
        case exclus:
        case exclus + 1:
            nbval++;
        }
    }

    cout << nbval << " valeurs sont interdites" << endl;

    return 0;
}