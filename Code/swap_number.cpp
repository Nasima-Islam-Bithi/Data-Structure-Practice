//C program to swap two numbers without using third variable.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"After Swapping: "<<endl;
    cout<<a<<" "<<b;

}
