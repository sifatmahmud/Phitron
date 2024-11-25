def full_name(first, last):
    name = f'{first} {last}'
    return name

# take parameters in order(serial wise)
# name = full_name('Alu', 'kodu')
# name = full_name(last = 'Alu', first='kodu')
# print(name)


# kargs = key arguments

def famous_name(first, last, **addition):
    name = f'{first} {last}'
    print(addition)
    # print(addition['title'])
    return name

name = famous_name(first='Taher', last='Ali', title="Hujur", addition="Shayokh")
print(name)