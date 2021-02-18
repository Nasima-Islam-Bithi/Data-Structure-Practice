//C program to check palindrome number

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,sum=0,num;
    cin>>n;
    num=n;
    while(n!=0)
    {
        sum= sum*10+ (n%10);
        n=n/10;
    }


    if(num==sum)
    {
        cout<<"Palindrome Number"<<endl;
    }
    else
    {
         cout<<"Not Palindrome Number"<<endl;
    }

}

