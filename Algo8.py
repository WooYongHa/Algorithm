# 꼬리 재귀 예시

def fibo(n):
    return tail_fibo(n, 0, 1)


def tail_fibo(n, current, next):
    if n == 0:
        return current
    else:
        return tail_fibo(n - 1, next, current + next)


if __name__ == '__main__':
    n = int(input())
    print(fibo(n))
