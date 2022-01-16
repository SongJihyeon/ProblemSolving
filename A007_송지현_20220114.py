#백준
#2920번 음계

inp = list(map(int, input().split()))

asc = inp[:]
asc.sort()
des = inp[:]
des.sort(reverse=True)

if inp == asc:
    print("ascending")
elif inp == des:
    print("descending")
else:
    print("mixed")
