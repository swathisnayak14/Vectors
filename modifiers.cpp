#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector<int> a;
    a.assign(4, 7); // filling vector 'a' in with 7 in repetition of 4 times
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    a.push_back(10); // inserting 10 to the last position
    int n = a.size();
    cout << "The last element is: " << a[n - 1];
    cout << endl;

    a.pop_back();
    cout << "After popping: " << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    a.pop_back();
    cout << "After popping for second time: " << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    a.insert(a.begin(), 3); // inserting at the beginning
    cout << "After inserting: " << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "The first element is: " << a[0];
    cout << endl;

    a.erase(a.begin()); // deleting at the beginning
    cout << "After deletion: " << endl;
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    a.clear(); // erasing vector
    cout << "Vector size ater erase: " << a.size();
    cout << endl;

    vector<int> a1, a2;
    a1.push_back(3);
    a1.push_back(4);
    a2.push_back(5);
    a2.push_back(6);

    // printing after pushing the elements in vector
    cout << "a1 vector is: ";
    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";
    cout << endl;

    cout << "a2 vector is: ";
    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";
    cout << endl;

    a1.swap(a2);
    cout << "After swap vector a1 is: ";
    for (int i = 0; i < a1.size(); i++)
        cout << a1[i] << " ";
    cout << endl;

    cout << "After swap vector a2 is: ";
    for (int i = 0; i < a2.size(); i++)
        cout << a2[i] << " ";
    cout << endl;
    return 0;
}