'''
라이브러리를 사용하지 말고 10진수를 n진수로 변환하는 프로그램을 작성하시오.. (단, n의 범위는 2 <= n <= 16)
'''

def transform(inputNum, tryNum):
    rem = []
    quotient = inputNum

    while tryNum <= quotient:
        rem.append(quotient % tryNum)
        quotient = quotient // tryNum

    rem.append(quotient)
    rem.reverse()
    return [hex(x) for x in rem]

#Amazing
def convert(n, base):
    T = "0123456789ABCDEF"
    q, r = divmod(n, base)
    if q == 0:
        return T[r]
    else:
        return convert(q, base) + T[r]


if __name__ == '__main__':
    # print(transform(233,8))
    print(convert(233,16))

