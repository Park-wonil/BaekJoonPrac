num = []
for _ in range(9):
    inp = int(input())
    num.append(inp)
max_ = max(num)
max_n = num.index(max_)
print(max_)
print(max_n+1)