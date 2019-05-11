Typically, you wouldn't call make recursively unless you're invoking make on a subdirectory.

In this case, I would just do someting like the following

```
CFLAGS=-std=c99 -Wall -Wextra -pedantic
all: ex_2
clean:
	rm -f ex_2
```
The primary difference here is removal of the `make ex_2` line and I moved the `ex_2` line to the right of the all target. Wait, what's a target? Makefile targets are the things that have an : after it. So for example, all: and clean: are targets in this Makefile. Well, technically, they're phony targets, but that distinction doesn't really matter. Regardless, Makefile targets are the things you invoke make on. So when you just call `make` in a directly, make looks for the all or default target and then executes all commands in that section. 

What's powerful about make is that you can specify that a target depends on other targets, which is any string after a target declaration. So in our case, the all target depends on the ex_2 target. So when make is invoked, it looks at the all, and finds that it needs to execute the ex_2 target first. So it does the equivalent of `make ex_2`, which then it natively knows how to compile using the CFLAGS and other flags variables. This is a better approach than invoking make recursively for compiling single files.

Note the additional flags. I like these flags because they provide additional warnings as well as specify the exact C standard that we are targeting. Different versions of gcc target different C standards, so it's just easier to specify which one. The `-pedantic` flag just disables compiler specific extensions, like any __attribute__ macro that gcc provides. There's usually no need to use them, so let's just stick with regular C for now.

If you recompile with this makefile, you'll see a couple additional warnings. This is straightforward to fix. In C, if you have unused parameters, the best practice is the declare the function to take in void. Example:


```C
// foo takes in as many parameters as you want, it just ignores it
int foo()
{
}

// foo takes no parameters
int foo(void)
{
    return 1;
}
``` 
