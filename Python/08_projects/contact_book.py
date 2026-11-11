contacts = {}

while True:
    print("\n1. Add contact\n2. View contacts\n3. Exit")
    choice = input("Choose: ")

    if choice == "1":
        name = input("Name: ")
        phone = input("Phone: ")
        contacts[name] = phone
    elif choice == "2":
        print(contacts)
    elif choice == "3":
        break
