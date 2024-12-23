from restaurent import Restaurent
from food_item import Food_item

class Customer:
    def __init__(self, name, email, address):
        self.name = name
        self.email = email
        self.address = address
        self.balance = 0
        self.cart = []

    def place_order(self, name, quantity):
        order_placed = False
        for food in Restaurent.food_items:
            if food.name == name and food.quantity <= quantity:
                if (quantity * food.price) <= self.balance:
                    ordered_food = Food_item(name, quantity*food.price, quantity)
                    self.cart.append(ordered_food)
                    order_placed = True
                    food.quantity -= quantity
                    self.balance -= quantity * food.price
                    print(f"{quantity} {name} added to cart")
                else:
                    print("Insufficient balance")
                    break
            else:
                print("Food item not available or quantity not available")
        if not order_placed:
            print("Order not placed")



    def view_balance(self):
        print(f"Your balance is {self.balance}")
    
    def view_past_orders(self):
        print('***** Past Orders *****')
        for food in self.cart:
            print(f'Name : {food.name}\tPrice : {food.price}\tQuantity : {food.quantity}')

    def add_balance(self, amount):
        self.balance += amount
        print(f"Added {amount} to your balance")
    
    


