

//C program to convert decimal to hexadecimal number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int dec,i,j,r;
    char hex[100];
    cin>>dec;

    cout<<"Decimal "<<dec<<endl;
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
    cout<<"Hexadecimal :";
    for(j=i-1;j>=0;j--)
    {
        cout<<hex[j];
    }
}
