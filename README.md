.TH Man 1 "28/10/19" "1.0" "Holberton _printf Project Man Page"
.Dd 10/28/19               \" DATE
.Dt man_printf      \" Program name and manual section number
.Os AngelP DavidO
.Sh NAME                 \" Section Header - required - don't modify
.Nm _printf
.Nd This line parsed for whatis database.
.Sh SYNOPSIS
#include "holberton.h"
.Pp
.Nm
.Arg (const char *format, ...)
.Sh DESCRIPTION          \" Section Header - required - don't modify
The 
.Nm 
program produce outputs according to specific formats. It writes the output under a control of one or more format specifiers that tell how subsequent arguments are converted for output    
.El \"
.Pp                      \" Inserts a space
Format specifiers:
.Bl -tag -width -indent  \" Begins a tagged list
.It s -               \" Each item preceded by .It macro
Represents a substring to insert instead
.It c -
inserts a character in place of the specifier
.It d - 
Inserts a string representing the 
.It i - 
Converts an integer to a substring and inserts in place 
.It x - 
converts an input integer to hexadecimal and puts it in place
.It o -
converts an input integer to octal base and returns a substring
.It % -
converts an input integer to a percentage and returs the substring


.El                      \" Ends the list
.Pp \"
.Sh FLAGS
The format string is a character string, beginning and ending in its initial shift state, if any.  The format string is composed of zero or more directives: ordinary  characters
(not  %),  which  are copied unchanged to the output stream; and conversion specifications, each of which results in fetching zero or more subsequent arguments.  Each conversion
specification is introduced by the character %, and ends with a conversion specifier.  In between there may be (in this order) zero or more  flags,  an  optional  minimum  field
width, an optional precision and an optional length modifier.

A list of flags and their descriptions:
.Bl -tag -width -indent  \" Differs from above in tag removed
.It Fl a                 \"-a flag as a list item
Description of -a flag
.It Fl b
Description of -b flag
.El                      \" Ends the list
.Pp
.\" .Sh ENVIRONMENT      \" May not be needed
.\" .Bl -tag -width "ENV_VAR_1" -indent \" ENV_VAR_1 is width of the string ENV_VAR_1
.\" .It Ev ENV_VAR_1
.\" Description of ENV_VAR_1
.\" .It Ev ENV_VAR_2
.\" Description of ENV_VAR_2
.\" .El
.Sh OUTPUT
Upon successful operation,
.Nm
print returns all the characters except for the null character. 

.Sh SEE ALSO
.\" List links in ascending order by section, alphabetically within a section.
.\" Please do not reference files that do not exist without filing a bug report
.Xr a printf ,
---
## Authors
* **Angel Pedroza** - [AngelPedroza](https://github.com/AngelPedroza)
* **David Ovalle** - [Nukemenonai](https://github.com/Nukemenonai)
