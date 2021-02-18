
//C program to convert octal to decimal number

#include<bits/stdc++.h>
using namespace std;

int power(int a,int b)
{
    int p=1;
    if(b>0)
    {
        for(int i=1; i<=b; i++)
        {
            p=p*a;
        }
    }
    return p;
}
int main()
{
    int oct,d,j,s=0;
    cin>>oct;
    d=(int)log10(oct)+1;
    j=0;
    while(oct!=0)
    {
        s=s+((oct%10)* power(8,j));
        oct/=10;
        j++;
    }
    cout<<s<<endl;
}




