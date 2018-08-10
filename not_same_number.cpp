#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    int i;
    int temp;
    vector<int> answer;

    for(i = 0; i < arr.size(); i++){
        if(i > 0){
            temp = arr[i-1];
        }
        
        if(temp == arr[i]){
            continue;
        }

        answer.push_back(arr[i]);
    }
    

    return answer;
}