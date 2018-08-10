#include <iostream>
#include <vector>

using namespace std;

int dart_score(string input);

int main(void){
    string input;
    
    input = "Hello";

    dart_score(input);

    return 0;
}

int dart_score(string input){
    int i;
    int result;
    int score[3] = {0,0,0};

    vector<char> v;
    copy(input.begin(), input.end(), back_inserter(v));

    for(i = 0; i < v.size(); i++){
        
    }

    return result;
}