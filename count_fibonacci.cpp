#include <iostream>

using namespace std;

int d[2][41];

int main(void){
    int i;
    int t, n;
    int max = -1;

    cin >> t;

    int input[t];
    
    for(i = 0; i < t; i++){
        int temp;
        cin >> temp;
        
        if(temp > max){
            max = temp;
        }

        input[i] = temp;
    }
    
    d[0][0] = d[1][1] = 1;
    d[0][1] = d[1][0] = 0;

    for(i = 2; i <= max; i++){
        d[0][i] = d[0][i-1] + d[0][i-2];
        d[1][i] = d[1][i-1] + d[1][i-2];
    }

    for(i = 0; i < t; i++){
        int temp = input[i];
        cout << d[0][temp] << " " << d[1][temp] << endl;
    }

    return 0;
}