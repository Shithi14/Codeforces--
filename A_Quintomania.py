t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    found=True
    for i in range(1,n):
        interval=abs(arr[i-1]-arr[i])
        if interval!=5 and  interval!=7:
            found=False
            break
        
    if  found:
        print("YES")
    else:
        print("NO")

