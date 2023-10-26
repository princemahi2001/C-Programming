#include<bits/stdc++.h>
using namespace std;
int sum=0;
void subseq(int index,int sum,vector<int> &v,int arr[],int n,int k)
{
    if(index>=n)
    {
        if(sum==k)
        {
            for (int i = 0; i < v.size(); i++) 
            {
                cout << v[i];
            }
            cout << endl;
        }
        return;
    }
    v.push_back(arr[index]);
    subseq(index+1,sum+arr[index],v,arr,n,k);
    v.pop_back();
    subseq(index+1,sum,v,arr,n,k);
}

int main()
{
    vector<int> v;
    int arr[3]={3,1,2};
    subseq(0,0,v,arr,3,4);
}
