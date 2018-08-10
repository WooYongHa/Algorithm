#include <iostream>

using namespace std;

int memo[100];

int fibonacci(int n){
    if(n <= 2){
        return 1;
    }

    if(memo[n] != 0){
        return memo[n];
    } else {
        memo[n] = fibonacci(n-1) + fibonacci(n-2);
        return memo[n];
    }
}

int main(void){
    cout << fibonacci(40) << endl;

    return 0;
}