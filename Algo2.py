#1차원의 점들이 주어졌을 때, 그 중 가장 거리가 짧은 것의 쌍을 출력하는 함수를 작성하시오.
# lv1

s = [1, 60, 4, 8, 13, 17, 20]
k = []

for i in s:
    for j in s:
        num = abs(i-j)
        if num != 0:
            k.append(abs(i-j))

print(max(k))

