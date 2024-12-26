a,b,c,d=map(int,input().split())
misha_point=max(((3*a)//10),((a-(a*c)//250)))
vasya_point=max(((3*b)//10),((b-(b*d)//250)))
if misha_point>vasya_point:
    print("Misha")
elif misha_point<vasya_point:
    print("Vasya")

else:
    print("Tie")