#include <iostream>
#include <vector>

using namespace std;

int longest_prefix(string input[], int length){     //lenght -> input's size
    int i, j;
    int min;
    int count = 0;

    vector<char> temp[length];

    for(i = 0; i < length; i++){
        copy(input[i].begin(), input[i].end(), back_inserter(temp[i]));
    }
    
   for(i = 0; i < length; i++){
       min = temp[0].size();

       if(temp[i].size() < min){
           min = temp[i].size();
       }
    }

    for(i = 0; i < min; i++){
        int index_count = 0;
        char equal_temp = temp[0][i];

        for(j = 1; j < length; j++){
            if(equal_temp == temp[j][i]){
                index_count++;
            }
        }

        if(index_count == length-1){
            count++;
        }
    }

    return count;
}