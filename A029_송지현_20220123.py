#백준
#17210번 문문문

num = int(input())
door = int(input())

for i in range(1, num):
    if num >= 6:
        print("Love is open door")
        break
    if i%2 == 0:
        print(door)
    elif i%2 == 1:
        print(int(not(door)))
