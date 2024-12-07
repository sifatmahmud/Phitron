# class Bank:
#     def __init__(self, balance):
#         self.balance = balance
#         self.min_withdraw = 100
#         self.max_withdraw = 100000
    
#     def get_balance(self):
#         return self.balance
    
#     def deposit(self, amount):
#         if amount > 0:
#             self.balance += amount
    
#     def withdraw(self, amount):
#         if amount < self.min_withdraw:
#             print (f'fokira, you can not withdraw below {self.min_withdraw}')
#         elif amount > self.max_withdraw:
#             print (f'bank fokir hoe jabe, you can not withdraw more than {self.max_withdraw}')
#         else:
#             self.balance -= amount
#             print (f'here is your money {amount}')
#             print(f'your balance after withdraw {self.get_balance()}')


# brac = Bank(15000)
# brac.withdraw(25)
# brac.withdraw(5000000)
# brac.withdraw(1000)



# dbbl = Bank(5000)
# dbbl.deposit(2000)
# dbbl.deposit(2000)
# print(dbbl.get_balance())




class Phone:
    price = 12000
    color = 'blue'
    brand = 'samsung'

    def call(self):
        print('calling one person')

    def send_sms(self, phone, sms):
        text = f'Sending SMS to: {phone+5}'
        return text


my_phone = Phone()
result = my_phone.send_sms(41524, 'Missy, I missed to miss you')
print(result)