#include <iostream>
#include <vector>

using namespace std;

int* move_zeros(int input[], int length){  //length --> input's size
    int i;
    int zero_count = 0;

    vector<int> temp;
    
    for(i = 0; i < length; i++){
        if(input[i] == 0){
            zero_count++;
        } else{
            temp.push_back(input[i]);
        }
    }

    for(i = 0; i < zero_count; i++){
        temp.push_back(0);
    }

    for(i = 0; i < temp.size(); i++){
        input[i] = temp[i];
    }

    return input;
}

