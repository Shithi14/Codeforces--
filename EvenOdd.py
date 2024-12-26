n,k=map(int,input().split())
oddNumber=(n+1)//2
if oddNumber>=k:
    foundnumber=2*k-1
    print(foundnumber)

else:
    foundnumber=2*(k-oddNumber)
    print(foundnumber)