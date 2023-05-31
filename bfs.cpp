#include<iostream>
#include<vector>
#include<queue>


using namespace std;

const int N = 1e3; 
vector<int> g[N];
bool vis[N]; 

void bfs(int source){
    queue<int> q;
    q.push(source);
    while (!q.empty())
    {
        int d = q.front();
        q.pop(); 
        if(!vis[d]){
            vis[d]=true;
            cout<< d << " ";
            for(int child : g[d]){
                q.push(child); 
            }
        }
    }
}

int main(){
    int n,m;    cin>>n>>m; 
    while (m--)
    {
        int v1,v2;  cin>>v1>>v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    int source; cin>>source;
    bfs(source); 
    return 0;
}