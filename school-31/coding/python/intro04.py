n = int(input())
k = 1

while n != 1:
	if n % 2 == 0:
		n /= 2
	else:
		n = 3 * n + 1
	k += 1

print(k)