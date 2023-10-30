#include<bits/stdc++.h>
using namespace std;
bool issame(vector<int> &v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        if(v[i+1] != v[i]) return false;
    }
    return true;
}
void permutations(vector<int> v,int index,int end)
{
    int n=v.size();
    if(index==n)
    {
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        return;
    }
    for(int i=index;i<n;i++)
    {
        swap(v[index],v[i]);
        permutations(v,index+1,end);
        swap(v[index],v[i]);
    }
}
void com_sum(int index,int arr[],vector<int> &v,int n,int target)
{
    if(index==n)
    {
        if(target==0)
        {
            if(issame(v))
            {
                for(int i=0;i<v.size();i++)
                {
                    cout<<v[i]<<" ";
                }
            }
            else
            {
                permutations(v,0,v.size());
                //cout<<endl;
            }
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
    int arr[3]={5,7,9};
    int target=21;
    com_sum(0,arr,v,3,21);
    return 0;
}


//output
5 7 9 
5 9 7 
7 5 9 
7 9 5 
9 7 5 
9 5 7 
7 7 7 
