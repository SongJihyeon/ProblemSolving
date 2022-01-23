#백준
#5622번 다이얼

dial = ['ABC', 'DEF', 'GHI', 'JKL', 'MNO', 'PQRS', 'TUV', 'WXYZ']
a = input()
result = 0
for j in range(len(a)):
    for i in dial:
        if a[j] in i:
            result += dial.index(i)+3
print(result)
