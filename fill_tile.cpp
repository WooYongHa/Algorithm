#include <iostream>
#include <vector>

using namespace std;

int map[301][301];

vector<int> memo;

int main(void){
    int i, j;
    int n, m;
    int temp;

    vector<int> result;
    cin >> n >> m;

    for(i = 1; i <= n; i++){
        for(j = 1; j <= m; j++){
            cin >> map[i][j];
        }
    }

    
   

    return 0;
}