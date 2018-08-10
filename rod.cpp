#include <iostream>

using namespace std;

int solution(int n){
    int count = 1;
    int rod = 32;

    if(n == 64){
        return 1;
    }

    while(1){
        if(n == rod){
            return count;
        }
        
        if(n > rod){
            n -= rod;
            rod /= 2;
            count++;
        }

        if(n < rod){
            rod /= 2;
        }
    }
}

int main(void){
    int n;

    cin >> n;

    cout << solution(n) << endl;
    
    return 0;
}



