#include <iostream>
#include "fraction.h"

using namespace std;

int main(int argc, char const *argv[])
{
    Fraction f1 = Fraction(2, 7);
    Fraction f2 = Fraction(1, 3);

    Fraction f3 = Fraction(f1 + f2);
    cout << f1.getString() << " + " << f2.getString() << " = " << f3.getString() << "\n";

    f3 = Fraction(f1 - f2);
    cout << f1.getString() << " - " << f2.getString() << " = " << f3.getString() << "\n";

    f3 = Fraction(f1 * f2);
    cout << f1.getString() << " * " << f2.getString() << " = " << f3.getString() << "\n";

    f3 = Fraction(f1 / f2);
    cout << f1.getString() << " / " << f2.getString() << " = " << f3.getString() << "\n";

    f3 = -(f1);
    cout << "-" << f1.getString() << " = " << f3.getString() << "\n";

    return 0;
}
