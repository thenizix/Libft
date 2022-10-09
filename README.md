
# Libft DIY library

Libft is the first step in this 42 school.

We will rewrite.. most of the Piscine functions , more useful functions and will write some functions to gain some bonus point using structures.

I recommend - - ->>> don't rely on my code,i'm a student..
At now,a mess in the makefile.

### Files 
I set all functions into .c files, as usual.
All files have to follow the NORM.
Into each functions file i set  #include "libft.h"
In main directory there's a .h file and a Makefile.

- .h :  wrote here functions declarations, structure declaration and what it needs , 
* stdlib.h and unistd.h i need it for malloc() and write() 

- Makefile : Insert all rules forced by the subject by 42. 
It will compile the library just typing "make" in the bash terminal.
 
To run bonus do : make bonus
To clean lib :  make fclean  
to clean .o files make clean.

A guide:
https://makefiletutorial.com/

-------------------
###Code checkers 
I also passed the lib into some code checkers
I receive an error from  grademe.fr:
 bash ..syntax error line546  ... arithmetic something.. token is .h 
 mah???
 Here some tests:
https://github.com/jtoty/Libftest.git
https://github.com/y3ll0w42/libft-war-machine
https://grademe.fr/
Tools useful , no doubts.Really responsive... But how to be sure?
Nice the grademe.fr exams.
# Libft
Norminette and The checkers are not enough,you will dive into the code to find the way, 
hours playing with norminette
when finished or loose the battle, 
compare the effort with other's code,...   learning something new...
The piscine was a stressful experience, and 10 days to stop and restart,was not enough.. i feel tired.

Here are:

### ctype.h Functions  

- ['ft_isalpha'](ft_lib/ft_isalpha.c)	- checks  for  an  alphabetic  character.
- ['ft_isdigit'](ft_lib/ft_isdigit.c)	- checks for a digit (0 through 9).
- ['ft_isalnum'](ft_lib/ft_isalnum.c)	- checks for an alphanumeric character.
- ['ft_isascii'](ft_lib/ft_isascii.c)	- checks whether c fits into the ASCII character set.
- ['ft_isprint'](ft_lib/ft_isprint.c)	- checks for any printable character.
- ['ft_toupper'](ft_lib/ft_toupper.c)	- convert char to uppercase.
- ['ft_tolower'](ft_lib/ft_tolower.c)	- convert char to lowercase.

### Functions from  string.h

- ['ft_memset'](ft_lib/ft_memset.c)	- fill memory with a constant byte.
- ['ft_strlen'](ft_lib/ft_strlen.c)	- calculate the length of a string.
- ['ft_bzero'](ft_lib/ft_bzero.c)	- zero a byte string.
- ['ft_memcpy'](ft_lib/ft_memcpy.c)	- copy memory area.
- ['ft_memmove'](ft_lib/ft_memmove.c)	- copy memory area.
- ['ft_strlcpy'](ft_lib/ft_strlcpy.c)	- copy string to an specific size.
- ['ft_strlcat'](ft_lib/ft_strlcat.c)	- concatenate string to an specific size.
- ['ft_strchr'](ft_lib/ft_strchr.c)	- locate character in string.
- ['ft_strrchr'](ft_lib/ft_strrchr.c)	- locate character in string.
- ['ft_strncmp'](ft_lib/ft_strncmp.c)	- compare two strings.
- ['ft_memchr'](ft_lib/ft_memchr.c)	- scan memory for a character.
- ['ft_memcmp'](ft_lib/ft_memcmp.c)	- compare memory areas.
- ['ft_strnstr'](ft_lib/ft_strnstr.c)	- locate a substring in a string.
- ['ft_strdup'](ft_lib/ft_strdup.c)	- create a duplicate for the string passed as parameter.

### Functions from stdlib.h
- ['ft_atoi'](ft_lib/ft_atoi.c)	- convert a string to an integer.
- ['ft_calloc'](ft_lib/ft_calloc.c)	- allocates memory and sets its bytes' values to 0.

## srings char functions
- ['ft_substr'](ft_lib/ft_substr.c)	- returns a substring from a string.
- ['ft_strjoin'](ft_lib/ft_strjoin.c)	- concatenates two strings.
- ['ft_strtrim'](ft_lib/ft_strtrim.c)	- trims the beginning and end of string with specific set of chars.
- ['ft_split'](ft_lib/ft_split.c)	- splits a string using a char as parameter.
- ['ft_itoa'](ft_lib/ft_itoa.c)	- converts a number into a string.
- ['ft_strmapi'](ft_lib/ft_strmapi.c)	- applies a function to each character of a string.
- ['ft_striteri'](ft_lib/ft_striteri.c)	- applies a function to each character of a string.
- ['ft_putchar_fd'](ft_lib/ft_putchar_fd.c)	- output a char to a file descriptor.
- ['ft_putstr_fd'](ft_lib/ft_putstr_fd.c)	- output a string to a file descriptor.
- ['ft_putendl_fd'](ft_lib/ft_putendl_fd.c)	- output a string to a file descriptor, followed by a new line.
- ['ft_putnbr_fd'](ft_lib/ft_putnbr_fd.c)	- output a number to a file descriptor.

### t_list functions  

- ['ft_lstnew'](ft_lib/ft_lstnew.c)	- creates a new list element.
- ['ft_lstadd_front'](ft_lib/ft_lstadd_front.c)	- adds an element at the beginning of a list.
- ['ft_lstsize'](ft_lib/ft_lstsize.c)	- counts the number of elements in a list.
- ['ft_lstlast'](ft_lib/ft_lstlast.c)	- returns the last element of the list.
- ['ft_lstadd_back'](ft_lib/ft_lstadd_back.c)	- adds an element at the end of a list.
- ['ft_lstclear'](ft_lib/ft_lstclear.c)	- deletes and free list.
- ['ft_lstiter'](ft_lib/ft_lstiter.c)	- applies a function to each element of a list.
- ['ft_lstmap'](ft_lib/ft_lstmap.c)	- applies a function to each element of a list.

