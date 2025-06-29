a, b = map(int,input().split())
arr = [0] * (a+1)
for _ in range(b):
    c,d,e = map(int, input().split())
    for i in range(c,d+1):
          arr[i] = e
print(*arr[1:])
