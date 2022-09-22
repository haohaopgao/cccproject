#include <iostream>
#include <string>
using namespace std;
/*
输出
*************
*hello name!*
*************
*/
int main()
{
    string name;
    cin >> name;
    string shuchu = "Hello " + name + "!";
    string hang_jichu(shuchu.size(), ' ');
    string hang2_4 = "*" + hang_jichu + "*";
    string hang1_5(shuchu.size() + 2, '*');
    cout << hang1_5 << endl;
    cout << hang2_4 << endl;
    cout << "*" << shuchu << "*" << endl;
    cout << hang2_4 << endl;
    cout << hang1_5 << endl;
    system("pause");
    return 0;
}
/*
string hang_jichu(, ' ');
创建指定长度的字符串
*/
