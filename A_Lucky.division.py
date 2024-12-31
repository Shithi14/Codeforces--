n=int(input())
lucky_number=[4,7,44,77,47,74,447,774,474,747,477,744,444,777]
found=False
for i in lucky_number:
    if n%i==0:
        found=True
        break
if found:
    print("YES")
else:
    print("NO")