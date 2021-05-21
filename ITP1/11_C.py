class Dice:
    def __init__(self, ary):
        super().__init__()
        self.ary = ary
        self.top = 0
    
    def get_num(self):
        return self.ary[self.top]

    def rolo_dice(self, order):
        if order == "S":
            self.setAray(self.ary[4], self.ary[0], self.ary[2], self.ary[3], self.ary[5], self.ary[1])
        elif order == "W":
            self.setAray(self.ary[2], self.ary[1], self.ary[5], self.ary[0], self.ary[4], self.ary[3])
        elif order == "N":
            self.setAray(self.ary[1], self.ary[5], self.ary[2], self.ary[3], self.ary[0], self.ary[4])
        elif order == "E":
            self.setAray(self.ary[3], self.ary[1], self.ary[0], self.ary[5], self.ary[4], self.ary[2])
    
    def setAray(self, n1, n2, n3, n4, n5, n6):
        self.ary = [n1, n2, n3, n4, n5, n6]

    def get_dice(self):
        return self.ary


def main():
    li1 = list(map(int, input().split()))
    li2 = list(map(int, input().split()))

    dice1 = Dice(li1)
    dice2 = Dice(li2)

    is_match = False
    order_list = ["S", "S", "S", "S", "E", "E", "E", "S", "S", "S", "E", "E", "E", "S", "S", "S", "E", "E", "S", "S", "E", "S", "E", "S"]

    for order in order_list:
        dice1.rolo_dice(order)
        dice1_ary = dice1.get_dice()
        dice2_ary = dice2.get_dice()
        if dice2_ary == dice1_ary:
            is_match = True

    if is_match:
        print("Yes")
    else:
        print("No")


if __name__ == "__main__":
    main()
