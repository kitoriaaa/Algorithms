def calc_ave(data):
    return sum(data)/len(data)


def main():
    n_list = []
    data_list = []
    ave_list = []
    standard_deviation = []

    while True:
        n = int(input())
        if n == 0:
            break
        n_list.append(n)
        data = list(map(int, input().split()))
        data_list.append(data)
        ave_list.append(calc_ave(data))
    
    for i in range(len(n_list)):
        target_data = data_list[i]
        m = ave_list[i]
        tmp = 0
        for s in target_data:
            tmp += (s-m)**2
        distributed = tmp / len(target_data)
        standard_deviation.append(distributed**(1/2))
    
    for item in standard_deviation:
        print(item)
        

if __name__ == "__main__":
    main()
