
//C program to find minimum number in an array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],min,i,n;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    cout<<"Minimum number: "<<min<<endl;
}
