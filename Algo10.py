'''
Spiral Array
6 6이라는 입력을 주면 6 X 6 매트릭스에 나선형 회전을 한 값을 출력
'''
# lv3
def spiral(a, b):
    Matrix = [[0]*b for i in range(a)]
    index = 0

    for i in range(a):
        for j in range(b):
            Matrix[i][j] = index
            index += 1

    for i in range(a):
        for j in range(b):
            if a == 0 and b == 0:
                pass

    for i in range(a):
        print(Matrix[i])


'''
X,Y = map(int,raw_input().split(' '))
lis = [[-1 for i in xrange(Y)] for j in xrange(X)]
x,y = 0,0
dx,dy = 0,1
count = 0
while lis[x][y] == -1:
    lis[x][y] = count
    count+=1
    x,y = x+dx,y+dy
    if x in [-1,X] or y in [-1,Y] or lis[x][y] != -1:
        x,y = x-dx,y-dy
        dx,dy = dy,-dx
        x,y = x+dx,y+dy
for L in lis:
    for val in L:
        print('%3d',%val)
'''

if __name__ == '__main__':
    spiral(4,5)
