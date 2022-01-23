#백준
#5598번 카이사르 암호

inp = list(input())
for i in range(len(inp)):
    k = ord(inp[i]) - 3
    if k < ord('A'):
        k += 26
    inp[i] = chr(k)
print(''.join(inp))
