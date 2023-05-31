#include<iostream>
#include<queue>

using namespace std;

const int N = 1e3;

int g[N][N];
bool vis[N];

void bfs(int source,int n){
    queue<int> q;
    q.push(source);
    while (!q.empty())
    {
        int d= q.front();
        q.pop();
        if(!vis[d]){
            vis[d]=true;
            cout<< d<< " ";
            for (int i = 0; i <= n; i++)
            {
                if(g[d][i]==1){
                    q.push(i);
                }
            }
        }
    }
}

int main(){
    int n,m;    cin>>n>>m;
    while (m--)
    {
        int v1,v2;  cin>>v1>>v2;
        g[v1][v2]=1;
        g[v2][v1]=1;
    }
    int source; cin>>source;
    bfs(source,n);
}