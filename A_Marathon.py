t = int(input())
for i in range(0, t):
    a, b, c, d = map(int, input().split())
    participants_front = 0
    if b > a:
        participants_front += 1
    if c > a:
        participants_front += 1
    if d > a:
        participants_front += 1
        
    print(participants_front)