n = int(input())
result = 0
for i in range(n):
    binary = input()
    binary = list(binary)
    print(binary)
    sums = int(binary[0]) + int(binary[2]) + int(binary[4])
    if sums >= 2:
        result += 1
print(result)

#  	231A - Team
