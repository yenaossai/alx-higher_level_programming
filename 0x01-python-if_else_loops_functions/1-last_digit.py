#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
last_digit = abs(number) % 10

print("Last digit of", number, "is", last_digit, end='')

    if last_num > 5:
        print(f"Last digit of {number} is {last_num} and is greater than 5")
    elif last_num == 0:
        print(f"Last digit of {number} is {last_num} and is 0")
    else:
        print(f"Last digit of {number} is {last_num} and is less than 6 and not 0")
