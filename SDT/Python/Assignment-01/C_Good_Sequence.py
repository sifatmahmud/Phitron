# n = int(input())
# num_list = []
# num_list.sort()

# nums = input()

# if n == 1:
#     if int(nums) > 1:
#         print(1)
#     else:
#         print(0)
# else:
#     for num in nums:
#         if num == ' ':
#             continue
#         else:
#             num_list.append(int(num))

#     remove_count = 0

#     num_list_set = set(num_list)

#     for num in num_list_set:
#         occurance = num_list.count(num)
#         if occurance > num:
#             val = occurance - num
#             remove_count += val
#         elif occurance < num:
#             remove_count += occurance

#     print(remove_count)
# --------------------------------------------
# n = int(input())
# num_list = []

# nums = input()

# if n == 1:
#     if int(nums) > 1:
#         print(1)
#     else:
#         print(0)
# else:
    
#     splitted_list = nums.split(' ')
#     for i in splitted_list:
#         num_list.append(int(i))

#     remove_count = 0

#     num_list_set = set(num_list)

#     for num in num_list_set:
#         occurance = num_list.count(num)
#         if occurance > num:
#             val = occurance - num
#             remove_count += val
#         elif occurance < num:
#             remove_count += occurance

#     print(remove_count)
# --------------------------------------------
n = int(input())
num_list = []

nums = input()

if n == 1:
    if int(nums) > 1:
        print(1)
    else:
        print(0)
else:
    
    splitted_list = nums.split(' ')
    for i in splitted_list:
        num_list.append(int(i))

    remove_count = 0

    num_frequency = {}
    for num in num_list:
        if num in num_frequency:
            num_frequency[num] += 1
        else:
            num_frequency[num] = 1

    for num, occurance in num_frequency.items():
        if occurance > num:
            val = occurance - num
            remove_count += val
        elif occurance < num:
            remove_count += occurance

    print(remove_count)


