

//C program to count the number of digit

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,c=0;

    cin>>n;

    /*int d= log10(n)+1;
    cout<<d<<endl;*/

    while(n!=0)
    {
        c++;
        n/=10;
    }
   cout<<c<<endl;
}


