#https://codeforces.com/contest/114/problem/A
k=int(input())
l=int(input())
count=0
while (l%k==0):
    l=l//k
    count+=1

if l==1:
    print("YES")
    print(count-1)
else:

    print("NO")