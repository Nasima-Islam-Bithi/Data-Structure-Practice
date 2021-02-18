//C program to convert octal to hexadecimal number

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
    int oct,d,j,i,s=0;
    char hex[100];
    cin>>oct;
    d=(int)log10(oct)+1;
    j=0;
    while(oct!=0)
    {
        s=s+((oct%10)* power(8,j));
        oct/=10;
        j++;
    }

    int dec=s;
    i=0;
    while(dec!=0)
    {
        int r= dec%16;
        if(r>=10 && r<=15)
       {
           hex[i]=r+55;
       }
       else if(r>=0 && r<=9)
       {
           hex[i]=r+48;
       }
        dec/=16;
        i++;
    }
    cout<<"Octal to hexadecimal: ";
    for(j=i-1;j>=0;j--)
    {
        cout<<hex[j];
    }
}




