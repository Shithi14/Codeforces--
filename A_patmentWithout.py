t=int(input())
for i in range(0,t):
    a,b,n,s=map(int,input().split())
    X=min(a,s//n)
    remaining=s-X*n
    if remaining<=b:
        print("YES")
    else:
        print("NO")