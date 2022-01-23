#백준
#2775번 부녀회장이 될테야

inp = int(input())

for n in range(inp):  
    floor = int(input())
    num = int(input())

    f0 = []
    for f in range(1, num+1):
        f0.append(f)
        
    for k in range(floor):
        for i in range(1, num):
            f0[i] += f0[i-1]
    print(f0[-1])
