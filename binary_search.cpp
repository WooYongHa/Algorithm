#include <iostream>

using namespace std;

int binary_search(int input[], int length, int number){     //length -> input's size
    int start = 0;
    int end = length - 1;

    while(end >= start){
        int middle = (start + end) / 2;
        
        if(input[middle] == number){
            return 1;
        }
        
        if(input[middle] < number){
            start = middle + 1;
        }

        if(input[middle] > number){
            end = middle - 1;
        }
    }

    return 0;
}

int binary_search_recursive(int input[], int length, int start, int end, int number){      //length -> input's size
    int middle = (start + end) / 2;

    if(start > end){
        return 0;
    } else {
        if(input[middle] == number){
            return 1;
        } else {
            if(input[middle] > number){
                end = middle - 1;
                binary_search_recursive(input, length, start, end, number);
            } else {
                start = middle + 1;
                binary_search_recursive(input, length, start, end, number);
            }
        }
    }
}