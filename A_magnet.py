t=int(input())
count=1
previous=input()
for i in range(t-1):
    current=input()
    if current!=previous:
        count+=1
    previous=current

print(count)