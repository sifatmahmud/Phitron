class Calculator:
    brand = 'Casio MS990'
    def add(self, num1, num2):
        result = num1 + num2
        return result

    def deduct(self, num1, num2):
        result = num1 - num2
        return result
    
    def multiply(self, num1, num2):
        result = num1 * num2
        return result
    
    def divide(self, num1, num2):
        result = num1 / num2
        return result
    


my_calculator = Calculator()

print(my_calculator.add(10, 20))
print(my_calculator.deduct(10, 20))
print(my_calculator.multiply(10, 20))
print(my_calculator.divide(10, 20))
