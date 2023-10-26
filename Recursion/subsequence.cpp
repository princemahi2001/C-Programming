#include<bits/stdc++.h>
using namespace std;

void subseq(int index,vector<int> &v,int arr[],int n)
{
    if(index>=n)
    {
        for (int i = 0; i < v.size(); i++) 
        {
            cout << v[i];
        }
        cout << endl;
        return;
    }
    v.push_back(arr[index]);
    subseq(index+1,v,arr,n);
    v.pop_back();
    subseq(index+1,v,arr,n);
}

int main()
{
    vector<int> v;
    int arr[3]={3,1,2};
    subseq(0,v,arr,3);
}
