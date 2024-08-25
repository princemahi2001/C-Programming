#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int ans;
    while(num>0)
    {
        int rem=num%10;
        ans+=pow(2,rem);
        num/=10;
    }
    cout<<ans;
}
