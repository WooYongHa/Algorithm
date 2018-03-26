'''
120 번째 죄수

처음에 문은 모두 닫혀 있다.
N번째 지나갈 때에는 N의 배수인 문들이 열려 있으면 닫고, 닫혀 있으면 연다.
마지막에 문이 열려 있으면 그 방의 죄수는 석방이다.

과연 몇 명의 죄수가 석방될까?
'''

breakout = []

def prisonBreak():
    for i in range(1, 121):
        breakout.append(1)

    for i in range(2, 121):
         for j in range(2,121):
             if j % i == 0:
                 if breakout[j-1] == 1:
                     breakout[j-1] = 0
                 else:
                     breakout[j-1] = 1

    return breakout.count(1)

if __name__ == '__main__':
    print(prisonBreak())

