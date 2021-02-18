//C program to find maximum number in an array

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],max,i,n;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    cout<<"Maximum number: "<<max<<endl;
}
