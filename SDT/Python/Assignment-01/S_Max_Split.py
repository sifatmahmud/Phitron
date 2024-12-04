# s = input()


# cnt = 0

# len_s = len(s)
# i = 0
# while(i < len_s):
#     if s[0] == 'L':
#         if s[i] == 'R':
#             cnt += 1
#             i += (i+1)
#         else:
#             i += 1
#     else:
#         if s[i] == 'L':
#             cnt += 1
#             i += (i+1)
#         else:
#             i += 1

# print(cnt)

# j = 0
# set_count = 0
# print_count = 0
# if s[0] == 'L':
#     while(j < len_s):
#         if set_count == 0:
#             print_count = j
#         else:
#             print_count = j - (print_count+1)

#         if  s[j] == 'R':
#             for k in range(print_count):
#                 print('L', end='')
#             for k in range(print_count):
#                 if k == print_count-1:
#                     print('R', end='\n')
#                 else:
#                     print('R', end='')
#             j += (j+1)
#             set_count += 1
#         else:
#             j += 1
# else:
#     while(j < len_s):
#         if set_count == 0:
#             print_count = j
#         else:
#             print_count = j - (print_count+1)

#         if  s[j] == 'L':
#             for k in range(print_count):
#                 print('R', end='')
#             for k in range(print_count):
#                 if k == print_count-1:
#                     print('L', end='\n')
#                 else:
#                     print('L', end='')
#             j += (j+1)
#             set_count += 1
#         else:
#             j += 1
# --------------------------------------------------


# s = input()

# len_s = len(s)

# # counting first balanced string length
# first_string_len = 0
# i = 0

# if s[0] == 'L':
#     for char in s:
#         if char == 'R':
#             first_string_len = i*2
#             break
#         i += 1
# else:
#     for char in s:
#         if char == 'L':
#             first_string_len = i*2
#             break
#         i += 1



# # counting balanced strings
# all_s_size = []
# new_s_cnt = 0
# len_s_copy = len_s
# j = first_string_len
# while len_s_copy > 0:
#     len_s_copy -= j
#     all_s_size.append(j)
#     j += 2
#     new_s_cnt += 1

# print(new_s_cnt)

# # printing new strings
# if s[0] == 'L':
#     for num in all_s_size:
#         for i in range(int(num/2)):
#             print('L', end='')
#         for i in range(int(num/2)):
#             if i != (num/2)-1:
#                 print('R', end='')
#             else:
#                 print('R', end='\n')
# else:
#     for num in all_s_size:
#         for i in range(int(num/2)):
#             print('R', end='')
#         for i in range(int(num/2)):
#             if i != (num/2)-1:
#                 print('L', end='')
#             else:
#                 print('L', end='\n')


# -----------------------------------------------

s = input()

balance_string = 0
new_strings = []
start = 0
    
for i, char in enumerate(s):
    if char == 'R':
        balance_string += 1
    elif char == 'L':
        balance_string -= 1
        
    if balance_string == 0:
        new_strings.append(s[start:i + 1])
        start = i + 1
    
print(len(new_strings))
for new_string in new_strings:
    print(new_string)




