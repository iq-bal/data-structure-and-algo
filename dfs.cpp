#include<iostream>
#include<vector>
#include<stack>

using namespace std;

const int N=1e3;
vector<int> g[N];
bool vis[N]; 

void dfs(int source){
    stack<int> stk;
    stk.push(source);
    while (!stk.empty())
    {
        int d =stk.top();
        stk.pop();
        if(!vis[d]){
            vis[d]=true;
            cout<< d<< " "; 
            for(int i: g[d]){
                stk.push(i); 
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
    dfs(source);
    return 0;
}