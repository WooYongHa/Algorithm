'''
A사무실에는 특정일자의 출퇴근 시간이 기록된 거대한 로그파일이 있다고 한다.
파일의 형식은 다음과 같다. (한 라인에서 앞부분은 출근시간(HH:MM:SS), 뒷부분은 퇴근시간이다)
09:12:23 11:14:35
10:34:01 13:23:40
10:34:31 11:20:10
특정시간을 입력(예:11:05:20)으로 주었을 때 그 시간에 총 몇 명이 사무실에 있었는지 알려주는 함수를 작성하시오.
'''
#lv2

'''
def time2sec(t):
    h, m, s = map(int, t.split(":"))
    return h*60*60+m*60+s

timesheet = [0]*24*60*60
manysheet = [0]*24*60*60

def load(inputs):
    for input in inputs:
        s, e = input.split(' ')
        s = time2sec(s)
        e = time2sec(e)
        timesheet[s] += 1
        timesheet[e] -= 1

    manysheet[0] = timesheet[0]
    for i in range(1, 24*60*60):
        manysheet[i] = manysheet[i-1] + timesheet[i]

def howmany(time):
    sec = time2sec(time)
    print time, manysheet[sec]

input = [
'09:12:23 11:14:35',
'10:34:01 13:23:40',
'10:34:31 11:20:10'
]

if __name__ == "__main__":
    load(input)
    howmany('14:34:55')
'''

