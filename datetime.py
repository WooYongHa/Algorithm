# https://godoftyping.wordpress.com/2015/04/19/python-날짜-시간관련-모듈/

import datetime

def getCurrentTime():
    now = datetime.datetime.now()
    print(now)

    nowDate = now.strftime('%Y-%m-%d')
    print(nowDate)

    nowTime = now.strftime('%H:%M:%S')
    print(nowTime)

    nowDatetime = now.strftime('%Y-%m-%d %H:%M:%S')
    print(nowDatetime)


if __name__ == '__main__':
    print(getCurrentTime())
