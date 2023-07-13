#include<bits/stdc++.h>
using namespace std;
int main()
{
    int V,E;
    cout<<"enter V and E: ";
    cin>>V>>E;
    cout<<endl;
    vector<int> v1[V];
    while(E--)
    {
        int x,y;
        cout<<"enter x and y: ";
        cin>>x>>y;
        v1[x].push_back(y);
        v1[y].push_back(x);
    }
    for (int i=0;i<V;i++)
        {
            cout<<i<<"=>";
            for (int j=0;j<v1[i].size();j++)
            {
                cout<<v1[i][j]<< " ";
            }    
            cout<<endl;
        }
}
