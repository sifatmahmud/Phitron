class Shop:
    cart = [] # cart is a class attribute
    def __init__(self, buyer):
        self.buyer = buyer
    
    def add_to_cart(self, item):
        self.cart.append(item)


mehzabeen = Shop('meh zabeen')
mehzabeen.add_to_cart('shoes')
mehzabeen.add_to_cart('phone')
print(mehzabeen.cart)


nisho = Shop('nisho')
nisho.add_to_cart('cap')
nisho.add_to_cart('watch')
print(nisho.cart)