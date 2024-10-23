# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-In_Progress-success?color=black&style=flat-square"/></a> • 42_libft 
 <a href="#" style="pointer-events: none;">
 <img align="right" src="./src/libft42-removebg-preview.png" width="400"/>
 </a>

### Objective

Create a library called libft.a, which will contain various implemented functions,<br/>
with behaviors similar to the functions of the standard C language library (libc),<br/>
but with the prefix ft_ in the function names.<br/>

### Files to submit<br/>
 A Makefile: to automate the compilation of the library.<br/>
    The header file libft.h: where the functions to be implemented will be declared.<br/>
    The source code files, with names in the format ft_*.c: for example, ft_strlen.c, ft_isalpha.c, and so on.<br/>

### Makefile Rules

In the Makefile, it's necessary to include the following commands:<br/>
<br/>
   NAME: the name of the library (in this case, libft.a).<br/>
   all: command that will compile all files and create the library.<br/>
   clean: command that deletes object files (.o).<br/>
   fclean: command that deletes object files and the libft.a library.<br/>
   re: command that executes fclean and then recompiles everything (a complete "rebuild").<br/>

### Technical Considerations

Global variables are prohibited.<br/>
    Use static functions when auxiliary functions are needed within a file.<br/>
    Place all files in the root directory of the repository.
    Compile the files with the flags: -Wall, -Wextra and -Werror.<br/>
    The library must be created using the "ar" command and the generated file (libft.a) must be in the root directory.<br/>

### Recreating standard library functions (Libc)

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

### General Tips

 To understand how each function works, you can consult the "man pages" (for example, man strlen to see how strlen works).<br/>
 When implementing the functions, follow the original signature, but add the ft_ prefix. For example:<br/>
        int strlen(const char *s); → int ft_strlen(const char *s);<br/>
    Make sure all functions compile correctly with warnings and errors enabled (flags: -Wall, -Wextra, -Werror).<br/>

### Using the Makefile and creating the library

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

### Next steps

    Implement each function in its own .c file.
    Add the declaration of the functions in the libft.h file.
    Test the functions to ensure they behave as expected.
    Compile the library with the Makefile.
    

### Types of functions:

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

### Study tips:

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


### Some testers

[Francinette](https://github.com/xicodomingues/francinette)<br/>
[libftTester](https://github.com/Tripouille/libftTester)<br/>
[libft_Unit_test](https://github.com/alelievr/libft-unit-test)<br/>
[libft-war-machine](https://github.com/0x050f/libft-war-machine)


<img align="center" src="./src/libftwarmachinepassed.png" width="50%"/>
<img align="center" src="./src/libftunittestpassed.png" width="50%"/>
<img align="center" src="./src/libfttesterpassed.png" width="50%"/>
<img align="center" src="./src/fsoarespassed.png" width="50%"/>
<img align="center" src="./src/alltestpassed.png" width="50%"/>

### Earned skills
<p align="left">
  <a href="#" style="pointer-events: none;">
    <img src="https://skillicons.dev/icons?i=c" />
  </a>
</p>  

###### Projeto desenvolvido por: [Adão Gonçalves](https://github.com/AdaoG0n)

![Endpoint Badge](https://img.shields.io/endpoint?url=https%3A%2F%2Fhits.dwyl.com%2FAdaoG0n%2F42_libft.json&style=flat-square&labelColor=black&color=blue)
