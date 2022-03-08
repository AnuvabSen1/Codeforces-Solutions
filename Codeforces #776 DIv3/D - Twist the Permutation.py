import collections
import math
T= int(input())
for i in range(T):
    n = int(input())
    a = list(map(int, input().split()))
    d = []
    for i in range(n):
        id = a.index(n-i)
        if id == n-i-1:
            d.append(0)
        else:
            d.append(id + 1)
        a = a[id + 1:] + a[:id]
    print(*d[::-1])
