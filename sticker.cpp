#include <iostream>

using namespace std;

int memo[2][100001];
int sticker[2][100001];

int max(int a, int b){
    return a > b ? a:b;
}

int score_sticker(int n){
    int i, j;

    for(i = 0; i < 2; i++){
        for(j = 1; j <= n; j++){
            cin >> sticker[i][j];
        }
    }

    memo[0][0] = memo[1][0] = 0;
    memo[0][1] = sticker[0][1];
    memo[1][1] = sticker[1][1];

    for(i = 2; i <= n; i++){
        memo[0][i] = max(memo[1][i-1], memo[1][i-2]) + sticker[0][i];
        memo[1][i] = max(memo[0][i-1], memo[0][i-2]) + sticker[1][i];
    }

    return max(memo[0][n], memo[1][n]);
}

int main(void){
    int i;
    int t, n;

    cin >> t;

    int result[t];
    for(i = 0; i < t; i++){
        cin >> n;
        result[i] = score_sticker(n);
    }

    for(i = 0; i < t; i++){
        cout << result[i] << endl;
    }
   
    return 0;
}

