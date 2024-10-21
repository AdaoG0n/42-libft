# 42_libft
<br/>
1. Objective<br/>
Create a library called libft.a, which will contain various implemented functions,<br/>
with behaviors similar to the functions of the standard C language library (libc),<br/>
but with the prefix ft_ in the function names.<br/>
<br/>
2. Files to submit<br/>
 A Makefile: to automate the compilation of the library.<br/>
    The header file libft.h: where the functions to be implemented will be declared.<br/>
    The source code files, with names in the format ft_*.c: for example, ft_strlen.c, ft_isalpha.c, and so on.<br/>
<br/>
3. Makefile Rules<br/>
In the Makefile, it's necessary to include the following commands:<br/>
<br/>
   NAME: the name of the library (in this case, libft.a).<br/>
   all: command that will compile all files and create the library.<br/>
   clean: command that deletes object files (.o).<br/>
   fclean: command that deletes object files and the libft.a library.<br/>
   re: command that executes fclean and then recompiles everything (a complete "rebuild").<br/>
<br/>
4. Technical Considerations<br/>
Global variables are prohibited.<br/>
    Use static functions when auxiliary functions are needed within a file.<br/>
    Place all files in the root directory of the repository.
    Compile the files with the flags: -Wall, -Wextra and -Werror.<br/>
    The library must be created using the "ar" command and the generated file (libft.a) must be in the root directory.<br/>
<br/>
5. Technical Considerations<br/>
Global variables are prohibited.<br/>
    Use static functions when auxiliary functions are needed within a file.<br/>
    Place all files in the root directory of the repository.<br/>
    Compile the files with the flags: -Wall, -Wextra, and -Werror.<br/>
    The library must be created using the "ar" command and the generated file (libft.a) must be in the root directory.<br/>
<br/>
6. Part 1: Recreating standard library functions (Libc) <br/>
It's necessary to recreate the following functions from the standard C language library, using the prefix ft_ for each of them.<br/>
The implementations must follow the specifications of the man page for each function, but without using the restrict qualifier (which is part of the C99 standard). Below is the list of functions:<br/>
<br/>
    Functions that don't use dynamic memory allocation:<br/>
        isalpha, isdigit, isalnum, isascii, isprint<br/>
        strlen, memset, bzero, memcpy, memmove<br/>
        strlcpy, strlcat, toupper, tolower<br/>
        strchr, strrchr, strncmp, memchr, memcmp<br/>
        strnstr, atoi<br/>
<br/>
    Functions that require dynamic memory allocation (using malloc):<br/>
        calloc, strdup<br/>
<br/>
7. General Tips<br/>
<br/>
 To understand how each function works, you can consult the "man pages" (for example, man strlen to see how strlen works).<br/>
 When implementing the functions, follow the original signature, but add the ft_ prefix. For example:<br/>
        int strlen(const char *s); → int ft_strlen(const char *s);<br/>
    Make sure all functions compile correctly with warnings and errors enabled (flags: -Wall, -Wextra, -Werror).<br/>
<br/>
8. Using the Makefile and creating the library<br/>
In the Makefile, use the "ar" command to create the static library from the .o files. Something like this:<br/>

		makefile

		NAME = libft.a
		CC = gcc
		CFLAGS = -Wall -Wextra -Werror
		SRC = ft_strlen.c ft_isalpha.c ... # list of .c files
		OBJ = $(SRC:.c=.o)

		all: $(NAME)

		$(NAME): $(OBJ)
		ar rcs $(NAME) $(OBJ)

		clean:
		rm -f $(OBJ)
 
		fclean: clean
		rm -f $(NAME)

		re: fclean all

9. Next steps<br/>
<br/>
    Implement each function in its own .c file.<br/>
    Add the declaration of the functions in the libft.h file.<br/>
    Test the functions to ensure they behave as expected.<br/>
    Compile the library with the Makefile.<br/>
    <br/>
    <br/>
# Types of functions:

   	Character manipulation functions:
        ft_isalpha, ft_isdigit, ft_isalnum, ft_isascii, ft_isprint
        ft_toupper, ft_tolower

   	Basic memory manipulation functions:
        ft_memset, ft_bzero
        ft_memcpy, ft_memmove
        ft_memchr, ft_memcmp
        
    	Basic string manipulation functions:
        ft_strlen
        ft_strchr, ft_strrchr
        ft_strncmp
        ft_strlcpy, ft_strlcat
        
    	Conversion functions:
        ft_atoi
        ft_itoa
        
    	Memory allocation functions:
        ft_calloc
        ft_strdup
        
    	More complex string manipulation functions:
        ft_substr
        ft_strjoin
        ft_strtrim
        ft_split
        
    	Functions that use function pointers:
        ft_strmapi
        ft_striteri
        
    	Output functions:
        ft_putchar_fd, ft_putstr_fd, ft_putendl_fd, ft_putnbr_fd

Study tips:<br/>

    Start with the simplest functions and progress gradually.
    For each function:
        Read the description and understand what it should do.
        Analyze the code line by line.
        Write comments explaining what each part of the code does.
        Try to rewrite the function on your own without looking at the original code.
        Create test cases to verify if the function works correctly.
    Use resources such as:
        The manual page (man) to understand the original libc functions.
        Draw diagrams to visualize how functions manipulate memory or strings.
        Write small programs that use these functions to see how they work in practice.
    Practice explaining each function out loud, as if you were teaching someone.
    Identify patterns and concepts that repeat across functions (such as memory allocation, iteration over strings, etc.).
    Don't hesitate to review basic C concepts, such as pointers, memory allocation, and string manipulation.

Remember, understanding comes with time and practice. 
Don't worry if you don't understand everything at once. Regularly revisit previous functions to reinforce your understanding.
Good luck with your studies!


### To test you can use libftTester
[libftTester](https://github.com/Tripouille/libftTester)

	[Mandatory]
	ft_memset	: 1.OK 2.OK 
	ft_bzero	: 1.OK 2.OK 3.OK 
	ft_memcpy	: 1.OK 2.OK 3.OK 
	ft_memmove	: 1.OK 2.OK 3.OK 4.OK 
	ft_memchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 
	ft_memcmp	: 1.OK 2.OK 3.OK 4.OK 5.OK 
	ft_strlen	: 1.OK 2.OK 
	ft_isalpha	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 
	ft_isdigit	: 1.OK 2.OK 3.OK 4.OK 
	ft_isalnum	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 
	ft_isascii	: 1.OK 2.OK 3.OK 4.OK 
	ft_isprint	: 1.OK 2.OK 3.OK 4.OK 
	ft_toupper	: 1.OK 2.OK 3.OK 4.OK 
	ft_tolower	: 1.OK 2.OK 3.OK 4.OK 
	ft_strchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 
	ft_strrchr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 
	ft_strncmp	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 
	ft_strlcpy	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 
	ft_strlcat	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 
	ft_strnstr	: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 
	ft_atoi		: 1.OK 2.OK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 14.OK 15.OK 16.OK 17.OK 
	ft_calloc	: 1.OK 2.MOK 3.OK 4.OK 5.OK 6.OK 7.OK 8.OK 9.OK 10.OK 11.OK 12.OK 13.OK 
	ft_strdup	: 1.OK 2.MOK 3.OK 4.MOK 
	ft_substr	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 13.OK 14.MOK 15.OK 16.MOK 
	ft_strjoin	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 
	ft_strtrim	: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 13.OK 14.MOK 15.OK 16.MOK 
	ft_split	: 1.MOK 2.OK 3.MOK 4.OK 5.MOK 6.OK 7.OK 8.OK 9.OK 10.OK 11.MOK 12.OK 13.OK 14.MOK 15.OK 16.MOK 17.OK 18.OK 19.MOK 20.OK 21.OK 22.MOK 23.OK 24.OK 25.MOK 26.OK 27.MOK 28.OK 29.MOK 30.OK 31.MOK 32.OK 33.MOK 34.OK 35.MOK 36.OK 37.MOK 38.OK 39.MOK 40.OK 41.MOK 42.OK 
	ft_itoa		: 1.OK 2.MOK 3.OK 4.MOK 5.OK 6.MOK 7.OK 8.MOK 9.OK 10.MOK 11.OK 12.MOK 
	ft_strmapi	: 1.OK 2.MOK 3.OK 4.MOK 
	ft_putchar_fd	: 1.OK 
	ft_putstr_fd	: 1.OK 
	ft_putendl_fd	: 1.OK 
	ft_putnbr_fd	: 1.OK 2.OK 3.OK 4.OK 5.OK 
	ft_striteri	: 1.OK 2.OK 3.OK
