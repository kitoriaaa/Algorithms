card = []
N = []
H = []

while True:
    c = input()
    if c == '-':
        break
    else:
        card.append(c)
        num = int(input())
        N.append(num)
        h = [int(input()) for _ in range(num)]
        H.append(h)


for i in range(len(card)):
    shuffle_card_num = 0
    for j in H[i]:
        shuffle_card_num += j
    card_len = len(card[i])
    res_shuffle_num = shuffle_card_num%card_len
    result = card[i][res_shuffle_num:] + card[i][:res_shuffle_num]
    print(result)
