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


class Dice2(Dice):
    def __init__(self, ary):
        super().__init__(ary)
        self.relation = [0 for _ in range(60)]
        # 1: 42, 23, 35, 54
        self.relation[31] = self.relation[12] = self.relation[24] = self.relation[43] = 1
        # 2: 14, 46, 63, 31
        self.relation[3] = self.relation[35] = self.relation[52] = self.relation[20] = 2
        # 3: 12, 26, 65, 51
        self.relation[1] = self.relation[15] = self.relation[54] = self.relation[40] = 3
        # 4: 15, 56, 62, 21
        self.relation[4] = self.relation[45] = self.relation[51] = self.relation[10] = 4
        # 5: 13, 36, 64, 41
        self.relation[2] = self.relation[25] = self.relation[53] = self.relation[30] = 5
        # 6: 24, 45, 53, 32
        self.relation[13] = self.relation[34] = self.relation[42] = self.relation[21] = 6
    
    def get_num(self, top, front):
        top_ind = self.ary.index(top)
        front_ind = self.ary.index(front)
        return self.ary[self.relation[(top_ind)*10+front_ind]-1]


def main():
    li = list(map(int, input().split()))
    q_n = int(input())
    questions = []
    for _ in range(q_n):
        q_s = list(map(int, input().split()))
        questions.append({"top":q_s[0], "front":q_s[1]})
    
    dice = Dice2(li)
    for dic in questions:
        print(dice.get_num(dic["top"], dic["front"]))


if __name__ == "__main__":
    main()
