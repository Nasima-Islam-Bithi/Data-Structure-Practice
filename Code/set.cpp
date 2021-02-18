#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    set<int>::iterator i;
    s.insert(7);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(6);
    s.insert(7);
    for( i=s.begin();i!=s.end();i++)
        cout<<*i<<" ";

    cout<<s.size()<<endl;
    i=s.find(3);
    s.erase(i);
    for( i=s.begin();i!=s.end();i++)
        cout<<*i<<" ";

    if(s.count(2)==0)
    {
        cout<<"\nNot found"<<endl;
    }
    else
    {
        cout<<"\nfound"<<endl;
    }
    s.clear();

}
