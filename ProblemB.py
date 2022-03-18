
inp = int(input())
for _ in range(inp):
    n = int(input())
    a = list(map(int, input().split()))
    a.sort()
    s1, s2 = a[0], 0
    for i in range(1, (n+1)//2+1):
        s1 += a[i]
        s2 += a[n-i]
        if s1 < s2:
            print("YES")
            break
    else:
        print("NO")
