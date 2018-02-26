'''
A라는 디렉토리 하위에 있는 텍스트 파일(*.txt) 중에서 LIFE IS TOO SHORT
라는 문자열을 포함하고 있는 파일들을 모두 찾을 수 있는 프로그램을 작성하시오.
단, 하위 디렉토리도 포함해서 검색해야 함
/Users/Diri/dev/test
'''
# lv2
import os

def search(dirname, findWord):
    try:
        filenames = os.listdir(dirname)
        for filename in filenames:
            full_filename = os.path.join(dirname, filename)

            if (os.path.isdir(full_filename) == False):
                f = open(full_filename, 'r')

                while True:
                    line = f.readline()
                    if not line: break

                    if findWord in line:
                        print('String in ' + full_filename)

            if os.path.isdir(full_filename):
                search(full_filename, findWord)

    except PermissionError:
        pass


search("/Users/Diri/dev/test", 'LIFE IS TOO SHORT')


'''
import os

def func(dirname):
  for root, dirs, files in os.walk(dirname):
    for name in files:
      if '.txt' in name: 
        f = open(os.path.join(root,name),'r')
        txt = f.read()
        if 'LIFE IS TOO SHORT' in txt: print name
        f.close()

func('.')

'''

