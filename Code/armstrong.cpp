
//C program to check armstrong number

#include<bits/stdc++.h>
using namespace std;

int power(int a,int b)
{
    int p=1,i;
    for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    return p;
}
int main()
{
    int n,i,d,s=0;

    cin>>n;
    int num=n;
    d=(int) log10(n)+1;
    while(n!=0)
    {
        s=s+ power(n%10,d);
        n/=10;
    }
   if(s==num)
   {
       cout<<"Armstrong number"<<endl;
   }
   else
   {
       cout<<"Not Armstrong number"<<endl;
   }
}

