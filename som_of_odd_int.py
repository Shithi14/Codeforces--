t=int(input())
while t>0:
    n,k=map(int,input().split()) #n=10 ; k=2
    square_of_odd=k*k  #k*k=4
    #10>4 and (10-4)%2==0
    if (n>=square_of_odd) and (n-square_of_odd)%2==0:
        #6%2==0 it is true 
        print("YES")
    else:
        print("NO")

    t-=1  

