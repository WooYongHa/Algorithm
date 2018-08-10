#include <iostream>
#include <vector>

using namespace std;

int fist_reward(int a){
    if(a == 1){
        return 5000000;
    } else if(a >= 2 && a <= 3){
        return 3000000;
    } else if(a >= 4 && a <= 6){
        return 2000000;
    } else if(a >= 7 && a <= 10){
        return 500000;
    } else if(a >= 11 && a <=15){
        return 300000;
    } else if(a >= 16 && a <= 21){
        return 100000;
    } else {
        return 0;
    }
}

int second_reward(int b){
    if(b == 1){
        return 5120000;
    } else if(b >= 2 && b <= 3){
        return 2560000;
    } else if(b >= 4 && b <= 7){
        return 1280000;
    } else if(b >= 8 && b <= 15){
        return 640000;
    } else if(b >= 16 && b <= 31){
        return 320000;
    } else {
        return 0;
    }
}

int result(int a, int b){
    return fist_reward(a) + second_reward(b);
}

int main(void){
    int i;
    int t;
    int a, b;

    vector<int> answer;

    cin >> t;

    for(i = 0; i < t; i++){
        cin >> a >> b;
        answer.push_back(result(a,b));
    }    

    for(i = 0; i < answer.size(); i++){
        cout << answer[i] << '\n';
    }

    return 0;
}

