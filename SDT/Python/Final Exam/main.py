while True:
    print("*** Restaurent Management System ***")
    print("Select an options")
    print("1. Admin")
    print("2. Customer")
    print("3. Exit")
    choice = int(input("Enter your choice: "))

    # for admin panel
    if choice == 1:
        from admin import Admin
        admin = Admin()
        admin_name = input("Enter admin name: ")
        print(f"Welcome Admin {admin_name}")
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
        from customer import Customer
        customer = Customer()
        customer_name = input("Enter customer name: ")
        print(f"Welcome Customer {customer_name}")
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
    elif choice == 3:
        break

    else:
        print("Invalid choice")
        continue