N = int(input())
inp = input()
arr = list(map(int, inp.split()))
max = arr[0]
min = arr[0]
for i in range(1,N):
    if arr[i] > max:
        max = arr[i]
    if min > arr[i]:
        min = arr[i]    
   
print(min,max)