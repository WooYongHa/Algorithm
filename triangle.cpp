#include <iostream>
#include <vector>

using namespace std;

int bigger(int a, int b){
    return a > b ? a : b; 
}

int main(void){
    int i, j;
    int n;
    int a = 1;
    
    cin >> n;
    vector<int> triangle[n];
    vector<int> memo[n];

    for(i = 0; i < n; i++){
        for(j = 0; j < a; j++){
            int temp;
            cin >> temp;
            triangle[i].push_back(temp);
        }
        a++;
    }
    
    a = 2;
    memo[0].push_back(triangle[0][0]);
    for(i = 1; i < n; i++){
        for(j = 0; j < a; j++){
            if(j == 0){
                memo[i].push_back(triangle[i][j] + memo[i-1][j]);
            } 
            if(j != 0 && j != a-1){
                memo[i].push_back(triangle[i][j] + bigger(memo[i-1][j-1] , memo[i-1][j]));
            } 
            if(j == a-1) {
                memo[i].push_back(triangle[i][j] + memo[i-1][j-1]);
            }
        }
        a++;
    }

    int max = memo[n-1][0];    
    for(i = 1; i < n; i++){
        if(memo[n-1][i] > max){
            max = memo[n-1][i];
        }
    }

    cout << max << '\n';
    
    return 0;
}

