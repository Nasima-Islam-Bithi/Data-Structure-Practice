
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    try{
    cout<<"Enter two number: "<<endl;
    cin>>a>>b;
    if(b==0)
    {
        throw -1;
    }
    cout<<(float)a/b<<endl;

    }
    catch(...)
    //catch(int e)
    {
        cout<<"Exception: unexpected value for division..\nplease try again.."<<endl;
    }
}
