'''
입력값은 한 행의 문자열로 주어지며, 각 값은 공백으로 구분된다.
입력되는 리스트의 항목의 개수는 유한한다.
첫 번째 값은 리스트를 회전하는 양과 방향(음수의 경우 좌측으로, 양수의 경우 우측으로 회전)이다.
구현에 이용할 자료구조에 대한 조건이나 제약은 없다.
회전된 리스트를 문자열로 출력한다.
첫 번째 값을 제외한 나머지 값은 리스트의 각 항목의 값이다.
'''
# lv2

a = [7,2,3,4,5,6]

def rotation(list):
    count = list[0] % (len(list)-1)
    list = a[1:] * 2

    if count > 0:
        print(list[(len(a)-1)-count:(len(a)-1)-count+len(a)-1])
    elif count < 0:
        print(list[count:count+len(a)-1])
    else:
        print(list[0:(len(a)-1)])

rotation(a)


