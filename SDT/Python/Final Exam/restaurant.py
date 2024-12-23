from customer import Customer

from food_item import Food_item

class Restaurent:
    food_items = []
    customers = []

    def __init__(self, res_name):
        self.name = res_name
    
    @classmethod
    def show_menu(self):
        print('***** Foodlist *****')
        for food in self.food_items:
            print(f'Name : {food.name}\tPrice : {food.price}\tQuantity : {food.quantity}')


    def view_customers(self):
        print('***** Customers *****')
        for customer in self.customers:
            print(f'{customer.name}\t{customer.email}\t{customer.address}')
    
    def add_item(self, name, price, quantity):
        item = Food_item(name, price, quantity)
        Restaurent.food_items.append(item)
    
    def remove_item(self, name):
        Restaurent.food_items.remove(name)
    
    @classmethod
    def add_customer(self, name, email, address):
        customer = Customer(name, email, address)
        Restaurent.customers.append(customer)
    
    @classmethod
    def remove_customer(self, name):
        Restaurent.customers.remove(name)
