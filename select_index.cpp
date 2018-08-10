#include <iostream>

using namespace std;

int select_index(int input[], int length){    //length --> input's size
     int i;
     int max;
     int result;
     int temp;

    max = input[0];
    result = input[1];

    for(i = 0; i < length; i++){
        temp = input[i];

        if(temp >= max){
            max = temp;
        } else if(temp < max){
            if(temp >= result){
                result = temp;
            }
        }
    }

    return result;
 }