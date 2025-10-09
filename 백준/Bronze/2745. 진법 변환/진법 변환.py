N,B = input().split()
B = int(B)
lst = list(N)
count = 0

    
for i in range(len(N)-1,-1,-1):
    A = B**i
    count += A*(int(lst[len(N)-i-1], 36))
print(count)