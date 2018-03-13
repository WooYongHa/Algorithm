'''
괄호의 사용이 잘 되었는지 잘못 되었는지 판별 해 주는 프로그램을 작성하시오
'''

def checkSyntax(galgal):
    check1 = 0
    check2 = 0

    for i in str(galgal):
        if i == '(':
            check1 += 1
        if i == ')':
            check2 += 1

    if check1 == check2:
        return 'Right Syntax'
    else:
        return 'Wrong Syntax'

if __name__ == '__main__':
    print(checkSyntax('((())'))