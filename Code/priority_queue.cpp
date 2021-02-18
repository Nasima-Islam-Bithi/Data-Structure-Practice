#include<bits/stdc++.h>
using namespace std;
void display(priority_queue<int>p)
{
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        p.pop();

    }
    cout<<endl;
}
int main()
{
    priority_queue<int>p;
    p.push(100);
    p.push(200);
    p.push(150);
    p.push(108);
    display(p);
    p.pop();
    display(p);
    cout<<p.top()<<endl;
    cout<<p.size();

}
