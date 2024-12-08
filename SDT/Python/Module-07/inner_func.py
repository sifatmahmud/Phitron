# function is a first class object

def double_decker():
    print('starting the double decker')
    def inner_func():
        print('inside the innner')
        return 3000
    return inner_func

# print(double_decker())
# print(double_decker()())


def do_something(work):
    print('work started')
    # print(work)
    work()
    print('work ended')

# do_something(2)
# do_something('ami busy')

def coding():
    print('coding in python')

# do_something(coding)

def sleeping():
    print('sleeping and dreaming in python')
