#include <iostream>

using namespace std;

void put_number(int page);
void classify_number(int input);

int number_array[10];

int main(void){
    int i;
    int page;

    cin >> page;
    
    put_number(page);

    for(i = 0; i < 10; i++){
        cout << number_array[i] << " ";
    }

    return 0;
}

void put_number(int page){
    int i;
    int temp;

    for(i = 1; i <= page; i++){
        classify_number(i);
    }
}

void classify_number(int input){
    int i;
    
    i = input % 10;
    number_array[i] += 1;

    if((input / 10) != 0){
        classify_number(input/10);
    }
}

