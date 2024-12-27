#https://codeforces.com/contest/2044/problem/C
t=int(input())
for i in range(t):
    m,a,b,c=map(int,input().split())
    seat_row1=min(m,a)
    seat_row2=min(m,b)
    remainingseat=2*m-(seat_row1+seat_row2)
    seact_c=min(c,remainingseat)
    total_monkey=seat_row1+seat_row2+seact_c
    print(total_monkey)
