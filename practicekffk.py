d=input()
t=input()
k="qwertyuiopasdfghjkl;'zxcvbnm,./"
o=""
for i in t:
    for j in k:
        if j==i:
            if d=="L":
                o+=j+1
            else:
                o+=j-1
            break



print(o)