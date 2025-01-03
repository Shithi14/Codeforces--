t = int(input())
for i in range (t):
    n = int(input())
    div = (n // 10)
    rem=n%10
    digit_sum = div + rem
    print(digit_sum)