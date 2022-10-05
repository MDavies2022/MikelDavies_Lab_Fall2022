# Week 5 Section (CS notation)

These are the problems you should be able to solve at the end of Week06! If you have problems at any point reach out to CS50 staff, 
or me directly at mikeldavies@college.harvard.edu


## **LAB PROBLEM**

Go to 'https://cs50.harvard.edu/college/2022/fall/labs/5/'

Then download the distribution code by typing the following into your terminal: `wget https://cdn.cs50.net/2022/fall/labs/5/inheritance.zip`


# Example Problems
The problems are listed in order of difficulty!


## **Problem 1**

Write a program  `linkedList.c` that adds an integer to the beginning of a linked list! To end, use ctrl-C or ctrl-D.

```
Distribution Code:

#include <cs50.h>
#include <stdio.h>

typedef struct node
{
    int number;
    struct node *next;
}
node;

int main(void)
{
    node *list = NULL;

    while (true)
    {
        int x = get_int("Number: ");
        if (x == INT_MAX)
        {
            printf("\n");
            break;
        }

        // TODO: Allocate a new node.
				// TODO: Add new node to head of linked list.

    }

	// TODO: Print all nodes.
	// TODO: Free all nodes.

}
```

```
Usage:
[directory] $ ./linkedList 
Number: 1
1
Number: 5
5 1 
Number: 9
9 5 1
ctrl-C
```


## **Problem 2**

Write a program `LL2.c` that takes an input number and adds it to the linked list at the end rather than the beginning.

```
Usage:
[directory] $ ./LL2.c
Number: 1
1
Number: 3
1 3
Number: 15
1 3 15
ctrl-C
```


## **Problem 3**

Write a program `LL3.c` that adds numbers to a linked list in ascending order!

```
Usage:
[directory] $ ./LL3.c
Number: 3
3
Number: 1
1 3
Number: 0
0 1 3
Number: 12
0 1 3 12
ctrl-C
```


## **Problem 4**

Write a program `trie.c` that takes a given trie and searches through it to see if a given dog name is included in the top 150 names. We need to implement the `check` function.

```
wget https://cdn.cs50.net/2022/fall/labs/5/trie.zip
```

