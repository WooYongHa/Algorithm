#include <iostream>
#include <vector>

using namespace std;

string inverse_string(string input){
    int i;
    string result;
    vector<char> input_data;
    vector<char> temp;

    copy(input.begin(), input.end(), back_inserter(input_data));

    for(i = 0; i < input_data.size(); i++){
       temp.push_back(input_data[input_data.size()-i-1]);
    }    

    result = string(temp.begin(), temp.end());
    
    return result;
}