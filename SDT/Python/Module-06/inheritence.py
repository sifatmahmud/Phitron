


class Gadget:
    def __init__(self, brand, price, color, origin) -> None:
        self.brand = brand
        self.price = price
        self.color = color
        self.origin = origin
    
    def run(self):
        return f'Running laptop: {self.brand}'

class Laptop:
    def __init__(self, memory, ssd):
        self.ssd = ssd
        self.memory = memory
    
    def coding(self ):
        return f'learning python and practicing'

class Phone(Gadget):
    def __init__(self,brand, price,color, origin,  dual_sim) -> None:
        self.dual_sim = dual_sim
        super().__init__(brand, price, color,origin)
    
    def run(self):
        return f'phone tipa tipi kore jindegi sesh'


    def phone_call(self, number, text):
        return f'Sending SMS to: {number} with {text}'
    
    def __repr__(self):
        return f'phone: {self.dual_sim} {self.price} {self.dual_sim}'

class Camera:
    def __init__(self, pixel) -> None:
        self.pixel = pixel
    
    def run(self):
        pass

    def change_lens(self):
        pass



# inheritence
my_phone = Phone('iphone',120000, 'silver', 'china',True)
print(my_phone.brand)
print(my_phone)
