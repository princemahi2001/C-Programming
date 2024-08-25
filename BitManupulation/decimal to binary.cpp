#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    string str="";
    while(num>0)
    {
        int rem=num%2;
        str+=to_string(rem);
        num/=2;
    }
    for(int i=str.size()-1;i>=0;i--)
    {
        cout<<str[i];
    }
}
