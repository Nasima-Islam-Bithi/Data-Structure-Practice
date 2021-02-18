#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string>m;
    m[1]="Nasima";
    m[5]="Tithi";
    m[4]="Islam";
    m[3]="Bithi";
    map<int,string>::iterator i;
    map<int,string>::reverse_iterator j;
    for(i=m.begin(); i!=m.end(); i++)
    {
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
    m[6]="Sweety";
    m.insert(make_pair(2,"Nusu"));
    cout<<m.size()<<endl;


    map<int,int>m1= {{1,100},{2,89},{3,90}};
    cout<<m1.at(1)<<endl;
    for(i=m.begin(); i!=m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    cout<<"Search:";
    i=m.find(3);
    cout<<i->first<<" "<<i->second<<endl;
    m.erase(i);
    for(i=m.begin(); i!=m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
    m.clear();
    for(i=m.begin(); i!=m.end(); i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }
}
