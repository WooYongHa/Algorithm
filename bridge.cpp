#include <iostream>
#include <vector>

using namespace std;

unsigned long factorial(int n);
unsigned long combination(int n, int m);

int main(void){
    int n, m;
    int i;

    cin >> n >> m;

    cout << combination(n, m) << endl;

    return 0;
}

unsigned long factorial(int n){
    int i;
    unsigned long result = 1;

    for(i = 1; i <= n; i++){
        result *= i;
    }

    return result;
}

unsigned long combination(int n, int m){
    int i;
    unsigned long result = 1;

    for(i = m-n+1; i <= m; i++){
        result *= i;
    }

    return result/factorial(n);
}
