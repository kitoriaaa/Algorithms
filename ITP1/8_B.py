l = []

def solve(num):
    cnt = 0
    while num > 0:
        cnt += num % 10
        num = num // 10
    return cnt

while True:
    n = int(input())
    if n == 0:
        break
    l.append(n)


for i in l:
    print(solve(i))