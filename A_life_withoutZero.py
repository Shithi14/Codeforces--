a=int(input())
b=int(input())
c=a+b
without0_a=int(str(a).replace('0',''))
without0_b=int(str(b).replace('0',''))
without0_c=int(str(c).replace('0',''))
if without0_a+without0_b==without0_c:
    print("YES")
else:
    print("NO")