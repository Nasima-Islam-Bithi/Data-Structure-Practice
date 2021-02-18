#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=5,m=10;
    int *p=&n;
    int *q=&m;
    cout<<p<<endl;
    cout<<*p<<endl;
    cout<<&n<<endl;
    cout<<"Before swapping: "<<*p<<" "<<*q<<endl;
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q ;
    cout<<"After swapping: "<<*p<<" "<<*q<<endl;


}
