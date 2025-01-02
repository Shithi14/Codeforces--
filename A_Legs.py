t=int(input())
for i in range(t):
    n=int(input())
    animals=n//4
    if n%4==0:
        print(animals)
    else:
        print(animals+1)
