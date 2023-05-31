#include<iostream>
#include<stack>

using namespace std;

const int N = 1e3;
int g[N][N];
bool vis[N]; 

void dfs(int source,int v){
    stack<int> stk;
    stk.push(source);
    while (!stk.empty())
    {
        int d=stk.top();
        stk.pop();
        if(!vis[d]){
            vis[d]=true;
            cout<< d<< " ";
            for(int i=0; i<=v; i++){
                if(g[d][i]){
                    stk.push(i);
                }
            }
        }
    }
    
}

int main(){
    int v,e;    cin>>v>>e;
    while (e--)
    {
        int v1,v2;  cin>>v1>>v2;
        g[v1][v2]=1;
        g[v2][v1]=1; 
    }
    int source; cin>>source; 
    dfs(source,v);
}