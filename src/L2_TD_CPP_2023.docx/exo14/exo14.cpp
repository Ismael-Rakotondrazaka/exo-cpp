#include <iostream>

using namespace std;

class Heure
{
private:
    int heure;
    int minute;

public:
    Heure(int, int);
    ~Heure();
    void ecritInfo();
};

Heure::Heure(int heure, int minute)
{
    this->heure = heure;
    this->minute = minute;
}

Heure::~Heure()
{
    cout << "Appel du destructeur" << endl;
}

void Heure::ecritInfo()
{
    int futurHeure = this->heure;
    int futureMinute = this->minute + 1;

    if (futureMinute == 60)
    {
        futureMinute = 0;
        futurHeure++;
    }

    if (futurHeure == 24)
    {
        futurHeure = 0;
    }

    cout << "Dans une minute, il sera " << futurHeure << " heures " << futureMinute << endl;
}

int main(int argc, char const *argv[])
{
    Heure *heure = new Heure(23, 59);
    heure->ecritInfo();

    delete heure;

    return 0;
}
