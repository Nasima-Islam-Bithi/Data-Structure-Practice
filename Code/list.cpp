#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int>::iterator i;
    list<int>l{11,22,33,44,55,11};
    l.push_back(66);
    l.push_front(10);
    l.pop_back();
    l.pop_front();
    for(i=l.begin(); i!=l.end(); i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    l.unique();
    l.sort();
    l.reverse();

    for(i=l.begin(); i!=l.end(); i++)
    {
        cout<<*i<<" ";
    }
    l.clear();

}
