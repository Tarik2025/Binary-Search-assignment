#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,2,3,3,6,6,9,9};
    int n=sizeof(a)/sizeof(a[0]);
    int l=0;
    int h=n-1;
    int x=2;
    bool flag=false;
    while(l<=h)
    {
        int mid=l+((h-l)/2);
        if(a[mid]==x)
        {
            if(a[mid+1]!=x)
            {
                flag=true;
            cout<<mid<<endl;
            break;

        }
        else
        {
            l=mid+1;
        }
        }
        else if(a[mid]<x) 
        l=mid+1;
        else
        h=mid-1 ;
    }
    if(flag==false)
    {
        cout<<"-1"<<endl;
    }
}