#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int* without_me_mul(int input[], int length){ //length --> input's size
    int i, j;
    int temp;
    int result = 1;

    vector<int> input_temp;

    for(i = 0; i < length; i++){
        input_temp.push_back(input[i]);
    }

    for(i = 0; i < length; i++){
        temp = input_temp[i];
        input_temp.erase(input_temp.begin()+i);

        for(j = 0; j < length - 1; j++){
            result *= input_temp[j];
        }

        input[i] = result;
        result = 1;

        input_temp.insert(input_temp.begin()+i, temp);
    }

    return input;
}