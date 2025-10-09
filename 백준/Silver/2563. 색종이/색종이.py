color = int(input())
A = [[0]*100 for _ in range(100)]

count=0


for i in range(color):
    row,col = map(int, input().split())
    for j in range(row,row+10):
        for k in range(col,col+10):
            A[j][k]=1
    
for i in range(100):
    for j in range(100):
        count += A[i][j]


print(count)