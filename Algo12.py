# 모든 짝수번째 숫자를 * 로 치환하시오.(홀수번째 숫자,또는 짝수번째 문자를 치환하면 안됩니다.)
# lv 2
s = "a1b2cde3~g45hi6"
a = ['a',1,'b',2,'c','d','e',3,'~','g',4,5,'h','i',6]

def changeNum(a):
    for i in range(len(a)):
        if i%2 !=0  and type(a[i]) is int:
            a[i] = '*'
    return a

def cnvt(s):
    l = list(s)
    for k in range(1, len(l), 2):
        if l[k].isdigit():
            l[k] = '*'
    return ''.join(l)

if __name__ == "__main__":
     print(changeNum(a))
    # print(cnvt(s))