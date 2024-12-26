n=int(input())

s=input()
s=s.upper()
uniqe_alphabet=set(s)
if len(uniqe_alphabet)==26:
    print("YES")
else:
    print("NO")