'''
Insertion sort
'''
# lv2

a = [5, 2, 4, 6, 1, 3]

def insertionSort(arr):
    for i in range(1, len(arr)):
        for j in range(i):
            while arr[i] < arr[j]:
                arr[i], arr[j] = arr[j], arr[i]
    return arr


if __name__ == '__main__':
    insertionSort(a)
