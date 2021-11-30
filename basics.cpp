#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> num1 = {1, 2, 3, 4, 5};
    // vector<int> num2 = {6, 7, 8, 9, 10};
    // vector<int> num3(5, 12);
    // cout << "num1= ";
    // for (const int &i : num1)
    // {
    //     cout << i <<" ";
    // }

    // cout << "\nnum2= ";
    // for (const int &i : num2)
    // {
    //     cout << i <<" ";
    // }

    // cout << "\nnum3= ";
    // for (const int &i : num3)
    // {
    //     cout << i <<" ";
    // }

    // add elements in vector

    // cout << "Initial vectors are: ";
    // for (const int &i : num)
    // {
    //     cout << i << " ";
    // }
    // num.push_back(6);
    // num.push_back(7);
    // cout << "\nAfter pushing the elements: ";
    // for (const int &i : num)
    // {
    //     cout << i << " ";
    // }

    // access the elements in vector

    // cout<<"Element at index 0 is: "<<num1.at(0)<<endl;
    // cout<<"Element at index 0 is: "<<num1.at(1)<<endl;
    // cout<<"Element at index 0 is: "<<num1.at(4)<<endl;

    // change the vector elements

    // cout << "Initial vectors are: ";
    // for (const int &i : num1)
    // {
    //     cout << i << " ";
    // }
    // num1.at(1) = 100;
    // num1.at(3) = 300;
    // cout << "\nAfter changing the elements:  ";
    // for (const int &i : num1)
    // {
    //     cout << i <<" ";
    // }

    // deleting the elements in vector

    // vector<int>prime={2,3,5,7};
    // cout << "Initial vectors are: ";
    // for (int i : prime)
    // {
    //     cout << i << " ";
    // }
    // prime.pop_back();
    //  cout << "\nAfter deleting: ";
    // for (int i : prime)
    // {
    //     cout << i << " ";
    // }

    // iterators
    // vector<int>::iterator iter; // declare iterator
    // iter = num1.begin();
    // cout << "num1[0]= " << *iter << endl;
    // iter = num1.begin() + 2;
    // cout << "num1[2]= " << *iter << endl;
    // iter = num1.end() - 1;
    // cout << "num1[4]= " << *iter << endl;

    vector<int>::iterator iter;
    for (iter = num1.begin(); iter != num1.end(); ++iter)
    {
        cout << *iter << " ";
    }
    return 0;
}
