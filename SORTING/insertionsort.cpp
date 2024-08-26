#include<bits/stdc++.h>
using namespace std;
void insertionsort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && a[j-1]>a[j]){
            swap(a[j],a[j-1]);
            j--;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    insertionsort(a,n);
}
