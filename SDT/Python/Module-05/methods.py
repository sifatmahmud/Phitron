def call():
    print('calling someone i dont know')
    return 'call done'


class Phone:
    price = 1200
    color = 'blue'
    brand = 'samsung'
    fetures = ['camera', 'speaker', 'hammer']

    def call(self):
        print('calling one person')
    
    def send_sms(self, phone, sms):
        text = f'sending sms to: {phone} and message: {sms}'
        return text


my_phone = Phone()

print(my_phone.fetures)

my_phone.call()
result = my_phone.send_sms(41524, 'I forgot to miss you')
print(result)



