#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
using namespace std;
#define xxx 10;

void test2()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //下标[]遍历
    for (size_t i = 0; i < v.size(); ++i)
    {
        v[i] += 1;
        cout << v[i] << " ";
    }
    cout << endl;

    //迭代器
    vector<int>::iterator it = v.begin();
    while (it != v.end())
    {

        cout << *it << " ";
        it++;
    }
    cout << endl;

    //反向迭代器
    vector<int>::reverse_iterator rit = v.rbegin();
    while (rit != v.rend())
    {
        cout << *rit << " ";
        ++rit;
    }
    //范围for
    for (auto e : v)
    {
        cout << e << " ";
    }
    cout << endl;
}

int main()
{
    test2();

    int aa = xxx;
    cout << aa << endl;

    system("pause");
    return 0;
}