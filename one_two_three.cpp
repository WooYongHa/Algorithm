#include <iostream>
#include <vector>

using namespace std;

int memo[11];

int make_n(int n){
    memo[0] = 1;
    memo[1] = 1;
    memo[2] = 2; 
    
    if(memo[n] != 0){
        return memo[n];
    }

    memo[n] = make_n(n-1) + make_n(n-2) + make_n(n-3);

    return memo[n];
}

int main(void){
    int i,t;
    
    vector<int> input;

    cin >> t;
    
    for(i = 0; i < t; i++){
        int temp;
        cin >> temp;
        input.push_back(temp);
    }
    
    for(i = 0; i < input.size(); i++){
        cout << make_n(input[i]) << '\n';
    }

    return 0;
}