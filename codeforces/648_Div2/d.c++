#include <iostream>
#include <vector>
using namespace std;
vector <int> adj[2500];
vector <int> good;
bool visited[2500];
int n,m;
int index(int x, int y)
{
    return x*m + y;
}
bool isnode(int x)
{
    if(0 <= x && x <= n*m-1)
        return true;
    return false;
}
string s[50];
void dfs(int node)
{
//    printf("node - %d\n",node);
    visited[node] = true;
    for(auto u:adj[node])
    {
        if(!visited[u])
            dfs(u);
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        int flag = 1;
        for(int i=0;i<n*m;i++)
        {
            adj[i].clear();
            visited[i] = false;
        }
        good.clear();
        for(int i=0;i<n;i++)
            cin>>s[i];
        for(int i=0;i<n && flag;i++)
        {
            for(int j=0;j<m && flag;j++)
            {
                if(s[i][j] == 'G')
                {
                    if(isnode(index(i-1,j)) && s[i-1][j] == 'B')
                        flag=0;
                    if(isnode(index(i+1,j)) && s[i+1][j] == 'B')
                        flag=0;
                    if(isnode(index(i,j-1)) && s[i][j-1] == 'B')
                        flag=0;
                    if(isnode(index(i,j+1)) && s[i][j+1] == 'B')
                        flag=0;
                }
            }
        }
        if(flag == 0)
        {
            cout<<"No\n";
            continue;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i][j] == 'G')
                    good.push_back(index(i,j));
                if(s[i][j] == 'B')
                {
                    if(isnode(index(i-1, j)))
                        s[i-1][j] = '#';
                    if(isnode(index(i+1, j)))
                        s[i+1][j] = '#';
                    if(isnode(index(i, j-1)))
                        s[i][j-1] = '#';
                    if(isnode(index(i, j+1)))
                        s[i][j+1] = '#';
                }
            }
        }
//        cout<<flag<<"--\n";
        /*for(int i=0;i<n;i++)
            cout<<s[i]<<endl;*/
        if(good.size() == 0)
        {
            cout<<"Yes\n";
            continue;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int te = index(i,j);
                if(s[i][j] == '.' || s[i][j] == 'G')
                {
                    if(isnode(index(i-1, j)) &&(s[i-1][j] == 'G' || s[i-1][j] == '.'))
                        adj[te].push_back(index(i-1, j));
                    if(isnode(index(i+1, j)) &&(s[i+1][j] == 'G' || s[i+1][j] == '.'))
                        adj[te].push_back(index(i+1, j));
                    if(isnode(index(i, j-1)) &&(s[i][j-1] == 'G' || s[i][j-1] == '.'))
                        adj[te].push_back(index(i, j-1));
                    if(isnode(index(i, j+1)) &&(s[i][j+1] == 'G' || s[i][j+1] == '.'))
                        adj[te].push_back(index(i, j+1));
                }
            }
        }
/*        cout<<"Pora\n";
        for(int i=0;i<n*m;i++)
        {
            printf("%d -- ",i);
            for(auto u:adj[i])
                cout<<u<<" ";
            cout<<endl;
        }
        cout<<endl;*/
        dfs(n*m-1);
        int fl = 1;
        for(auto u:good)
            fl = fl && visited[u];
        if(fl)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
