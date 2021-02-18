//C program to print multiplication of two matrix.

#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a[10][10],b[10][10],m[10][10],r,c,i,j,k;
     cout<<"Enter the size of matrix"<<endl;
     cin>>r>>c;
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             cin>>a[i][j];
         }
     }
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             cin>>b[i][j];
         }
     }
for(i=0;i<r;i++)
     {

         for(j=0;j<c;j++)
         {
             m[i][j]=0;
             for(k=0;k<c;k++){
             m[i][j]+= a[i][k]*b[k][j];
             }
         }
     }
     for(i=0;i<r;i++)
     {
         for(j=0;j<c;j++)
         {
             cout<<m[i][j]<<" ";
         }
         cout<<endl;
     }
}


