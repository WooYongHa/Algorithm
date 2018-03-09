#1차원의 점들이 주어졌을 때, 그 중 가장 거리가 짧은 것의 쌍을 출력하는 함수를 작성하시오.
# lv1

s = [1, 60, 4, 8, 13, 17, 20]

def minDistance(arr):
    k= []

    for i in arr:
        for j in arr:
            num = abs(i-j)
            if num != 0:
                k.append(abs(i-j))
    return max(k)

if __name__ == '__main__':
    print(minDistance(s))

