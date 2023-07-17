#include<bits/stdc++.h>
using namespace std;
vector<int> v1[10001];
void dfs(int currnode,vector<bool>&visited)
{
    visited[currnode]=true;
    cout<<currnode<<" ";
    for(int j=0;j<v1[currnode].size();j++)
    {
        if(visited[v1[currnode][j]]==false)
        dfs(v1[currnode][j],visited);
    }
}
int main()
{
    int V,E,currnode;
    cout<<"enter V and E: ";
    cin>>V>>E;
    cout<<endl;
    while(E--)
    {
        int x,y;
        cout<<"enter x and y: ";
        cin>>x>>y;
        v1[x].push_back(y);
        v1[y].push_back(x);
    }
        vector<bool>visited(V+1,false);
        dfs(0,visited);
    
}
