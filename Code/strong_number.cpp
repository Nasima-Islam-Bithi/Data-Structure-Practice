// Program to check whether the number is strong or not.
//A number can be said as a strong number when the sum of the factorial of the individual digits is equal to the number.




//C program to count the number of digit

#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n==1 || n<=0)
        return 1;
    else
        return n*fact(n-1);
}

int main()
{
    int n,s=0;

    cin>>n;
    int num=n;
    while(n!=0)
    {
        s=s+ fact(n%10);
        n/=10;
    }
    if(s==num)
    {
        cout<<"strong number"<<endl;
    }
   else
   {
       cout<<"Not strong number"<<endl;
   }
}


