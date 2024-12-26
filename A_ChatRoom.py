s = input()
word = "hello"
count = 0
# wordCount
j=0
for i in range(0, len(s)):
    if j<len(word) and  s[i]==word[j]:
        count += 1
        j += 1
    if count == 5:
        break
if count == 5:
    print("YES")
else:
    print("NO")    