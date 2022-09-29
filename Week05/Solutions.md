# Week 4 Section Problem Answers

## **Problem 1**

Write a program  `concatenate.c` that takes that takes two strings as input, and then prints out one concatatenated string!

```
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *concatenate(char *word1, char *word2);

int main(void)
{
    char *word1 = get_string("string1: ");
    char *word2 = get_string("string2: ");

    char *word3 = concatenate(word1, word2);

    printf("%s\n", word3);
    free(word3);
}

char *concatenate(char *word1, char *word2)
{
  int len1 = strlen(word1);
  int len2 = strlen(word2);

  char *word3 = malloc(len1 + len2 + 1);

  for (int i = 0; i < len1; i++)
  {
    word3[i] = word1[i];
  }

  for (int i = 0; i < len2; i++)
  {
    word3[len1 + i] = word2[i];
  }

  word3[len1 + len2] = '\0';

  return word3;
}
```


## **Problem 2**

Write a recursive program `copy.c` that takes an input and output file as command line arguments. It should write the contents of the input to the output.

Use the files in the repository titled `infile.txt` and `outfiled.txt` to test the program! Note that `outfile.txt` is initially empty!

```
#include <stdbool.h> //why??
#include <stdio.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Usage: ./copy infile.txt outfile.txt\n");
        return 1;
    }

    FILE *infile = fopen(argv[1], "r");
    FILE *outfile = fopen(argv[2], "w");

    while (true)
    {
      char c = fgetc(infile);
      if (c == EOF)
      {
        break;
      }
      fputc(c, outfile);
    }
    fclose(infile);
    fclose(outfile);
}
```


## **Problem 3**

Write a program `bottomup.c` that flips the orientation of a .bmp file.

```
// Change from bottom up to top down
bi.biHeight = -bi.biHeight;
```
I'll let you think about where to put this!

## **Problem 4**

Write a program `license.c` that accurately prints out license plate numbers!

Add:
```
#include <stdlib.h>
#include <string.h>
```

Use this to replace something!
```
// Allocate memory each string
plates[idx] = malloc(7);
strcpy(plates[idx], buffer);
```

Free the memory at the end!
```
// Close file
fclose(infile);

// Free memory
for (int i = 0; i < 8; i++)
{
  free(plates[i]);
}
```

## **Problem 5**

Write a program `gif.c` that detects if a file is a gif or not! Note that the first six characters of a GIF 89a file are the characters `G`, `I`, `F`, `8`, `9`, `a`.

Use the files in the repository titled `turtle.gif` and `turtle.html` to test the program!

```
#include <stdbool.h>
#include <stdio.h>

const char signature[6] = {'G', 'I', 'F', '8', '9', 'a'};

bool is_gif(FILE *f);

int main(int argc, char *argv[])
{
    // TODO Check usage
    if (argc != 2)
    {
        printf("Usage: ./gif file\n");
        return 1;
    }

    // TODO Open file
    FILE *potential = fopen(argv[1], "r");
    if (!potential)
    {
        printf("CANNOT READ FILE\n");
        return 1;
    }

    // TODO Check for GIF signature
    if (is_gif(potential))
    {
        printf("It's a GIF!\n");
    }
    else
    {
        printf("It's not a GIF.\n");
    }

    // TODO Close file
    fclose(potential);
}

bool is_gif(FILE *f)
{
    // Read bytes in to buffer
    unsigned char buffer[6];
    int bytes = fread(buffer, 1, 6, f);

    // TODO Check number of bytes read
    if (bytes != 6)
    {
        return false;
    }

    // TODO Check each byte
    for (int i = 0; i < 6; i++)
    {
        if (buffer[i] != signature[i])
        {
            return false;
        }
    }

    return true;
}
```

## **LAB PROBLEM**

Lab solutions are in their respective readme files!
