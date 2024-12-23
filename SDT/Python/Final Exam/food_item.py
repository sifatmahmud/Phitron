class Food_item:
    def __init__(self, item_name, item_price, item_quantity):
        self.name = item_name
        self.price = item_price
        self.quantity = item_quantity
    
    def __repr__(self):
        return self.name