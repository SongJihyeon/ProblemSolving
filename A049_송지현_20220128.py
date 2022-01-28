#백준
#4659번 비밀번호 발음하기

aei = "aeiou"
while True:
    inp = input()
    ck1 = 0
    ck2 = 0
    if inp == "end":
        break;
    for i in inp:
        if i in aei:
            ck2=1

    for i in range(1,len(inp)):
        if inp[i] == inp[i-1] and inp[i] not in 'eo':
            ck1 = 1

    for i in range(len(inp)-2):
        if inp[i] in aei and inp[i+1] in aei and inp[i+2] in aei:
            ck1 = 1
        elif inp[i] not in aei and inp[i+1] not in aei and inp[i+2] not in aei:
            ck1 = 1

    if ck1 == 1 or ck2 == 0:
        print("<" + inp + "> is not acceptable." )
    else:
        print("<" + inp + "> is acceptable." )
