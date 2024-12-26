n,m=map(int,(input()).split())
if m==n:
    print("0")

elif m%n!=0:
    print("-1")
else:
    current_value=m//n
    count=0
    while current_value%2==0:
        count+=1
        current_value//=2
    while current_value%3==0:
        count+=1
        current_value//=3
    if current_value==1:
        print(count)
    else:
        print("-1")

