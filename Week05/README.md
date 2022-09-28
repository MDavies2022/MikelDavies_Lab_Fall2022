# Week 4 Section

These are the problems you should be able to solve at the end of Week05! If you have problems at any point reach out to CS50 staff, 
or me directly at mikeldavies@college.harvard.edu

The problems are listed in order of difficulty!


## **Problem 1**

Write a program  `concatenate.c` that takes that takes two strings as input, and then prints out one concatatenated string!

```
Distribution Code:

#include <cs50.h>
#include <stdio.h>

char *concatenate(char *word1, char *word2);

int main(void)
{
    char *word1 = get_string("string1: ");
    char *word2 = get_string("string2: ");
    
    printf("%s\n", concatenate(word1, word2));
    free(s3);
}

string concatenate(string word);
{
  //TODO
}
```

```
Usage:
[directory] $ ./concatenate 
string1: Hello
string2: World!
Combined: Hello World!
```


## **Problem 2**

Write a recursive program `copy.c` that takes an input and output file as command line arguments. It should write the contents of the input to the output.

```
Distribution Code:

#include <stdbool.h> //why??
#include <stdio.h>

int main(int argc, char *argv[])
{
    //TODO
    while (true)
    {
      char c = fgetc(infile);
      //TODO
      fputc(c, outfile);
    }
    //TODO
}
```
```
Usage:
[directory] $ ./copy input.txt output.txt
[directory] $
```


## **Problem 3**

Write a program `bottomup.c` that ...

```
wget https://cdn.cs50.net/2022/fall/labs/4/bottomup.zip
```


## **Problem 4**

Write a program `license.c` that ...

```
wget https://cdn.cs50.net/2022/fall/labs/4/license.zip
```


## **Problem 5**

Write a program `gif.c` that detects if a file is a gif or not! Note that the first six characters of a GIF 89a file are the characters `G`, `I`, `F`, `8`, `9`, `a`.

```
Distribution Code:

// Detect if a file is a GIF

#include <stdbool.h>
#include <stdio.h>

const char signature[6] = {'G', 'I', 'F', '8', '9', 'a'};

bool is_gif(FILE *f);

int main(int argc, char *argv[])
{
    // TODO Check usage

    // TODO Open file

    // TODO Check for GIF signature

    // TODO Close file
}

bool is_gif(FILE *f)
{
    // Read bytes in to buffer
    unsigned char buffer[6];
    int bytes = fread(buffer, 1, 6, f);

    // TODO Check number of bytes read

    // TODO Check each byte

    return;
}
```

## **LAB PROBLEM**

Go to 'https://cs50.harvard.edu/college/2022/fall/labs/4/'

Then download the distribution code by typing the following into your terminal: `wget https://cdn.cs50.net/2022/fall/labs/4/smiley.zip`

Then download the distribution code by typing the following into your terminal: `wget https://cdn.cs50.net/2022/fall/labs/4/volume.zip`
