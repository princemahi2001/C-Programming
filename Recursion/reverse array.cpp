#include<bits/stdc++.h>
using namespace std;

void reverse(int i,int n,int a[])
{
    if(i>=n) return;
    swap(a[i],a[n]);
    reverse(++i,--n,a);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]<<" ";
    }
    reverse(0,n-1,a);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
