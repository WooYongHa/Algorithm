#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int i;
    int count = 0;
    string input;
    vector<char> input_temp;

    getline(cin, input);

    copy(input.begin(), input.end(), back_inserter(input_temp));

    for(i = 0; i < input_temp.size(); i++){
        if(i == 0 && input_temp[i] == ' '){
            count--;
        }

        if(i == input_temp.size()-1 && input_temp[i] == ' '){
            count--;
        }

        if(input_temp[i] == ' '){
            count++;
        }
    }

    cout << count+1 << endl;

    return 0;
}