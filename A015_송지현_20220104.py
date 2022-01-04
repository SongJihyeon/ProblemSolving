#검증수
#백준 2475번

sum = 0
num1, num2, num3, num4, num5 = map(int, input().split())
sum = num1**2 + num2**2 + num3**2 + num4**2 + num5**2
print(sum%10)
