#백준
#1157번 단어 공부

inp = input().lower()
inp_list = list(set(inp))
count = []

for i in inp_list:
    count.append(inp.count(i))


if count.count(max(count)) >= 2:
    print("?")
else:
    print(inp_list[(count.index(max(count)))].upper())
