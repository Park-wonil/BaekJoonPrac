N,B = map(int, input().split())
A = ''
digits = '0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ'

while N>0:
        A = digits[N%B]+A
        N= N//B
    
print(A)