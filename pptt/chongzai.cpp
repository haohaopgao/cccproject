/*
    重载分为函数的重载 和  运算符的重载
    函数的重载要求 函数名相同但是形参不同

*/

#include <iostream>
using namespace std;

class Aps
{
public:
    void setXY(int a, int b)
    {
        x = a;
        y = b;
    }
    int getX_Y()
    {
        return x * y;
    }
    Aps operator+(const Aps &a)
    {
        Aps aa;
        aa.setXY(this->x + a.x, this->y + a.y);
        return aa;
    }

private:
    int x;
    int y;
};
int main()
{
    Aps ps1, ps2;
    ps1.setXY(1, 2);
    ps2.setXY(3, 4);

    Aps ps3 = ps1 + ps2;

    cout << ps3.getX_Y() << endl;

    system("pause");
    return 0;
}