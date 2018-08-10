#include <iostream>
#include <vector>

using namespace std;

int map[10001][10001];
int visit_dfs[1001];
int visit_bfs[1001];
int n, m;

void dfs(int v);
void bfs(int v);

int main(void){
    int i;
    int start;
    int v1, v2;

    cin >> n >> m >> start;

    for(i = 1; i <= m; i++){
        cin >> v1 >> v2;
        map[v1][v2] = map[v2][v1] = 1; 
    }

    dfs(start);
    cout << '\n';
    bfs(start);

    return 0;
}

void dfs(int v){
    int i;

    visit_dfs[v] = 1;
    cout << v << " ";

    for(i = 1; i <= n; i++){
        if(map[v][i] == 1 && !visit_dfs[i]){
            dfs(i);
        }
    }
}

void bfs(int start){
    int i, j;
    vector<int> queue;
    
    queue.push_back(start);
    visit_bfs[start] = 1;

    while(1){
        if(queue.size() == 0){
            break;
        }
        
        for(i = 0; i < queue.size(); i++){
            int v = queue.front();
            cout << v << " ";

            queue.erase(queue.begin());

            for(j = 1; j <= n; j++){
                if(map[v][j] == 1 && !visit_bfs[j]){
                    visit_bfs[j] = 1;
                    queue.push_back(j);
                }
            }
        }
    }
}