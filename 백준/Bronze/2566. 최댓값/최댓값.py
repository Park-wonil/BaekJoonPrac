A = []
B = []
max1 = 0
row = 0
col = 0
for i in range(9):
    A = list(map(int, input().split()))
    B.append(A)
for i in range(9):
    for j in range(9):
        if B[i][j]>=max1:
            max1 = B[i][j]
            row = i+1
            col = j+1
print(max1)
print(row,col,end=' ')
            
