#_printf

Recreate printf from scratch in C

##Function

The purpose of _printf is to mimic printf from stdio.h.

The prototype we used is "int _printf(const char *format, ...)" where format is
a string and takes unlimited number of inputs as values. Returns number of chars
printed.

'%' indicates when an additional value will be input, with the following letter
acting as a flag:

##Flag   Output

%c     char
%s     string
%S     string, replace any unprintable chars as \xXXX where XXX is a hex with
       caps, must be at least two digits
%d/%i  int
%o     unsigned int as octal
%u     unsigned decimal int
%x     unsigned int as hex with lowercase letters
%X     unsigned int as hex with uppercase letters
%b     unsigned int as binary

##Example and output

 int main(void)
 {
 _printf("%s\nprint a char: %c\nthis is an int: %d\nand an octal: %o\n",
 "this is a string", 'A', 98, 98);

return (0);
}

OUTPUT

this is a string
print a char: A
this is an int: 98
and an octal: 142