'''
문자열을 입력받아서, 같은 문자가 연속적으로 반복되는 경우에 그 반복 횟수를 표시하여 문자열을 압축하기.
입력 예시: aaabbccca
출력 예시: a3b2c3a1
'''

a = 'aaabbccca'

def stringInput(arr):
    strList = list(arr)
    temp = strList[0]
    count = 0

    for i in strList:
        if i == temp[-1]:
            count += 1
        else:
            temp += str(count) + i
            count = 1
    temp += str(count)

    return temp

if __name__ == '__main__':
    print(stringInput(a))