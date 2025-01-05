x1,x2,x3=map(int,input().split())
if x1>x2>x3 or x3>x2>x1:
    median=x2
elif x1>x3>x2 or x2>x3>x1:
    median=x3
else:
    median=x1

totalDistance=abs(median-x1)+abs(median-x2)+abs(median-x3)
print(totalDistance)