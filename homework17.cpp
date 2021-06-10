// homework17.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
class Vector 
{
private:
    double x;
    double y;
    double z;
public:
    Vector(): x(3), y(5), z(7)
    {
    }
    Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
    {
    }
    double vector(double a, double b, double c)
    {
        return sqrt(pow(a, 2) + (pow(b, 2) + (pow(c, 2));
    }
    void Show()
    {
    
        std::cout <<'\n'<< x << ' ' << y << ' ' << z;
        std::cout << '\n' << vector(2, 4, 6) << "\n";
    }
};
int main()
{
    Vector v, v1;
    v.Show(); 
}
