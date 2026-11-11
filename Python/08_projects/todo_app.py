tasks = []

while True:
    print("\n1. View tasks\n2. Add task\n3. Delete task\n4. Exit")
    choice = input("Choose: ")

    if choice == "1":
        for i, task in enumerate(tasks, 1):
            print(f"{i}. {task}")
    elif choice == "2":
        task = input("Enter task: ")
        tasks.append(task)
    elif choice == "3":
        index = int(input("Enter task number to delete: ")) - 1
        if 0 <= index < len(tasks):
            del tasks[index]
    elif choice == "4":
        break
