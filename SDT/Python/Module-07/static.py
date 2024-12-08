class Shopping:
    cart = [] # class attribute / static attribute
    origin = 'china'
    
    def __init__(self, location):
        self.name = 'jamuna city' # instance attribute
        self.location = location

    def purchase(self, item, price, amount):
        remaining = amount - price
        print(f'buying: {item} for price: {price} and remaining: {remaining}')
    
    @staticmethod
    def multi( a, b):
        print( a *b)

    @classmethod
    def hudai_dekhi(self, item):
        print('hudai dekhi kintu kinum na', item)


# Shopping.purchase('a', 2, 3, 3)

basundara = Shopping('not popular location')
# basundara.purchase('lungi', 500, 1000)
basundara.hudai_dekhi('lungi')

Shopping.hudai_dekhi('lungi')

Shopping.multi(10, 20) # static method
basundara.multi(6,9)


