//C program to print fibonacci series using recursion

//C program to print fibonacci series using recursion

#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n,i,a,b,c;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cout<<fibo(i)<<endl;
    }
}

