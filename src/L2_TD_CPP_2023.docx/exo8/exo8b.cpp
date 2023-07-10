#include <iostream>
#include "fct.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int p, n = 150;
    char c = 's';

    p = fct(c, n);

    cout << "fct(" << c << ", " << n << ") vaut : " << p << endl;

    return 0;
}