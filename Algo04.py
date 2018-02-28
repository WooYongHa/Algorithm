#1부터 10,000까지 8이라는 숫자가 총 몇번 나오는가?
# lv2
def eightCheck(number):
    check = 0
    for i in str(number):
        if i == '8':
            check += 1
    return check

finalResult = 0

for i in range(1, 10000):
    finalResult += eightCheck(i)

print(finalResult)

'''
8xxx
x8xx
xx8x
xxx8  --> 4000개!
'''