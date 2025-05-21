b = []
for _ in range(9):
    a = int(input())
    b.append(a)
max=b[0]
maxn=0
for i in range(1,9):
    if b[maxn]<b[i]:
        maxn = i
        max = b[i]
print(max)
print(maxn+1)