# Calculator
while True:
    print("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Exit")
    choice = input("Choose an operation: ")

    if choice == "5":
        break

    a = float(input("Enter first number: "))
    b = float(input("Enter second number: "))

    if choice == "1":
        print(a + b)
    elif choice == "2":
        print(a - b)
    elif choice == "3":
        print(a * b)
    elif choice == "4":
        if b == 0:
            print("Cannot divide by zero")
        else:
            print(a / b)
