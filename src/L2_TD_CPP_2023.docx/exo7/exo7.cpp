#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int nbval, *adi;
    double *add, *adtab;

    adi = new int;
    add = new double[100]();

    cout << "Combien de valeurs ?" << endl;
    cin >> nbval;

    adtab = (new double[nbval]());

    delete adi;
    delete[] add;
    delete[] adtab;

    return 0;
}