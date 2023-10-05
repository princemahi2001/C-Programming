#include<bits/stdc++.h>
using namespace std;
void reverse(int a[],int i,int j,int n)
{
    while(i<j)
    {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(int k=0;k<n;k++)
    {
        cout<<a[k]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    reverse(a,0,n-1,n);
}
