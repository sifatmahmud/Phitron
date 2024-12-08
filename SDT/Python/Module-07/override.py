class Person:
    def __init__(self, name, age, height, weight):
        self.name = name
        self.age = age
        self.height = height
        self.weight = weight
    
    def eat(self):
        print('vat, mangsho, polaw, korma')
    
    def exercise(self):
        raise NotImplemented


class Cricketer(Person):
    def __init__(self, name, age, height, weight, team):
        self.team = team
        super().__init__(name, age, height, weight)
    
    # override
    def eat(self):
        print('vegatables')
    
    def exercise(self):
        print('gym e poisha diya hudai gham jorai')
    
    # overload
    def __add__(self, other):
        return self.age + other.age
    
    def __mul__(self, other):
        return self.weight * other.weight
    
    def __len__(self):
        return self.height

    def __gt__(self, other):
        return self.age > other.age

sakib = Cricketer('sakib', 38, 68, 91, 'BD')
mushi = Cricketer('mushi', 28, 65, 78, 'BD')
# sakib.eat()
# sakib.exercise()


# plus sign overload
print(45+68)
print('sakib' + 'rakib')
print([12,85] + [5, 6, 7])

print(sakib + mushi)

print(sakib * mushi)
print(len(sakib))
print(sakib > mushi)