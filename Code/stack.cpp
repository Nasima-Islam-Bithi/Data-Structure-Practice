#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<int>s;
    s.push(55);
    s.push(44);
    s.push(33);
    s.push(22);
    s.push(11);

    int a=0;
    cout<<s.size()<<endl;
    while(!s.empty())
    {
        a+=s.top();
        cout<<s.top()<<" ";
        s.pop();

    }
    cout<<"\nSum = "<<a<<endl;

}
