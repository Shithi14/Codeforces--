s=input()
replaceS=s.replace('+','')
sortedString=sorted(replaceS)
rearrangeString='+'.join(sortedString)
print(rearrangeString)