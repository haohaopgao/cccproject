//测试C++继承
#include <iostream>

using namespace std;
class Shape
{
private:
    /* data */
public:
    void setWidth(int w)
    {
        width = w;
    }
    void setHeigh(int h)
    {
        heigh = h;
    }

protected:
    int width;
    int heigh;
};
class huafei
{
public:
    int zonghuafei(int x)
    {
        return 55 * x;
    }
};
class Tuxing : public Shape, public huafei
{
public:
    int getMianji()
    {
        return width * heigh;
    }
};
int main()
{
    Tuxing tu;
    tu.setHeigh(5);
    tu.setWidth(10);
    int mianji = tu.getMianji();
    int huafei = tu.zonghuafei(mianji);
    cout << "you need:" << huafei << endl;
    system("pause");
    return 0;
}