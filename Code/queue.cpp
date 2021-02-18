#include<bits/stdc++.h>
using namespace std;

void display(queue<int>q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
int main()
{
    queue<int>q;
    int a,i;
    for(i=1;i<=5;i++)
    {
        cin>>a;
        q.push(a);
    }
    display(q);
    cout<<"\nSize of queue: "<<q.size()<<endl;
    //cout<<q.front()<<endl;
    //cout<<q.back()<<endl;
}
