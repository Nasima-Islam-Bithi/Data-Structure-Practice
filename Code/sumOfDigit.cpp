

//C program to print sum of digit

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s=0;

    cin>>n;

    while(n!=0)
    {
        s=s+ n%10;
        n/=10;
    }
   cout<<s<<endl;
}

