'''
2나 5로 나눌 수 없는 0 이상 10,000 이하의 정수 n이 주어졌는데,
n의 배수 중에는 10진수로 표기했을 때 모든 자리 숫자가 1인 것이 있다.
그러한 n의 배수 중에서 가장 작은 것은 몇 자리 수일까?
'''
#lv2

def oneCheck(number):
    check = 0
    len = 0

    for i in str(number):
        len += 1
        if i == '1':
            check += 1
    if check == len:
        return len
    else:
        return -1

def minNumber(number):
    i = 1

    while(True):
        if oneCheck(number * i) != -1:
            print(oneCheck(number * i))
            break
        else:
            i += 1

#Amazing
def One (n,m=1,k=0,l=0):
    k += m % n
    l += 1
    if k%n == 0: print(l)
    else:One(n,m*10,k,l)


if __name__ == '__main__':
    # minNumber(9901)
    One(9901)
