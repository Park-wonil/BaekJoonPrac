from collections import Counter
A = input().upper()
if len(A)==1:
    print(A)
else:
    count = Counter(A)
    most = count.most_common(2)
    if len(most)==1 or most[0][1] > most[1][1]:
        print(most[0][0])
    else:
        print('?')
    
    