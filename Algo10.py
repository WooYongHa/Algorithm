'''
Spiral Array
6 6이라는 입력을 주면 6 X 6 매트릭스에 나선형 회전을 한 값을 출력
'''
# lv3

arr = [][]

def spiral(a, b):
    for i in range(a):
        for j in range(b):
            arr.append(j)
    return arr

print(spiral(4,5))
