#include <iostream>

using namespace std;

int palindrome(int number){
    if(number < 0 || (number % 10 == 0 && number != 0)){
        return 0;
    }

    int half_number = 0;

    while(number > half_number){
        half_number = half_number*10 + number % 10;
        number /= 10;
    }

    return number == half_number || number == half_number/10;
}