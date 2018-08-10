#include <iostream>

using namespace std;

int d[301];
int stair[301];

int max(int a, int b){
    return a > b ? a:b;
}

int main(void){
    int i, n;

    cin >> n;

    for(i = 1; i <= n; i++){
        cin >> stair[i];
    }

    d[0] = 0;
    d[1] = stair[1];
    d[2] = stair[1] + stair[2];

    for(i = 3; i <= n; i++){
        d[i] = max(d[i-3] + stair[i-1] + stair[i], d[i-2] + stair[i]);
    }
     
    cout << d[n] << endl;

    return 0;
}

