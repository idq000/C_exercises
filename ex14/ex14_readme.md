1.  The can_print_it function could be removed and still maintain readability of the code.
	
2.	I changed print_letters to only rely on string length.

3.ISALPHA(3)               BSD Library Functions Manual               ISALPHA(3)

NAME
     isalpha -- alphabetic character test

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <ctype.h>

     int
     isalpha(int c);

DESCRIPTION
     The isalpha() function tests for any character for which isupper(3) or
     islower(3) is true.  The value of the argument must be representable as
     an unsigned char or the value of EOF.

     In the ASCII character set, this includes the following characters (pre-
     ceded by their numeric values, in octal):

     101 ``A''     102 ``B''     103 ``C''     104 ``D''     105 ``E''
     106 ``F''     107 ``G''     110 ``H''     111 ``I''     112 ``J''
     113 ``K''     114 ``L''     115 ``M''     116 ``N''     117 ``O''
     120 ``P''     121 ``Q''     122 ``R''     123 ``S''     124 ``T''
     125 ``U''     126 ``V''     127 ``W''     130 ``X''     131 ``Y''
     132 ``Z''     141 ``a''     142 ``b''     143 ``c''     144 ``d''
     145 ``e''     146 ``f''     147 ``g''     150 ``h''     151 ``i''
     152 ``j''     153 ``k''     154 ``l''     155 ``m''     156 ``n''
     157 ``o''     160 ``p''     161 ``q''     162 ``r''     163 ``s''
     164 ``t''     165 ``u''     166 ``v''     167 ``w''     170 ``x''
     171 ``y''     172 ``z''

RETURN VALUES
     The isalpha() function returns zero if the character tests false and
     returns non-zero if the character tests true.

COMPATIBILITY
     The 4.4BSD extension of accepting arguments outside of the range of the
     unsigned char type in locales with large character sets is considered
     obsolete and may not be supported in future releases.  The iswalpha()
     function should be used instead.

SEE ALSO
     ctype(3), isalnum_l(3), islower(3), isupper(3), iswalpha(3), ascii(7)

STANDARDS
     The isalpha() function conforms to ISO/IEC 9899:1990 (``ISO C90'').

BSD                              July 17, 2005                             BSD


ISBLANK(3)               BSD Library Functions Manual               ISBLANK(3)

NAME
     isblank -- space or tab character test

LIBRARY
     Standard C Library (libc, -lc)

SYNOPSIS
     #include <ctype.h>

     int
     isblank(int c);

DESCRIPTION
     The isblank() function tests for a space or tab character.  For any locale, this includes the following stan-
     dard characters:

     ``\t''      `` ''

     In the "C" locale, a successful isblank() test is limited to these characters only.  The value of the argument
     must be representable as an unsigned char or the value of EOF.

RETURN VALUES
     The isblank() function returns zero if the character tests false and returns non-zero if the character tests
     true.

COMPATIBILITY
     The 4.4BSD extension of accepting arguments outside of the range of the unsigned char type in locales with
     large character sets is considered obsolete and may not be supported in future releases.  The iswblank() func-
     tion should be used instead.

SEE ALSO
     ctype(3), isalnum_l(3), iswblank(3), ascii(7)

STANDARDS
     The isblank() function conforms to ISO/IEC 9899:1999 (``ISO C99'').

BSD                              July 17, 2005                             BSD

4. OK