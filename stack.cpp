#include <iostream>
#include <vector>

using namespace std;

void execute(string input, int index);

vector<int> stack;
vector<string> command_arr;

int main(void){
    int i, n;
    string command;
    
    cin >> n;

    for(i = 0; i < n; i++){
        cin >> command;
        command_arr.push_back(command);

        if(command == "push"){
            i--;
        }
    }

    for(i = 0; i < command_arr.size(); i++){
        execute(command_arr[i], i);
    }

    return 0;
}

void execute(string input, int i){
    if(input == "push"){
        stack.push_back(stoi(command_arr[i+1]));
    } else if(input == "pop"){
        if(!(stack.empty())){
            cout << stack.back() << endl;
            stack.pop_back();
        } else {
            cout << -1 << endl;
        }
    } else if(input == "size"){
        cout << stack.size() << endl;
    } else if(input == "empty"){
        cout << stack.empty() << endl;
    } else if(input == "top"){
        if(!(stack.empty())){
            cout << stack.back() << endl;
        } else {
            cout << -1 << endl;
        }
    }  
}
