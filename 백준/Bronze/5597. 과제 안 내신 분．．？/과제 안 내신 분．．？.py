class wonil:
    def __init__ (self):
        self.n = [0] * 31
    def inp(self):
        for _ in range(28):
            self.i = int(input())
            self.n[self.i] = 1
    def result(self):
        for i in range(1,31):
            if(self.n[i]==0):
                print(i)
        return
res = wonil()
res.inp()
res.result()

            