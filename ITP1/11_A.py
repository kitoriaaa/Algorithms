class Dice:
    def __init__(self, ary):
        super().__init__()
        self.ary = ary
        self.top = 0

    def get_num(self):
        return self.ary[self.top]
    
    def roll_dice(self, order):
        if order == "S":
            self.setAray(self.ary[4], self.ary[0], self.ary[2], self.ary[3], self.ary[5], self.ary[1])
        elif order == "W":
            # 3, 2, 6, 1, 5, 4
            self.setAray(self.ary[2], self.ary[1], self.ary[5], self.ary[0], self.ary[4], self.ary[3])
        elif order == "N":
            # 2, 6, 3, 4, 1, 5
            self.setAray(self.ary[1], self.ary[5], self.ary[2], self.ary[3], self.ary[0], self.ary[4])
        elif order == "E":
            # 4, 2, 1, 6, 5, 3
            self.setAray(self.ary[3], self.ary[1], self.ary[0], self.ary[5], self.ary[4], self.ary[2])

    def setAray(self, n1, n2, n3, n4, n5, n6):
        self.ary = [n1, n2, n3, n4, n5, n6]


def main():
    li = list(map(int, input().split()))
    orders = input()

    dice = Dice(li)
    for order in orders:
        dice.roll_dice(order)
    print(dice.get_num())


if __name__ == "__main__":
    main()
