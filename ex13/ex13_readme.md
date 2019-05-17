1.  You can break the program by including more than 255 elements excluding the intial argument, which is the executable name.
	This is because of the maximum value an integer var type can hold is 255.

2.  If i is initialized to 0, then the original argument passed to the executable (executable name itself) is shown.
	You don't have to adjust argc since argc is zero-based.  The original for loop skips the first argument.
	
3.  If num_states has a higher value, then it won't break but will display whatever is in memory after the end of the array.

Extra Credit

1.  You can put lots of code inside a for loop.  If you're asking about the arguments used to configure the for loop, I would presume binary operations are permitted.

2.	In the C and C++ programming languages, the comma operator is a binary operator that evaluates its first operand and discards the result, and then evaluates the second operand and returns this value (and type).
	The most common use of a comma is to allow multiple assignment statements without using a block statement, primarily in the initialization and the increment expressions of a for loop.

3.  