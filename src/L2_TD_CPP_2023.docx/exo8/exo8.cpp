#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    inline int fct(char, int);

    int p, n = 150;
    char c = 's';

    p = fct(c, n);

    cout << "fct(" << c << ", " << n << ") vaut : " << p << endl;

    return 0;
}

int fct(char car, int nb)
{
    int res;
    if (car == 'a')
        res = nb + car;
    else if (car == 's')
        res = nb - car;
    else
        res = nb * car;
    return res;
}
