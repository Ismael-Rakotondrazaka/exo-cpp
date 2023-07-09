#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    double n, p;

    double &refN = n;
    double *pointP = &p;

    n = 25;
    p = 13;

    cout << "Valeur de n " << n << endl;
    cout << "Valeur de p " << p << endl;

    n = 30;
    (*pointP) = 18;

    cout << "Valeur de n après modification " << n << endl;
    cout << "Valeur de p après modification " << p << endl;

    return 0;
}
