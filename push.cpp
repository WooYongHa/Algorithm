#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int i, j;
    int input[] = {1, 2, 3, 4, 5};
    int k = 7;
    int length = sizeof(input)/sizeof(int);

    vector<int> temp;

    while(k > length){
        k -= length;
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < length; j++){
            temp.push_back(input[j]);
        }
        j = 0;
    }

    for(i = k; i < length+k; i++){
        cout << temp[i] << endl;
    }

    return 0;
}