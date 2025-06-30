n, m = map(int, input().split())
a = list()
for i in range(n+1):
    a.append(i)
for k in range(m):
    i, j = map(int, input().split())
    temp = a[i]
    a[i] = a[j]
    a[j] = temp
for p in range(1,n+1):
    print(a[p], end=' ')