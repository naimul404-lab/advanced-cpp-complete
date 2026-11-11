expenses = []

while True:
    print("\n1. Add expense\n2. View total\n3. Exit")
    choice = input("Choose: ")

    if choice == "1":
        amount = float(input("Amount: "))
        expenses.append(amount)
    elif choice == "2":
        print(sum(expenses))
    elif choice == "3":
        break
