





# ------------------- Food_item ---------------------
class Food_item:
    def __init__(self, item_name, item_price, item_quantity):
        self.name = item_name
        self.price = item_price
        self.quantity = item_quantity
    
    def __repr__(self):
        return self.name

# ------------------- Restaurent ---------------------
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

    @classmethod
    def view_customers(self):
        print('***** Customers *****')
        for customer in self.customers:
            print(f'{customer.name}\t{customer.email}\t{customer.address}')
    
    @classmethod
    def add_item(self, name, price, quantity):
        item = Food_item(name, price, quantity)
        self.food_items.append(item)
    
    @classmethod
    def remove_item(self, name):
        result = False
        for food in self.food_items:
            if food.name == name:
                self.food_items.remove(food)
                result = True
                break
        
        if result == True:
            print(f'{name} removed from menu')
        else:
            print(f'{name} not found in menu')
        
    @classmethod
    def add_customer(self, name, email, address):
        customer = Customer(name, email, address)
        self.customers.append(customer)
    
    @classmethod
    def remove_customer(self, name):
        result = False
        for c in self.customers:
            if c.name == name:
                self.customers.remove(c)
                result = True
                break
        if not result:
            print("Customer Not Fount")
        else : 
            print("Customer Removed")


# ------------------- Customer ---------------------
class Customer:
    def __init__(self, name, email, address):
        self.name = name
        self.email = email
        self.address = address
        self.balance = 0
        self.cart = []

    def place_order(self, fname, quantity):
        order_placed = False
        for food in Restaurent.food_items:
            if food.name == fname and  quantity <= food.quantity:
                if (quantity * food.price) <= self.balance:
                    ordered_food = Food_item(fname, food.price, quantity)
                    self.cart.append(ordered_food)
                    order_placed = True
                    food.quantity -= quantity
                    self.balance -= quantity * food.price
                    print(f"{quantity} {fname} added to cart")
                else:
                    print("Insufficient balance")
                    break
        if order_placed == False:
            print("Order not placed")

    def view_balance(self):
        print(f"Your balance is {self.balance}")
    
    def view_past_orders(self):
        print('***** Past Orders *****')
        for food in self.cart:
            print(f'Name : {food.name}\tPrice : {food.price}\tQuantity : {food.quantity}\tTotal : Tk {food.price * food.quantity}')

    def add_balance(self, amount):
        self.balance += amount
        print(f"Added {amount} to your balance")
    
    def view_restaurent_menu(self):
        Restaurent.show_menu()


# ------------------- Admin ---------------------
class Admin:
    
    def add_item(self, name, price, quantity):
        Restaurent.add_item(name, price, quantity)
        print(f'{name} added to menu')
    
    def remove_item(self, name):
        Restaurent.remove_item(name)
        print(f'{name} removed from menu')
    
    def view_customers(self):
        Restaurent.view_customers()
    
    def view_menu(self):
        Restaurent.show_menu()
    
    def add_customer(self, name, email, address):
        Restaurent.add_customer(name, email, address)
        print(f'{name} added to customers')
    
    def remove_customer(self, name):  
        Restaurent.remove_customer(name)
    
    def update_price(self, name, price):
        for food in Restaurent.food_items:
            if food.name == name:
                food.price = price
                print(f'{name} price updated to {price}')
                break
        else:
            print('Food item not found')


# ------------------- Main ---------------------

while True:
    print("*** Restaurent Management System ***")
    print("Select an options")
    print("1. Admin")
    print("2. Customer")
    print("3. Exit")
    choice = int(input("Enter your choice: "))

    # for admin panel
    if choice == 1:
        admin = Admin()
        admin_name = input("Enter admin name: ")
        print(f"Welcome Admin {admin_name}")
        while True:
            print("*** Admin Menu ***")
            print("1. Create Customer Account")
            print("2. Remove Customer Account")
            print("3. View Customers")
            print("4. Manage Restaurent Menu")
            print("5. Exit")
            admin_choice = int(input("Enter your choice: "))
            if admin_choice == 1:
                name = input("Enter name: ")
                email = input("Enter email: ")
                address = input("Enter address: ")
                admin.add_customer(name, email, address)
            elif admin_choice == 2:
                name = input("Enter name: ")
                admin.remove_customer(name)
            elif admin_choice == 3:
                admin.view_customers()
            elif admin_choice == 4:
                while True:
                    print("1. Add Food Item")
                    print("2. Remove Food Item")
                    print("3. Update Food Item Price")
                    print("4. View Menu")
                    print("5. Exit")
                    menu_choice = int(input("Enter your choice: "))
                    if menu_choice == 1:
                        name = input("Enter name: ")
                        price = int(input("Enter price: "))
                        quantity = int(input("Enter quantity: "))
                        admin.add_item(name, price, quantity)
                    elif menu_choice == 2:
                        name = input("Enter name: ")
                        admin.remove_item(name)
                    elif menu_choice == 3:
                        name = input("Enter name: ")
                        price = int(input("Enter price: "))
                        admin.update_price(name, price)
                    elif menu_choice == 4:
                        admin.view_menu()
                    elif menu_choice == 5:
                        break
            elif admin_choice == 5:
                break

    # for customer panel
    elif choice == 2:
        customer = Customer('name', 'email', 'address')
        customer_name = input("Enter customer name: ")
        customer_ase = False
        for c in Restaurent.customers:
            if c.name == customer_name:
                customer_ase = True
                break
            
        if customer_ase == True:
            print(f"Welcome Customer {customer_name}")
            while True:
                print("*** Customer Menu ***")
                print("1. View Restaurent Menu")
                print("2. Place Order")
                print("3. View Balance")
                print("4. View Past Orders")
                print("5. Add Balance")
                print("6. Exit")
                customer_choice = int(input("Enter your choice: "))
                if customer_choice == 1:
                    customer.view_restaurent_menu()
                elif customer_choice == 2:
                    name = input("Enter food name: ")
                    quantity = int(input("Enter quantity: "))
                    customer.place_order(name, quantity)
                elif customer_choice == 3:
                    customer.view_balance()
                elif customer_choice == 4:
                    customer.view_past_orders()
                elif customer_choice == 5:
                    amount = int(input("Enter amount: "))
                    customer.add_balance(amount)
                elif customer_choice == 6:
                    break
        else:
            print("Customer not found")

    elif choice == 3:
        break

    else:
        print("Invalid choice")
        continue



