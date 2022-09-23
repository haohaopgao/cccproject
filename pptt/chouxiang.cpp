#include <iostream>
using namespace std;

class jichu
{
protected:
    int x;
    int y;
    int z;

public:
    jichu(int a = 0, int b = 0, int c = 0)
    {
        x = a;
        y = b;
        z = c;
    }
    virtual void fanhui() = 0;
};

class jicheng : public jichu
{
public:
    void fanhui()
    {
        cout << x << endl;
    }
};
int main()
{
    jicheng ji;
    ji.fanhui();
    system("pause");
    return 0;
}
