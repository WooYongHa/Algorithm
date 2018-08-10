#include <iostream>

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quick_sort(int left, int right, int* data){
    int pivot = left;
    int j = pivot;
    int i = left + 1;

    if(left < right){
        for(; i <= right; i++){
            if(data[i] < data[pivot]){
                j++;
                swap(&data[j], &data[i]);
            }
        }
        swap(&data[left], &data[i]);
        pivot = j;

        quick_sort(left, pivot-1, data);
        quick_sort(pivot+1, right, data);
    }
}

int main(void){
    int i;
    int arr[5] = {5, 4, 3, 2, 1};

    quick_sort(0, 4, arr);

    for(i = 0; i < 5; i++){
        cout << arr[i] << endl;
    }

    return 0;
}