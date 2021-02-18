//C program to print fibonacci series without using recursion

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,b,c;
    cin>>n;
    a=0;
    b=1;
    printf("0 1 ");
    for(i=3;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
}
