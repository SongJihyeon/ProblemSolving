#숫자의 개수
#백준 2577

a = input()
b = input()
c = input()

res = [0] *10

mul = int(a) * int(b) * int(c)

for i in range(len(str(mul))):
    res[int(str(mul)[i])] += 1

for i in range(len(res)):
    print(res[i])
  
