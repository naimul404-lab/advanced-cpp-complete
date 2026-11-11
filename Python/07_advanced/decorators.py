def decor(func):
    def wrapper():
        print("Before call")
        func()
        print("After call")
    return wrapper

@decor
def hello():
    print("Hello!")

hello()
