#킹1개 퀸1개 룩2개 비숍2개 나이트2개 폰8개 16개

cousyong = []
Ohsuyeon = list(map(int, input().split()))
correct = [1, 1, 2, 2, 2, 8]

for i in range(len(Ohsuyeon)):
    suyeon = correct[i]-Ohsuyeon[i]
    cousyong.append(suyeon)
    
print(*cousyong, end=' ')
