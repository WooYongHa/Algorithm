#include <iostream>

using namespace std;

int color_table[3][1001];
int color[3][1001];

int min(int a, int b){
    return a < b ? a:b;
}

int min_cost(int a, int b, int c){
    int min;

    if(a > b){
        min = b;
    } else {
        min = a;
    }

    return c > min ? min : c;
}

int main(void){
    int i, n;

    cin >> n;

    for(i = 1; i <= n; i++){
        cin >> color_table[0][i];
        cin >> color_table[1][i];
        cin >> color_table[2][i];
    }

    color[0][0] = color[1][0] = color[2][0] = 0;
    color_table[0][0] = color_table[1][0] = color_table[2][0] = 0;

    for(i = 1; i <= n; i++){
        color[0][i] = min(color[1][i-1], color[2][i-1]) + color_table[0][i];
        color[1][i] = min(color[0][i-1], color[2][i-1]) + color_table[1][i];
        color[2][i] = min(color[0][i-1], color[1][i-1]) + color_table[2][i];
    }

    cout << min_cost(color[0][n], color[1][n], color[2][n]) << endl;

    return 0;
}
