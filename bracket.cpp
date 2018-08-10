#include <iostream>
#include <vector>

using namespace std;

string bracket(string input);

int main(void){
    int i, n;
    string input;
    vector<string> input_arr;
    
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> input;
        input_arr.push_back(input);
    }
    
    for(i = 0; i < input_arr.size(); i++){
        cout << bracket(input_arr[i]) << endl;
    }

    return 0;
}

string bracket(string input){
    int i;
    vector<char> temp;
    vector<char> front_que;
    vector<char> back_que;

    copy(input.begin(), input.end(), back_inserter(temp));

    if((temp.size() % 2) != 0){
        return "NO";
    }

    for(i = 0; i < temp.size(); i++){
        if(temp[i] == ')'){
            if(front_que.size() > back_que.size()){
                back_que.push_back(temp[i]);
            } else {
                return "NO";
            }
        } else if(temp[i] == '('){
            if(front_que.size() < (temp.size()/2)){
                front_que.push_back(temp[i]);
            } else {
                return "NO";
            }
        } 
    }

    return "YES";
}