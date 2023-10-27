#include<bits/stdc++.h>
using namespace std;

void com_sum(int index,int arr[],vector<int> &v,int n,int target)
{
    if(index==n)
    {
        if(target==0)
        {
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        return;
    }
    if(arr[index]<=target)
    {
        v.push_back(arr[index]);
        com_sum(index,arr,v,n,target-arr[index]);
        v.pop_back();
    }
    com_sum(index+1,arr,v,n,target);
}

int main()
{
    vector<int> v;
    int arr[4]={2,3,6,7};
    int target=7;
    com_sum(0,arr,v,4,7);
    return 0;
}
