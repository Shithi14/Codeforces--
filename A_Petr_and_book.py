pages = int(input())
daily_read = list(map(int, input().split()))
days = 0

while pages > 0: 
  
  pages -= daily_read[days]
  days += 1
  if days == 7:
    days = 0
if days == 0:
  print(7)
else:
  print(days)
