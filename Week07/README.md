# Week 6 Section (CS notation) Welcome to PYTHON! 🐍

These are the problems you should be able to solve at the end of Week06! If you have problems at any point reach out to CS50 staff, 
or me directly at mikeldavies@college.harvard.edu


## **LAB PROBLEM**

Go to 'https://cs50.harvard.edu/college/2022/fall/labs/6/'

Then download the distribution code by typing the following into your terminal: `wget https://cdn.cs50.net/2022/fall/labs/6/world-cup.zip`


# Example Problems
The problems are listed in order of difficulty!


## **Problem 1**

Write a program  `reverse.py` that reverses a string the user gives.

```
Usage:
[directory] $ python reverse.py
Text: This is CS50!
!05SC si sihT
```


## **Problem 2**

Write a program `addition.py` that takes two integers as command line arguments and adds them.

```
Usage:
[directory] $ python addition.py 2 8
2 + 8 = 10
```


## **Problem 3**

Write a function `factorial` within a program `factorial.py` that computes the factorial of a given command line input integer.

```
Usage:
[directory] $ python factorial.py 12
479001600
```

Distribution Code:
```
import sys

def factorial(n):
  #TODO
  return n

if len(sys.argv) != 2:
  sys.exit("Usage: python factorial.py x")

number = int(sys.argv[1])

print(factorial(number))
```


## **Problem 4**

Write a program `copy.py` that copies the contents of one file to another.

Snag Input.txt and Output.txt from the repository to try!

```
Usage:
[directory] $ python copy.py input.txt output.txt
```


## **Problem 5**

Write a program `bank.py` that prompts the user for a greeting. If the greeting starts with “hello”, output `$0`. If the greeting starts with an “h” (but not “hello”), output `$20`. Otherwise, output `$100`. Ignore any leading whitespace in the user’s greeting, and treat the user’s greeting case-insensitively.

Get the distribution code from `wget https://cdn.cs50.net/2022/fall/labs/6/bank.zip` and get started!

```
Usage:
[directory] $ python bank.py
Greeting: Hello
$0
[directory] $ python bank.py
Greeting: hey
$20
[directory] $ python bank.py
Greeting: What's up?
$100
```

## **Problem 6**

Write a program `figlet.py` that uses a 1990s style ASCII art to create large text from a given input. The program should require a user for either 0 or 2 command line arguments. When the user would like to output text in a specific font, in which case the first of the two command line arguments should be -f or --font, and the second of the two should be the name of the font.

Get the distribution code from `wget https://cdn.cs50.net/2022/fall/labs/6/figlet.zip` and get started!


```
Usage:
[directory] $ python figlet.py
Input: like this
 _ _ _          _   _     _     
| (_) | _____  | |_| |__ (_)___ 
| | | |/ / _ \ | __| '_ \| / __|
| | |   <  __/ | |_| | | | \__ \
|_|_|_|\_\___|  \__|_| |_|_|___/
[directory] $ python figlet.py -f slant
Input: Moo
    __  ___          
   /  |/  /___  ____ 
  / /|_/ / __ \/ __ \
 / /  / / /_/ / /_/ /
/_/  /_/\____/\____/ 
```


## **Problem 7**

Write a program `taqueria.py` that enables a user to place an order, prompting them for items, one per line, until the user inputs control-d (which is a common way of ending one’s input to a program). After each inputted item, display the total cost of all items inputted thus far, prefixed with a dollar sign ($) and formatted to two decimal places. Treat the user’s input case insensitively. Ignore any input that isn’t an item. Assume that every item on the menu will be titlecased.

Get the distribution code from `wget https://cdn.cs50.net/2022/fall/labs/6/taqueria.zip` and get started!

```
Usage:
[directory] $ python taqueria.py
Item: Super Burrito
Total: $8.50
Item: Quesadilla
Item: Bowl
Total: $17.00
```


## **Problem 8**

Write a program `phonebook.py` that reads from a CSV file (provided as a command-line argument) and prints out the data on each person in the phone book. The file contains columns `name` and `number`, representing each person's name and phone number, respectively.

Grab phonebook.csv from the files in Week07 to try!

```
Usage:
[directory] $ python phonebook.py
Emma's phone number is 617-555-0100
Rodrigo's phone number is 617-555-0101
Brian's phone number is 617-555-0102
David's phone number is 617-555-0103
```
