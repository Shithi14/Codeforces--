t=int(input())
for i in range(1,t+1):
    
    a,b=map(int,input().split())
    minimum=min(a,b)
    maximum=max(a,b)
    print(f"{minimum} {maximum}")