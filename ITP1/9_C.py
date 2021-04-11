n = int(input())
cards = [input().split() for _ in range(n)]

tarou_score = 0
hanako_score = 0
for item in cards:
    tarou = item[0]
    hanako = item[1]
    if tarou == hanako:
        tarou_score += 1
        hanako_score += 1
    elif tarou < hanako:
        hanako_score += 3
    else:
        tarou_score += 3

print(tarou_score, hanako_score)
