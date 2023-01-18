def hello(to="world"):
    print("hello,", to)

hello()
# Ask user for their name
name = input("what's your name? ").strip().title()


hello(name)
