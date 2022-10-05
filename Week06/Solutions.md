# Solutions for this week's lab problems

### Problem 1: Linked List 1

Building a linked list that adds numbers to the head of the linked list.

```
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
        node *n = malloc(sizeof(node));
        n->number = x;
        n->next = NULL;
        
				// TODO: Add new node to head of linked list.
        n->next = list;
        list = n;
    }

	// TODO: Print all nodes.
  for (node *ptr = list; ptr != NULL; ptr = ptr->next)
  {
      printf("%i\n", ptr->number);
  }
  
	// TODO: Free all nodes.
  node *ptr = list;
  while (ptr != NULL)
  {
      node *tmp = ptr;
      ptr = ptr->next;
      free(tmp);
  }

}
```

### Problem 2: Linked List 2

Building a linked list that adds numbers to the tail of the linked list.

```
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
        node *n = malloc(sizeof(node));
        n->number = x;
        n->next = NULL;
        
				// TODO: Add new node to tail of linked list.
        if (list == NULL)
        {
            list = n;
        }
        else
        {
            node *ptr = list;
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = n;
        }
    }

	// TODO: Print all nodes.
  for (node *ptr = list; ptr != NULL; ptr = ptr->next)
  {
      printf("%i\n", ptr->number);
  }
  
	// TODO: Free all nodes.
  node *ptr = list;
  while (ptr != NULL)
  {
      node *tmp = ptr;
      ptr = ptr->next;
      free(tmp);
  }

}
```

### Problem 3: Linked List 3

Building a linked list that adds numbers to the linked list by ascending order

```
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
        node *n = malloc(sizeof(node));
        n->number = x;
        n->next = NULL;
        
				// TODO: Add new node to head of linked list.
        if (list == NULL || x < list->number)
        {
            n->next = list;
            list = n;
        }
else
{
    node *ptr = list;
    while (ptr->next != NULL && x > ptr->next->number)
    {
        ptr = ptr->next;
    }
    n->next = ptr->next;
    ptr->next = n;
}
    }

	// TODO: Print all nodes.
  for (node *ptr = list; ptr != NULL; ptr = ptr->next)
  {
      printf("%i\n", ptr->number);
  }
  
	// TODO: Free all nodes.
  node *ptr = list;
  while (ptr != NULL)
  {
      node *tmp = ptr;
      ptr = ptr->next;
      free(tmp);
  }

}
```

### Problem 4: Trie `check` function

Implement the `check` function to search a trie.

```
Solution Incoming
```
