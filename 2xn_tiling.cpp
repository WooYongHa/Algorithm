#include <iostream>

using namespace std;

int tile[1001];

int main(void){
    int i, n;

    cin >> n;
    
    tile[0] = 1;
    tile[1] = 1;

    for(i = 2; i <= n; i++){
        tile[i] = (tile[i-1] + tile[i-2] * 2) % 10007;
    }

    cout << tile[n] << endl;
 
    return 0;
}

