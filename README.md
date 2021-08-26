# 0x16. C - Simple Shell
## Write a simple UNIX command interpreter.

## Description  📑

shell is a command line interpreter, it is the computer program that provides a user interface to access the operating system services. Depending on the type of interface they use, shells can be of various types, in this case, a shell program of type sh (Bourne Shell) will be developed. Users usually interact with a shell through a terminal emulator that is used to enter data into a computer or computer system and display or print it.  The following diagram shows the workflow of the program made to run a shell.

![flowchart](https://github.com/kenialo19/simple_shell/blob/main/Shell%20diagram.png)

## Requirements  📢  📋

### General ✅
- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror
  Wextra -pedantic -std=gnu89
 - All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded
- Use system calls only when you need to (why?)

 ## Output  📮

 ### Example of error with sh: ✅
 ```
$ echo "qwerty" | /bin/sh
/bin/sh: 1: qwerty: not found
$ echo "qwerty" | /bin/../bin/sh
/bin/../bin/sh: 1: qwerty: not found
$
```
### Same error with your program hsh: ✅
```
$ echo "qwerty" | ./hsh
./hsh: 1: qwerty: not found
$ echo "qwerty" | ./././hsh
./././hsh: 1: qwerty: not found
$
```
## List of allowed functions and system calls  📞
| Functions | Manual |
| ------ | ------ |
| execve (2)  🖍 | [https://man7.org/linux/man-pages/man2/execve.2.html][PlDb] |
| exit (3)  🖍 | [https://man7.org/linux/man-pages/man3/exit.3.html][PlGh] |
| fork (2)  🖍 | [https://man7.org/linux/man-pages/man2/fork.2.html][PlGd] |
| free (3)  🖍 | [https://man7.org/linux/man-pages/man3/free.3p.html][PlOd] |
| getline (3)  🖍 | [https://man7.org/linux/man-pages/man3/getline.3.html][PlMe] |
| isatty (3)  🖍 | [https://man7.org/linux/man-pages/man3/isatty.3.html][PlDb] |
| malloc (3)  🖍 | [https://man7.org/linux/man-pages/man3/free.3.html][PlGd] |
| perror (3)  🖍 | [https://man7.org/linux/man-pages/man3/perror.3.html][PlOd] |
| stat (2)  🖍 | [https://man7.org/linux/man-pages/man2/stat.2.html][PlGa] |
| strtok (3)  🖍 | [https://man7.org/linux/man-pages/man3/strtok.3.html][PlDb] |
| wait (2)  🖍 | [https://man7.org/linux/man-pages/man2/wait.2.html[PlGh] |
| write (2)  🖍 | [https://man7.org/linux/man-pages/man2/write.2.html][PlOd] |

## Compilation  🌐  🌐  🌐
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```


## Testing ✍  ✍
Your shell should work like this in interactive mode: ✐
```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
But also in non-interactive mode: ✎
```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## function_str.c && str.c   🔴  🔴

| Functions | Description |
| ------ | ------ |
| _strlen ⓢ | lenght of the string. |
| _strcmp ⓢ | compare two strings. |
| *_strcpy ⓢ | copies the string pointed to by src into dest. |
| *_strchr ⓢ  | localate a character in a string. |
| _strncmp ⓢ | copies a string in long array |
| *_strdup ⓢ | duplicate the strings. |
| count_word ⓢ | word counter |
| signal_c ⓢ | woverview of signals|

## Functions Shell   📟  📟
 Functions | Description |
| ------ | ------ |
| *_getenv | get a environ variable. |
| *read_line | print prompt. |
| **token_command | get token of the string |
| child_exec | create fork. |
| _*builtin | copies a string in long array |
|  *_path_dir | values path. |

## functions ERROR ❌
 Functions | Description |
| ------ | ------ |
| _error | function error |

## Built_in.c
 Functions | Description |
| ------ | ------ |
| _env  | function the print enviromen |
| _dep_exit | function for exit of the program |


BUILDED WITH ⚡ ⚡

VISUAL STUDIO CODE🔵IN C LANGUAGE ⚡

# AUTHORS   🙇


 🙇   SHIRLEY CÁRCAMO
  🙇   KENIA LOPEZ.
