//C program to check Call by value and call by reference

#include<bits/stdc++.h>
using namespace std;

void swap_val(int a,int b)
{
    a=a+b;
    b=a-b;
    a=a-b;

}
void swap_ref(int *a,int *b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;

}
int main()
{
   int a=4,b=6;
   swap_val(a,b);
   cout<<"Call by value     : "<<a<<" "<<b<<endl;
   swap_ref(&a,&b);
   cout<<"Call by reference : "<<a<<" "<<b<<endl;
}
