#include <iostream>
#include <vector>

using namespace std;

int main(void){
    int i, length;
    int cursor = 0;
    string input;
    string command_temp;

    vector<char> command; 

    cin >> input >> length;
    cin.get();

    copy(input.begin(), input.end(), back_inserter(command));
    cursor = command.size();
    
    for(i = 0; i < length; i++){
        getline(cin, command_temp);
        
        if(command_temp.at(0) == 'L' && cursor != 0){
            cursor -= 1;
        }

        if(command_temp.at(0) == 'D' && cursor != command.size()){
            cursor += 1;
        }
    
        if(command_temp.at(0) == 'B' && cursor != 0){
            command.erase(command.begin()+cursor-1);
            cursor -= 1;
        }

        if(command_temp.at(0) == 'P'){
            command.insert(command.begin()+cursor, command_temp.at(2));
            cursor += 1;
        }
        
    }

    cout << string(command.begin(), command.end()) << endl;

    return 0;
}