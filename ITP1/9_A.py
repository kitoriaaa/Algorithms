W = input().lower()

T = ""
while True:
    s = input()
    if s == "END_OF_TEXT":
        break
    else:
        T += s.lower() + " "

ary = T.split()
cnt = 0
for word in ary:
    if W == word:
        cnt += 1
print(cnt)
