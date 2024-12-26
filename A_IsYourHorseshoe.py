a, b, c, d = map(int, input().split())
differentColor = set([a,b,c,d])
shoesRequired = 4 - len(differentColor)
print(shoesRequired)