# n 미만의 자연수에서 3,5의 배수의 총합을 구하라.
# lv1

number = int(input("숫자를 입력하세요.\n"))
'''
sum = 0

for i in range(1, number):
    if(i % 3 == 0 or i % 5 == 0):
        sum += i;

print(sum)
'''
print(sum([x for x in range(number) if x%3==0 or x%5==0]))

