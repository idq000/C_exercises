I'd like to see a Makefile per folder with the additional flags as specified in the comments in ex2. Although the default make target is sufficient at this point, I want you to get used to custom makefiles for a couple reasons:
    * -Wall and other C flags help enforce good C practices, and go a long way in catching bugs before you run your program.
    * You can actually run `make clean` to remove binaries.
    * Helps other people compile with the same set of flags that you are. And in more complicated projects, make won't be able to infer your project structure anyway. Better get used to writing them or stealing them from someone. Let's be honest, most people learn how to "write" makefiles by stealing them from some big project or someone else. That's how I did it, anyway. 

Please put your responses to the posed questions in a separate text file. 
