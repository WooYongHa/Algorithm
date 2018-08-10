#include <iostream>

using namespace std;

int min_1(int a, int b){
    return a > b ? b : a;
}

int min_2(int a, int b, int c){
    int min;

    if(a > b){
        min = b;
    } else {
        min = a;
    }

    return c > min ? min : c;
}

int d[1000001];

int main(void){ 
    int n;
    int i, j;

    cin >> n;
    
    d[1] = 0; 
    d[2] = d[3] = 1;

    for(i = 4; i <= n; i++){
        if(i % 3 == 0 && i % 2 == 0){
            d[i] = min_2(d[i/3], d[i/2], d[i-1]) + 1;
        } else if(i % 3 == 0){
            d[i] = min_1(d[i/3], d[i-1]) + 1;
        } else if(i % 2 == 0){
            d[i] = min_1(d[i/2], d[i-1]) + 1;
        } else {
            d[i] = d[i-1] + 1;
        }
    }

    cout << d[n] << endl;

    return 0;
}

