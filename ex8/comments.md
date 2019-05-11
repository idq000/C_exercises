As usual, makefile.

Although valid, decrementing argc is a bit odd. I would make a new variable (e.g. `numArgs`) instead, since `argc` is usually left as the total number of program arguments, _including the program executable name_. Rather, if you wanted to dump all arguments onto the command line, you would see something like this:

```C
#include <stdio.h> 

int main(int argc, char *argv[])
{
    // note our loop is starting at 1 to avoid the program executable name
    for (int i = 1; i < argc; i++)
    {
        printf("%s ", argv[i]);
    }
}
```
