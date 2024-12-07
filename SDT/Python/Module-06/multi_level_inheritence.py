class Vehicle:
    def __init__(self, name, price):
        self.name = name
        self.price = price
    
    def move(self):
        pass

    def __repr__(self):
        return f'{self.name} {self.price}'

class Bus(Vehicle):
    def __init__(self, name, price, seat):
        self.seat = seat
        super().__init__(name, price)
    
    def __repr__(self):
        return super().__repr__()

class Truck(Vehicle):
    def __init__(self, name, price, weight):
        self.weight = weight
        super().__init__(name, price)

class PickUpTruc(Truck):
    def __init__(self, name, price, weight):
        super().__init__(name, price, weight)

class ACBus(Bus):
    def __init__(self, name, price, seat, temperature):
        self.temperature = temperature
        super().__init__(name, price, seat)
    
    def __repr__(self):
        print(f'{self.seat}')
        return super().__repr__()

green_line = ACBus('green', 500000, 22, 16)
print(green_line)
