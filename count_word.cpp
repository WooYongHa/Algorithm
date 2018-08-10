#include <iostream>
#include <vector>

using namespace std;

int alphabet[26];

int main(void){
    int i;
    string input;
    vector<int> input_array;

    cin >> input;

    copy(input.begin(), input.end(), back_inserter(input_array));
    
    for(i = 0; i < input_array.size(); i++){
        int index;

        if(input_array[i] > 90){
            index = input_array[i]-97;
            alphabet[index] += 1;
        } else {
            index = input_array[i]-65;
            alphabet[index] += 1;
        }
    }

    int max = 0;
    int max_index;
    int max_count = 0;

    for(i = 0; i < 26; i++){
        if(alphabet[i] > max){
            max = alphabet[i];
            max_index = i;
            max_count = 1;
        } else if(alphabet[i] == max){
            max_count++;
        }
    }

    if(max_count >= 2){
        cout << "?" << endl;
    } else {
        cout << (char)(max_index + 65) << endl; 
    }

    return 0;
}


