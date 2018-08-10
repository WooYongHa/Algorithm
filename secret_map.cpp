#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

string* solve_secret(int n, int arr1[], int arr2[]){
    int i;
    string* result;
    vector<string> temp;

    for(i = 0; i < n; i++){
        temp.push_back(num_to_result(arr1[i] | arr2[i]));
    }

    result = temp.data();

    return result;
}

string num_to_result(int input){
    string s;

	while(input>1){
		if(input%2 == 1){
			s+='#';
		}
		else{
			s+=' ';
        }
        input/=2;
	}
	s+='#';
	reverse(s.begin(),s.end()); 
	
    return s;
}