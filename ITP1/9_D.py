string = input()
q = int(input())
orders = [input().split() for _ in range(q)]

for item in orders:
    command = item[0]
    arg1 = int(item[1])
    arg2 = int(item[2])
    if command == "replace":
        arg3 = item[3]
        string_cp = string
        string_cp = string_cp[:arg1] + arg3 + string_cp[arg2+1:]
        string = string_cp
    elif command == "reverse":
        string_cp = string
        reverse_str = string[arg1:arg2+1][::-1]
        string_cp = string[:arg1] + reverse_str + string[arg2+1:]
        string = string_cp
    elif command == "print":
        print(string[arg1:arg2+1])

