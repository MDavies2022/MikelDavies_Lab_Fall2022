# Week 4 Section

These are the problems you should be able to solve at the end of Week04! If you have problems at any point reach out to CS50 staff, 
or me directly at mikeldavies@college.harvard.edu

The problems are listed in order of difficulty!


## **Problem 1**

Write a program  `student.c` that takes that takes one integer and prompts the user for a student's information, and then prints it out.

```
Usage:
[directory] $ ./student 
number of students: 2
name: George
birthday: 09/21/1999
gpa: 4
name: Helen
birthday: 02/29/2002
gpa: 3.8
George's birthday is 09/21/1999 and they have a gpa = 4
Helen's birthday is 02/29/2002 and they have a gpa = 3.8
```

## **Problem 2**

Write a recursive program `factorial.c` that takes an integer n and computes its factorial. (The factorial of 5, for example, is 5 * 4 * 3 * 2 * 1 = 120).

```
Usage:
[directory] $ ./factorial
number: 5
factorial: 120
```


## **Problem 3**

Write a program `fibonacci.c` that computes the nth Fibonacci number. The 0th Fibonacci number is 0, the 1st Fibonacci number is 1, and every subsequent Fibonacci number is sum of the two preceding Fibonacci numbers.

```
Usage:
[directory] $ ./fibonacci 5
The n=5 fibonacci number is 5
```


## **Problem 4**

Write a program `bubble.c` that sorts an array of integers using bubble sort.

Distribution Code:

```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input
    int n = get_int("How many values? ");
    int values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_int("Value %i: ", i);
    }

    // TODO: sort numbers

    // Print sorted values
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }
}
```

## **Problem 5**

Write a program `selection.c` that sorts an array of integers using selection sort.

Distribution Code:
```
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get input
    int n = get_int("How many values? ");
    int values[n];
    for (int i = 0; i < n; i++)
    {
        values[i] = get_int("Value %i: ", i);
    }

    // TODO: sort numbers

    // Print sorted values
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", values[i]);
    }
}
```

## **Problem 6**

Write a program `temps.c` that sorts the average high temperature for cities in the US.

```
Usage:
temps/ $ ./temps

Average July Temperatures by City

Phoenix: 107
Las Vegas: 105
Austin: 97
Miami: 97
Denver: 90
Chicago: 85
New York: 85
Boston: 82
Los Angeles: 82
San Francisco: 66
temps/ $
```

Download the distribution code by typing the following into your terminal: `wget https://cdn.cs50.net/2022/fall/labs/3/temps.zip`

## **Problem 7**

Write a program `max.c` that finds the max value for an inputted array.

```
max/ $ ./max
Number of elements: 3
Element 0: 2
Element 1: 10
Element 2: -1
The max value is 10.
```

Download the distribution code by typing the following into your terminal: `wget https://cdn.cs50.net/2022/fall/labs/3/max.zip`
## **LAB PROBLEM**

Go to 'https://cs50.harvard.edu/college/2022/fall/labs/3/'

Then download the distribution code by typing the following into your terminal: `wget https://cdn.cs50.net/2022/fall/labs/3/sort.zip`
