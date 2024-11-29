whole = input()
numbers = whole.split()

a,b = numbers
a = int(a)
b = int(b)

lucky_numbers = []

for i in range(a,b+1):
    i = str(i)
    result = True
    for num in i:
        if num != '4' and num != '7':
            result = False
    if result==True:
        i = int(i)
        lucky_numbers.append(i)

if lucky_numbers == []:
    print(-1)
else:
    for num in lucky_numbers:
        print(num, end=" ")
