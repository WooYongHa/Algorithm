#include <iostream>

using namespace std;

int d[1001];

int max(int a, int b){
    return a > b ? a:b;
}

int main(void){
    int n;
    int i, j;

    cin >> n;

    int p[n+1];

    for(i = 1; i <= n; i++){
        cin >> p[i];
    }
   
    d[0] = 0;
    for(i = 1; i <= n; i++){
        d[i] = 0;
        for(j = 1; j <= i; j++){
            d[i] = max(d[i], d[i-j] + p[j]);
        }
     }

    cout << d[n] << endl;

    return 0;
}