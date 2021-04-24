def minkowski_dist(n, x_list, y_list, p):
    diff = 0
    for i in range(n):
        diff += abs(x_list[i]-y_list[i])**p
    dist = diff**(1/p)
    return dist


def chebyshev_dist(n, x_list, y_list):
    max_dist = -float('inf')
    for i in range(n):
        dist = abs(x_list[i] - y_list[i])
        if dist > max_dist:
            max_dist = dist
    return max_dist


def main():
    n = int(input())
    x_list = list(map(int, input().split()))
    y_list = list(map(int, input().split()))

    for i in range(1, 4):
        print(minkowski_dist(n, x_list, y_list, i))
    print(chebyshev_dist(n, x_list, y_list))

if __name__ == "__main__":
    main()
