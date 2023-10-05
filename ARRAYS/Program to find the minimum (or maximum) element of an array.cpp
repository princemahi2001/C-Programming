#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int j=0;j<n;j++)
    {
        cin>>a[j];
    }
    sort(a,a+n);
    cout<<"min :"<<a[0];
    cout<<"max :"<<a[n-1];
}
