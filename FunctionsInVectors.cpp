#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> a; // declaration
    for (int i = 1; i <= 7; i++)
        a.push_back(i); // adding elements in vectors

    cout << "printing using iterators begin() and end()" << endl;
    for (auto i = a.begin(); i != a.end(); i++) // printing using begin and end functions
        cout << *i << " ";
    cout << endl;

    cout << "printing using iterators cbegin() and cend()" << endl;
    for (auto ir = a.cbegin(); ir != a.end(); ir++)
        cout << *ir << " ";
    cout << endl;

    cout << "printing using iterators rbegin() and rend()" << endl;
    for (auto ir1 = a.rbegin(); ir1 != a.rend(); ir1++)
        cout << *ir1 << " ";
    cout << endl;

    cout << "printing using iterators crbegin() and crend()" << endl;
    for (auto ir2 = a.crbegin(); ir2 != a.crend(); ir2++)
        cout << *ir2 << " ";
    cout << endl;
    return 0;
}