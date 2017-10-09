from math import sqrt

'''
打印沙漏
'''
def print_img(num, ch):
    # up
    for i in range(num, 0, -1):
        for j in range(num - i, 0, -1):
            print(" ", end="")
        for j in range(2 * i - 1):
            print(ch, end="")
        print()
    # down
    for i in range(2, num + 1):
        for j in range(num - i, 0, -1):
            print(" ", end="")
        for j in range(2 * i - 1):
            print(ch, end="")
        print()


if __name__ == "__main__":
    s = input()
    a, b = s.split(" ")
    ceng = int(sqrt((int(a) + 1) / 2))
    print_img(ceng, b)
    print(int(a) - 2 * ceng * ceng + 1)
