//C program to convert decimal to binary number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i=0,j,a[100];
    cin>>n;
    while(n!=0)
    {
        a[i++]=n%2;
        n/=2;
    }

    for(j=i-1;j>=0;j--)
    {
        cout<<a[j];
    }
}

