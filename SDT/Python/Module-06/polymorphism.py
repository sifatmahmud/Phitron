
class Animal:
    def __init__(self, name):
        self.name = name
    
    def make_sound(self):
        print('animal making some sound')

class Cat(Animal):
    def __init__(self, name):
        super().__init__(name)
    
    def make_sound(self):
        print('meow meow')

class Dog(Animal):
    def __init__(self, name):
        super().__init__(name)
    
    def make_sound(self):
        print('ghew ghew')

class Goat(Animal):
    def __init__(self, name):
        super().__init__(name)
    
    def make_sound(self):
        print('beh beh beh')


don = Cat('Real Don')
don.make_sound()

shepard = Dog('local shepard')
shepard.make_sound()

mess = Goat('L M')
mess.make_sound()

less = Goat('gora gori')

animals = [don, shepard, mess, less]
for animal in animals:
    animal.make_sound()