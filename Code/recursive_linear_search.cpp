
#include<bits/stdc++.h>
using namespace std;
int linear_search(int a[], int l,int h, int val)
{

    if(l>h)
        return -1;
    if(a[l]==val)
        return l+1;
    if(a[h]==val)
        return h+1;
    return linear_search(a,1+1,h-1,val);

}
int main()
{
    int a[] = {10, 324, 45, 90, 9808},n,i,val,f;
    n = sizeof(a)/sizeof(a[0]);
    cout<<"Enter a value to search";
    cin>>val;

    f=linear_search(a,0,n-1,val);
    if(f==-1)
    {
        cout<<val<<" is not found";
    }
    else
        cout<<val<<"is found and location is "<<f;

}
