#include <iostream>

using namespace std;

#define MAX 20

int adj[MAX][MAX];
int n;
bool visited[MAX];

//depth-first-search
int dfs(int v){
    visited[v] = true;
    int sum = 1;
    for(int i=1;i<=n;i++){
        if(adj[v][i] && !visited[i]) sum += dfs(i);
    }

    return sum;
}

int main(){

    int edges, a, b;
    
    cin >> n;
    cin >> edges;

    for(int i=0;i<edges;i++){
        cin >> a >> b;
        adj[a][b] = adj[b][a] = true;
    }
    cout << dfs(1) << endl;

    return 0;
}
