1.  I didn't get a warning.  I tried replacing the variable numbers with 'a', 'b', 'c', and 'd'.  The compiler did not warn even through I set CFLAGS with -Wall.

2.  I also didn't get a warning.  Used the same CFLAGS but no warning.

3.  I guess you could print it out with loops.

4.  Assuming we are talking about ASCII characters, then each character is one byte.  If an integer is four bytes, that means you can "fit" four ASCII characters in one integer variable.
	If you can get the pointer to the first byte of the integer variable, then you can store each ASCII character into the integer.  I'm not sure if you can typecast from string to int.
	I would assume the compiler would warn you.
	
5.	Will upload later.

6.	The code continues to work when name is converted to a string literal.