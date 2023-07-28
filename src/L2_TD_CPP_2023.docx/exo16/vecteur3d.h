#include <iostream>

class Vecteur3d
{
private:
    double x, y, z;

public:
    Vecteur3d();
    Vecteur3d(double, double, double);
    Vecteur3d(const Vecteur3d &);
    ~Vecteur3d();
    Vecteur3d operator+(const Vecteur3d &) const;
    double operator*(const Vecteur3d &) const;
    void afficher() const;
};

Vecteur3d::Vecteur3d()
{
    this->x = 0;
    this->y = 0;
    this->z = 0;
}

Vecteur3d::Vecteur3d(double x_val, double y_val, double z_val)
{
    this->x = x_val;
    this->y = y_val;
    this->z = z_val;
}

Vecteur3d::Vecteur3d(const Vecteur3d &vecteur)
{
    this->x = vecteur.x;
    this->y = vecteur.y;
    this->z = vecteur.z;
}

Vecteur3d::~Vecteur3d()
{
}

Vecteur3d Vecteur3d::operator+(const Vecteur3d &autre) const
{
    return Vecteur3d(x + autre.x, y + autre.y, z + autre.z);
}

double Vecteur3d::operator*(const Vecteur3d &autre) const
{
    return x * autre.x + y * autre.y + z * autre.z;
}

void Vecteur3d::afficher() const
{
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}