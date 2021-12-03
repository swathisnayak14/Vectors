#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int>a;
    for(int i=1;i<=10;i++)
        a.push_back(i*10);

        cout<<"Reference operator [g]: a[2]= "<<a[2]<<endl;//using reference operator to print third ele in a

        cout<<"at: a.at(4)= "<<a.at(4)<<endl; //using at operator

        cout<<"front(): a.front()= "<<a.front()<<endl; //using front

        cout<<"back(): a.back()= "<<a.back()<<endl;//back 

        int *pos=a.data();//points to the first ele

        cout<<"the first ele is "<<*pos<<endl; //using *pos to print the first ele in vector
    return 0;

}