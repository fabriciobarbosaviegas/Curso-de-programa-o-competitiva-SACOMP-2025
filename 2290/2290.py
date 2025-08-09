from collections import Counter

while True:
    try:
        N = int(input())
    except EOFError:
        break
    if N == 0:
        break

    Ni = input().split()
    Ni = Counter(Ni)
    a = []


    for i, j in Ni.items():

        if j % 2 == 1:
            a.append(int(i))

    a.sort()
    print(f'{a[0]} {a[1]}')
