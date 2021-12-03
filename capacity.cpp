#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    for (int i = 1; i <= 5; i++)
        a.push_back(i);
    for (auto i = a.begin(); i != a.end(); i++)
        cout << *i << " ";
    cout << endl;

    cout << "Size: " << a.size() << endl; //printing size of the vector

    cout<<"Max size: "<<a.max_size()<<endl; //max size of the vector

    a.resize(4);//resizing a vector
    cout<<"resized vector is: "<<a.size()<<endl;

    if(a.empty()==false)
        cout<<"Not empty";
    else
        cout<<"empty";
    return 0;
}