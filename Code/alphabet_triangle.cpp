
//C program to print alphabet triangle

/*
Enter range: 6
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
ABCDEFEDCBA

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,j,s;
    cout<<"Enter range: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {

        for(s=0;s<n-i;s++)
        {
            cout<<" ";
        }
        k=0;
        for(j=1;j<=2*i-1;j++)
        {
            if(i>=j)
            {
                k=j;
            }
            else
            {
                k--;
            }
            printf("%c",k+64);
        }
        cout<<endl;
    }
}

