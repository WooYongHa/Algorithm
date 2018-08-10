#include <iostream>

using namespace std;

int count_sugar(int sugar);

int main(void){
    int sugar;

    cin >> sugar;

    cout << count_sugar(sugar) << endl;

    return 0;
}

int count_sugar(int sugar){
    int i, m;

    if(sugar % 5 == 0){
        return sugar / 5;
    } else {
        m = sugar / 5;
    }

    for(i = m; i >= 0; i--){
        if(((sugar-(5*i)) % 3) == 0){
            return i + ((sugar-(5*i))/3);
        }  
    }

    return -1;
}


