n=int(input())
arr=list(map(int,input().split()))
sum=0
for i in range(0,n):
    sum+=arr[i]
    
#sum is even
if sum%2==0:
    print(sum)
else:
    #findout the odd minimum
    minimum=float('inf')
    for i in range(0,n):
        if arr[i]%2!=0:
            minimum=min(minimum,arr[i])
    oddSum=sum-minimum
    print(oddSum)
