#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

long double deviation(vector<int> k_people){
    int i;
    long double sum = 0;
    long double average;

    for(i = 0; i < k_people.size(); i++){
        sum += k_people[i];
    }
    
    average = sum / k_people.size();

    sum = 0;
    for(i = 0; i < k_people.size(); i++){
        sum += pow(k_people[i]-average, 2);
    }

    return sqrt(sum/k_people.size());
}

int main(void){
    int i;
    int n, k;
    long double min = -1;
    
    vector<int> people;
    vector<int> k_people;

    cin >> n >> k;

    for(i = 0; i < n; i++){
        int temp;
        cin >> temp;
        people.push_back(temp);
    }
    
    int a = 0;
    while(1){
        if(a + k == n+1){
            k++;
            a = 0;
        }

        for(i = a; i < a+k; i++){
            k_people.push_back(people[i]);
        }

        long double temp;
        temp = deviation(k_people);

        if(min == -1){
            min = temp;
        }

        if(temp < min){
            min = temp;
        }

        k_people.clear();
        a++;

        if(k == n){
            break;
        }
    }
    cout.precision(11);
    cout << fixed << min << '\n';

    return 0;
}