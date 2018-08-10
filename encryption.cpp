#include <iostream>
#include <vector>
#include <map>

using namespace std;

int encryption_check(string input1, string input2){
    int i;

    map<char, char> m;

    vector<char> temp1;
    vector<char> temp2;

    copy(input1.begin(), input1.end(), back_inserter(temp1));
    copy(input2.begin(), input2.end(), back_inserter(temp2));

    if(temp1.size() != temp2.size()){
        return 0;
    }

    for(i = 0; i < temp1.size(); i++){
        if(m.find(temp1[i])->second != '\0'){
            if(temp2[i] != m.find(temp1[i])->second){
                return 0;
            }
        } else {
            m.insert(make_pair(temp1[i], temp2[i]));
        }
    }
    
    return 1;
}