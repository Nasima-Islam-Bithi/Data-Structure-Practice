
//C program to print fibonacci triangle

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
    int n,i,j;
    cout<<"Enter range:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<fibo(j)<<"\t";
        }
        cout<<endl;
    }
}
