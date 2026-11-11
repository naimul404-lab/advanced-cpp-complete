students = []

while True:
    print("\n1. Add student\n2. View students\n3. Exit")
    choice = input("Choose: ")

    if choice == "1":
        name = input("Name: ")
        grade = input("Grade: ")
        students.append({"name": name, "grade": grade})
    elif choice == "2":
        print(students)
    elif choice == "3":
        break
