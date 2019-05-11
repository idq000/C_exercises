1. Switch case has more stuff to type.  If-then case seems more compact.  I like the if-then case in this case better.

2. The break is on the outside of the if-statement because you want to break out of the switch whether the if-statement is triggered or not.
Otherwise, if you put the break inside the if-statement, then the program will fall through to the default case when case 'Y' is run and i <= 2, which isn't what you want.
It also looks like the default case isn't triggered too when this happens.