# n = input()

# nums = input()

# num_list = nums.split(' ')
# for i, num in enumerate(num_list):
#     num_list[i] = int(num_list[i])



# cnt = 0
# def possible_divison(num_list):
#     can = True
#     for num in num_list:
#         if num % 2 != 0:
#             can = False
#             break

#     if can == True:
#         global cnt 
#         cnt += 1
#         secondary_list = []
#         for num in num_list:
#             secondary_list.append(num/2)
#         possible_divison(secondary_list)

# possible_divison(num_list)
# print(cnt)

# --------------------------------------

n = input()
nums = input()

num_list = nums.split(' ')
for i, num in enumerate(num_list):
    num_list[i] = int(num_list[i])

cnt = 0
def possible_divison(num_list):
    global cnt 
    can = True
    for num in num_list:
        if num % 2 != 0:
            can = False
            break
    if can == True:
        cnt += 1
        secondary_list = []
        for num in num_list:
            secondary_list.append(num//2)
        possible_divison(secondary_list)

possible_divison(num_list)
print(cnt)


