number = 42
count = 1

while True:
    num = int(input("Guess the number: "))
    if num < number:
        print("Too low, try again!")
    if num > number:
        print("Too high, try again!")
    if  number == num:
        print("Good job, you guessed in " + str(count) + " guesses")
        break
    count += 1
