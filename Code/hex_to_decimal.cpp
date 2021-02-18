//C program to convert Hexadecimal to Decimal number

#include<bits/stdc++.h>
using namespace std;

int power(int a,int b)
{
    int p=1;
    for(int i=1;i<=b;i++)
    {
        p=p*a;
    }
    return p;
}
int main()
{
    char hex[100];
    gets(hex);
    int i,l,p,j,s=0;
    l=strlen(hex);
    j=l-1;
    for(i=0; i<l; i++)
    {
        if(hex[i]>='A' && hex[i]<='F')
        {
            p= hex[i]-55;
        }
        else if(hex[i]>='0' && hex[i]<='9')
        {
            p= hex[i]-48;
        }
        s=s+ p* power(16,j);
        j--;
    }
    cout<<s<<endl;
}


