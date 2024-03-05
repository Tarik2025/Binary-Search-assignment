#include<iostream>
using namespace std;
int main()
{  cout<<"enter the value of n and m:"<<endl;
int n;
int m;
cin>>n>>m;
    int a[n][m];
    cout<<"enter the matrix"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"matrix is :"<<endl;
    for(int i=0;i<n;i++)
    {
        for (int j=0;j<m;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

}