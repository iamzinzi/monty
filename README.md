# 0x18. C - Stacks, Queues - LIFO, FIFO
---
## Name

Monty Translator

## Description

Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

### This project in the Lower Level Programming series is about:

 * What do LIFO and FIFO mean
 * What is a stack, and when to use it
 * What is a queue, and when to use it
 * What are the common implementations of stacks and queues
 * What are the most common use cases of stacks and queues
 * What is the proper way to use global variables
 * How to work with git submodules

## Requirements

 * Allowed editors: vi, vim, emacs
 * All your files will be compiled on Ubuntu 14.04 LTS
 * Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
 * All your files should end with a new line
 * A README.md file, at the root of the folder of the project is mandatory
 * Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
 * You allowed to use a maximum of one global variable
 * No more than 5 functions per file
 * You are allowed to use the C standard library
 * The prototypes of all your functions should be included in your header file called monty.h
 * Don’t forget to push your header file
 * All your header files should be include guarded
 * You are expected to do the tasks in the order shown in the project
 * The repository monty should be added as a submodule to your holbertonschool-low_level_programming repository, under the name 0x18-stacks_queues_lifo_fifo

## To Install
* Run the command `git clone https://github.com/iamzinzi/monty.git` in your terminal
* Compile from the home directory of the project (`monty`) with the command `gcc -Wall -Werror -Wextra -pedantic *.c -o monty`

## Using monty
Usage: `./monty file`
#### Monty byte code files
Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
```
jinji@ubuntu:~/monty$ cat -e bytecodes/000.m
push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
```
Monty byte code files can contain blank lines (empty or made of spaces only). Any additional text after the opcode or its required argument is not taken into account:
```
jinji@ubuntu:~/monty$ cat -e bytecodes/001.m
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
```
## Examples
__push__ pushes an element to the stack.  
Usage: `push <int>`  
__pall__ prints all the values on the stack, starting from the top of the stack.  
Usage: `pall`  
```
jinji@ubuntu:~/monty$ cat -e bytecodes/00.m
push 1$
push 2$
push 3$
pall$
jinji@ubuntu:~/monty$ ./monty bytecodes/00.m
3
2
1
```
__pint__ prints the value at the top of the stack, followed by a new line.  
Usage: `pint`
```
jinji@ubuntu:~/monty$ cat bytecodes/06.m 
push 1
pint
push 2
pint
push 3
pint
jinji@ubuntu:~/monty$ ./monty bytecodes/06.m 
1
2
3
```
__pop__ removes the top element of the stack.  
Usage: `pop`
__swap__ swaps the top two elements of the stack.  
Usage: `swap` 
```
julien@ubuntu:~/0x18-stacks_queues_lifo_fifo$ cat bytecodes/09.m 
push 1
push 2
push 3
pall
pop
swap
pall
julien@ubuntu:~/0x18-stacks_queues_lifo_fifo$ ./monty bytecodes/09.m 
3
2
1
1
2
```

## Files
---
File|Task
---|---
README.md | read me file
add.c | a function that adds the top two elements of the stack and more
add_node_end.c | a function adds a new node at the end of a `list_t` linked list
error_handling.c | a program that handles error messages
free_functions.c | a program that handles memory leaks
get_instruc_func.c | a function that reads command string and selects the correct function to perform
get_opcode_at_node_index.c | a function that returns the value of node at line number
get_value_at_node_index.c | a function that returns the value of node at line number
isnumber.c | checks if the argv[2] is a number
main.c | the main function
monty.h | the header file
pall.c | a function that prints all the values on the stack, starting from the top of the stack
pint.c | a function that prints the value at the top of the stack, followed by a new line
pop.c | a function that removes the top element of the stack
push.c | a function that pushes an element to the stack
swap.c | a function that swaps the top two elements of the stack
tokenize_functions.c | a program that handles arguments passed to the program monty


### Authors

[Jinji Zhang](https://github.com/iamzinzi)

[Leine Valente](https://github.com/leinefran)
