//C program to convert Hexadecimal to Binary number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char hex[100];
    gets(hex);
    int i,l;
    l=strlen(hex);
    for(i=0;i<l;i++)
    {
        if(hex[i]=='0')
        {
            cout<<"0000";
        }
        else if(hex[i]=='1')
        {
            cout<<"0001";
        }
        else if(hex[i]=='2')
        {
            cout<<"0010";
        }
        else if(hex[i]=='3')
        {
            cout<<"0011";
        }
        else if(hex[i]=='4')
        {
            cout<<"0100";
        }
        else if(hex[i]=='5')
        {
            cout<<"0101";

        }
        else if(hex[i]=='6')
        {
            cout<<"0110";
        }
        else if(hex[i]=='7')
        {
            cout<<"0111";
        }
        else if(hex[i]=='8')
        {
            cout<<"1000";
        }
        else if(hex[i]=='9')
        {
            cout<<"1001";
        }
        else if(hex[i]=='A')
        {
            cout<<"1010";
        }
        else if(hex[i]=='B')
        {
            cout<<"1011";
        }
        else if(hex[i]=='C')
        {
            cout<<"1100";
        }
        else if(hex[i]=='D')
        {
            cout<<"1101";
        }
        else if(hex[i]=='E')
        {
            cout<<"1110";
        }
        else if(hex[i]=='F')
        {
            cout<<"1111";
        }
    }
}

