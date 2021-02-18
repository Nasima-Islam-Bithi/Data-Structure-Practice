#include<bits/stdc++.h>
using namespace std;



int main()
{
    vector<string>v1;
    vector<int>v2{10,20,30};
    vector<int>v3{50,60,70};
    v1.push_back("Nasima "); //push_back()
    v1.push_back("Islam ");
    v1.push_back("Bithi");
    vector<string>::iterator i;
    vector<string>::reverse_iterator r;
    for(i=v1.begin();i!=v1.end();i++)  //iterator
    {
        cout<<*i<<" ";
    }
cout<<endl;
    for(int j=0;j<v1.size();j++)  //size()
    {
        cout<<v1[j]<<" ";
    }
    cout<<endl;
    for(int j=0;j<v1.size();j++)  //at()
    {
        cout<<v1.at(j)<<" ";
    }
    cout<<endl;
    v1.pop_back();                //pop_back()
    cout<<v2.front()<<endl;       //front()
    cout<<v2.back()<<endl;         //back()
    v3.swap(v2);                   //swap()

    for(int j=0;j<v2.size();j++)
    {
        cout<<v2.at(j)<<" ";
    }
v3.clear();                //clear()
if(v3.empty())                 //empty()
{
    cout<<"\nEmpty"<<endl;
}
else
{
    cout<<"\nNot Empty"<<endl;
}

 for(r=v1.rbegin();r!=v1.rend();r++)  //rbegin(), rend()
    {
        cout<<*r<<" ";
    }
    cout<<endl;
v1.insert(v1.begin()+2,"Bithi ");     //insert()
v1.insert(v1.begin()+3,"Sweety ");
for(i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i<<" ";
    }

v1.erase(v1.begin()+3);
 cout<<endl;
for(i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i<<" ";
    }
     cout<<endl;


}
