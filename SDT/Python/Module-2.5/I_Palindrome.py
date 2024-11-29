# N = input()
# num_list = []

# for num in N:
#     num_list.append(num)


# num_list.reverse()
# num_list_reverse = []

# for num in num_list:
#     num_list_reverse.append(num)


# for num in num_list:
    # if num == '0':
    #     continue
#     print(num, end="")

# num_list.reverse()

# if num_list == num_list_reverse:
#     print("\nYES")
# else:
#     print("\nNO")
# --------------------------------


n = input()
n_reversed = int(n[::-1])

print(n_reversed)

if int(n) == n_reversed:
    print("YES")
else:
    print("NO")




