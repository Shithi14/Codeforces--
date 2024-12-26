t = int(input())  # Number of test cases

for _ in range(t):
    n, a, b, c = map(long long int, input().split())
    
    cycle_distance = a + b + c  # Total distance covered in one cycle (3 days)
    
    total_distance = 0  # Keeps track of the total distance walked
    day = 0  # Keeps track of the current day
    
    # Simulate the walking process day by day
    while total_distance < n:
        day += 1
        if day % 3 == 1:  # Day 1 (Monocarp walks 'a')
            total_distance += a
        elif day % 3 == 2:  # Day 2 (Monocarp walks 'b')
            total_distance += b
        else:  # Day 3 (Monocarp walks 'c')
            total_distance += c
            
    print(day)  # Print the day when Monocarp reaches or exceeds 'n' kilometers
