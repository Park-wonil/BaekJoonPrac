A = []
for i in range(5):
    arr = list(input().strip())
    A.append(arr)
for i in range(15):
    for j in range(5):
        if len(A[j])>i:
            print(A[j][i], end='')

