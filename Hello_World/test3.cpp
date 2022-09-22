#include <iostream>
using namespace std;

class Student
{
private:
    /* data */
public:
    int x;
    int y;
    Student() {}
    Student(int x1, int y1)
    {
        x = x1;
        y = y1;
    };
};

int main()
{
    Student syu(1, 2);
    cout << syu.x;
    system("pause");
    return 0;
}