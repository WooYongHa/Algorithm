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


if __name__ == '__main__':
    spiral(4,5)

#Retry
