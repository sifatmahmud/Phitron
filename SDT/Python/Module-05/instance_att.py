class Shop:
    shoppin_mall = 'Jamuna'
    def __init__(self, buyer):
        self.buyer = buyer
        self.cart = [] # cart is a instance attribute
    
    def add_to_cart(self, item):
        self.cart.append(item)


mehjabeen = Shop('Meh zabeen')
mehjabeen.add_to_cart('shoe')
mehjabeen.add_to_cart('phone')
print(mehjabeen.cart)


nisho = Shop('nisho')
nisho.add_to_cart('cap')
nisho.add_to_cart('watch')
print(nisho.cart)


apurbo = Shop('age purbo chilo')
apurbo.add_to_cart('chiruni')
apurbo.add_to_cart('perfume')
print(apurbo.cart)