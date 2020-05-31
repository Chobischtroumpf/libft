# libft
This was the first project of the 42network cursus at school19. it was meant as a way for the student (me) to understand the macOS implementation of the [GNU libc](https://www.gnu.org/software/libc/).  

these were the functions I had to reprogram, there were a total of 34 mandatory functions. On top of those I added a few extra functions (some were part of the libc some weren't).  
mandatory functions :  
+ [memset](https://github.com/Chobischtroumpf/libft/blob/master/ft_memset.c) | [man page](https://linux.die.net/man/3/memset). 
+ [memcpy](https://github.com/Chobischtroumpf/libft/blob/master/ft_memcpy.c) | [man page](https://linux.die.net/man/3/memcpy). 
+ [memccpy](https://github.com/Chobischtroumpf/libft/blob/master/ft_memccpy.c) | [man page](https://linux.die.net/man/3/memccpy). 
+ [memmove](https://github.com/Chobischtroumpf/libft/blob/master/ft_memmove.c) | [man page](https://linux.die.net/man/3/memmove). 
+ [memchr](https://github.com/Chobischtroumpf/libft/blob/master/ft_memchr.c) | [man page](https://linux.die.net/man/3/memchr). 
+ [memcmp](https://github.com/Chobischtroumpf/libft/blob/master/ft_memcmp.c) | [man page](https://linux.die.net/man/3/memcmp). 
+ [bzero](https://github.com/Chobischtroumpf/libft/blob/master/ft_bzero.c) | [man page](https://linux.die.net/man/3/bzero). 
+ [isalpha](https://github.com/Chobischtroumpf/libft/blob/master/ft_isalpha.c) | [man page](https://linux.die.net/man/3/isalpha). 
+ [isdigit](https://github.com/Chobischtroumpf/libft/blob/master/ft_isdigit.c) | [man page](https://linux.die.net/man/3/isdigit). 
+ [isalnum](https://github.com/Chobischtroumpf/libft/blob/master/ft_isalnum.c) | [man page](https://linux.die.net/man/3/isalnum). 
+ [isascii](https://github.com/Chobischtroumpf/libft/blob/master/ft_isascii.c) | [man page](https://linux.die.net/man/3/isascii). 
+ [isprint](https://github.com/Chobischtroumpf/libft/blob/master/ft_isprint.c) | [man page](https://linux.die.net/man/3/isprint). 
+ [toupper](https://github.com/Chobischtroumpf/libft/blob/master/ft_tolower.c) | [man page](https://linux.die.net/man/3/toupper). 
+ [tolower](https://github.com/Chobischtroumpf/libft/blob/master/ft_tolower.c) | [man page](https://linux.die.net/man/3/tolower). 
+ [strlen](https://github.com/Chobischtroumpf/libft/blob/master/ft_strlen.c) | [man page](https://linux.die.net/man/3/strlen). 
+ [strchr](https://github.com/Chobischtroumpf/libft/blob/master/ft_strchr.c) | [man page](https://linux.die.net/man/3/strchr). 
+ [strrchr](https://github.com/Chobischtroumpf/libft/blob/master/ft_strrchr.c) | [man page](https://linux.die.net/man/3/strrchr). 
+ [strncmp](https://github.com/Chobischtroumpf/libft/blob/master/ft_strncmp.c) | [man page](https://linux.die.net/man/3/strncmp). 
+ [strlcpy](https://github.com/Chobischtroumpf/libft/blob/master/ft_strlcpy.c) | [man page](https://linux.die.net/man/3/strlcpy). 
+ [strlcat](https://github.com/Chobischtroumpf/libft/blob/master/ft_strlcat.c) | [man page](https://linux.die.net/man/3/strlcat). 
+ [strnstr](https://github.com/Chobischtroumpf/libft/blob/master/ft_strnstr.c) | [man page](https://www.systutorials.com/docs/linux/man/3-strnstr/)
+ [atoi](https://github.com/Chobischtroumpf/libft/blob/master/ft_atoi.c) | [man page](https://linux.die.net/man/3/atoi). 
+ [itoa](https://github.com/Chobischtroumpf/libft/blob/master/ft_itoa.c) | [man page](https://www.mkssoftware.com/docs/man3/itoa.3.asp). 
+ [substr](https://github.com/Chobischtroumpf/libft/blob/master/ft_substr.c) | the substr function creates a substring of the given argument that starts at x and is len long. 
+ [strjoin](https://github.com/Chobischtroumpf/libft/blob/master/ft_strjoin.c) | joins s1 with s2. 
+ [strtrim](https://github.com/Chobischtroumpf/libft/blob/master/ft_strtrim.c) | strtrim trims the chars that are in set from the begining and end of s1. 
+ [split](https://github.com/Chobischtroumpf/libft/blob/master/ft_split.c) | this function works like [strtok](https://linux.die.net/man/3/strtok), but returns a char \*\* that contains all the split tokens. 
+ [strmapi](https://github.com/Chobischtroumpf/libft/blob/master/ft_strmapi.c). 
+ [putchar_fd](https://github.com/Chobischtroumpf/libft/blob/master/ft_putchar.c) | prints char to specified file descriptor. 
+ [putstr_fd](https://github.com/Chobischtroumpf/libft/blob/master/ft_putstr_fd.c) | prints string to specified file descriptor. 
+ [putnbr_fd](https://github.com/Chobischtroumpf/libft/blob/master/ft_putnbr_fd.c) | prints number to specified file descriptor.
+ [putendl_fd](https://github.com/Chobischtroumpf/libft/blob/master/ft_putendl_fd.c) | prints string to specified file descriptor, and adds a new line character at the end. 

my additions :  
+ [itoa_base](https://github.com/Chobischtroumpf/libft/blob/master/ft_itoa_base.c) | **itoa_base** works exactly like **itoa**, except that it can accept numbers that are in a different base than 10 (the base has to be specified as 2nd arg and the baselen as third).
+ [putchar](https://github.com/Chobischtroumpf/libft/blob/master/ft_putchar.c) | automatically writes the char to stdin. 
+ [putstr](https://github.com/Chobischtroumpf/libft/blob/master/ft_putstr.c) | automatically writes the string to stdin.
+ [putnbr](https://github.com/Chobischtroumpf/libft/blob/master/ft_putnbr.c) | automatically writes the number to stdin.
+ [putendl](https://github.com/Chobischtroumpf/libft/blob/master/ft_putendl.c) | automatically writes the string followed by a newline char to stdin.
+ [numlen](https://github.com/Chobischtroumpf/libft/blob/master/ft_numlen.c) | **numlen** works like **strlen** but for base10 integers. 
+ [strcat](https://github.com/Chobischtroumpf/libft/blob/master/ft_strcat.c) | [man page](https://linux.die.net/man/3/strcat). 
+ [strcpy](https://github.com/Chobischtroumpf/libft/blob/master/ft_strcpy.c) | [man page](https://linux.die.net/man/3/strcpy). 
+ [strcmp](https://github.com/Chobischtroumpf/libft/blob/master/ft_strcmp.c) | [man page](https://linux.die.net/man/3/strcmp). 
+ [strdup](https://github.com/Chobischtroumpf/libft/blob/master/ft_strdup.c) | [man page](https://linux.die.net/man/3/strdup). 
+ [strndup](https://github.com/Chobischtroumpf/libft/blob/master/ft_strndup.c) | [man page](https://linux.die.net/man/3/strndup)
+ [strfree](https://github.com/Chobischtroumpf/libft/blob/master/ft_strfree.c) | **strfree** takes a string as argument and if it has a value will try to free it. undefined behavior if the strng passed as argument was not allocated on the heap. 
+ [strncpy](https://github.com/Chobischtroumpf/libft/blob/master/ft_strncmp.c) | [man page](https://linux.die.net/man/3/strncpy). 
+ [strnew](https://github.com/Chobischtroumpf/libft/blob/master/ft_strnew.c) | **strnew** will allocate an empty string of size **size**, initialize it to 0 and return it. 
+ [strnjoin](https://github.com/Chobischtroumpf/libft/blob/master/ft_strnjoin.c) | **strnjoin** works just like the **strjoin** but instead of of join the whole string, it'll join the *size* first chars.
+ [get_next_line](https://github.com/Chobischtroumpf/libft/blob/master/get_next_line.c) | **get_next_line** is the equivalent of the getline() function, it takes two arguments, the file descriptor of the file it should read from, and the address of the string in which it will save the line it read. the size of buffer can be modified at compilation time by modifying the header file's **BUFFER_SIZE** macro.
+ [printf](https://github.com/Chobischtroumpf/libft/blob/master/ft_printf/ft_printf.c) | [man page](https://linux.die.net/man/3/printf) only flags `-.0*` and conversions `cspdiuxX%` work
