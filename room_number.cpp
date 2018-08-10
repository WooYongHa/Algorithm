#include <iostream>
#include <vector>

using namespace std;

int input_set[8];

int main(void){
    int i, n;
    vector<int> number;

    cin >> n;

    while(1){
        if(n/10 != 0){
            number.push_back(n%10);
            n /= 10;
        }
        
        if(n/10 == 0){
            number.push_back(n%10);
            break;
        }
    }
    
    for(i = 0; i < number.size(); i++){
        if(number[i] == 9){
            input_set[6] += 1;
        } else {
            input_set[number[i]] += 1;
        }
    }

    if(input_set[6] % 2 != 0){
        input_set[6] += 1;
    } 

    input_set[6] /= 2;
    
    int max = input_set[0];
    for(i = 1; i < 8; i++){
        if(input_set[i] > max){
            max = input_set[i];
        }
    }

    cout << max << '\n';

    return 0;
}