from restaurant import Restaurant

rest = Restaurant()

class Admin:
    
    def add_item(self, name, price, quantity):
        rest.add_item(name, price, quantity)
        print(f'{name} added to menu')
    
    def remove_item(self, name):
        rest.remove_item(name)
        print(f'{name} removed from menu')
    
    def view_customers(self):
        Restaurant.view_customers()
    
    def view_menu(self):
        Restaurant.show_menu()
    
    def add_customer(self, name, email, address):
        Restaurant.add_customer(name, email, address)
        print(f'{name} added to customers')
    
    def remove_customer(self, name):  
        Restaurant.remove_customer(name)
        print(f'{name} removed from customers')
    
    def update_price(self, name, price):
        for food in Restaurant.food_items:
            if food.name == name:
                food.price = price
                print(f'{name} price updated to {price}')
                break
        else:
            print('Food item not found')
    