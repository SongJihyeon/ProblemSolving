#백준
#1755번 숫자놀이

m, n = map(int, input().split())
dict = {'1':'one', '2':'two', '3':'three', '4':'four', '5':'five', '6':'six',
        '7':'seven', '8':'eight', '9':'nine', '0':'zero'}
lst = []

for i in range(m, n+1):
    itoa = ' '.join([dict[j] for j in str(i)])
    lst.append([i, itoa])

lst.sort(key=lambda x:x[1])

for i in range(len(lst)):
    if i%10 == 0 and i!= 0:
        print(sep = '\n')
    print(lst[i][0], end=' ')
