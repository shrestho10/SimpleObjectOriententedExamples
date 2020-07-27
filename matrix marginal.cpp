#include<iostream>
using namespace std;

int main()
{
    int a[111][111],m,n,i,j;
    cin>>m;
    cin>>n;
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1)
            {
              cout<<a[i][j]<<" ";
              //cout<<"\t";
            }
              else if(i==m)
            {
              cout<<a[i][j]<<" ";
              //cout<<"\t";
            }
             else if(j==1)
            {
              cout<<a[i][j]<<" ";
              //cout<<"\t";
            }
             else if(j==n)
            {
              cout<<a[i][j]<<" ";
              //cout<<"\t";
            }
            else {

              cout<<" "<<" ";
              //cout<<"\t";
            }
        }
        cout<<"\n";
    }



}
