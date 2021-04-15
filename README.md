# Welcome to our shell! 🐚

We've developed a simple command interpreter as our final C project, in this repository you will find all the files that are needed to use our shell.


# Files 🗃️

 - **holberton.h** Header file that contains all the prototypes for our functions and the environ global variable that we use throughout our entire program.
  - **prompt.c** This file contains the infinite loop that prompts the user for commands.
 - **aux_functions.c** This file contains all the function needed for tokenization, counting tokens and freeing double pointers.
 - **enviroment.c** This file contains the functions needed for printing the enviroment, tokenizing the enviroment and running executables found in the PATH.
 - **errors.c** This file contains the functions used for printing out errors and the funcions we used to split the fork and wait process.
 - **string_functions.c** This file contains the functions we used to manipulate strings in our program.
 - **error_mess.c** This file contains the function we use to display an error message when the command isn't found.

## Requirements ⚙️

 1. You need to download all the files from this repository.
 2. You need to use the gcc 4.8.4 version.

## Compilation 🧰

Use this command in order to compile all our files.
```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
## This is what our shell's output looks like 💻
```
root@DESKTOP-6N4L4UF:~/Holberton/Ensayo-Mini-Shell/Mini_shell# ./hsh 
prompt$echo Hello
Hello
prompt$pwd
/root/Holberton/Ensayo-Mini-Shell/Mini_shell
prompt$ls -la
total 176
drwxr-xr-x 1 root root   512 Apr 13 10:37 .
drwxr-xr-x 1 root root   512 Apr  6 13:07 ..
drwxr-xr-x 1 root root   512 Apr  6 13:07 .vscode
-rw-r--r-- 1 root root   465 Apr  6 13:07 _fgets.c
-rw-r--r-- 1 root root   901 Apr 11 14:05 aux_functions.c
-rw-r--r-- 1 root root  1509 Apr 11 16:14 aux_prueba.c
-rw-r--r-- 1 root root  2023 Apr 13 09:43 enviroment.c
-rw-r--r-- 1 root root  1546 Apr 12 15:49 errors.c
-rw-r--r-- 1 root root  1054 Apr 11 15:16 fork.c
-rw-r--r-- 1 root root   213 Apr 11 12:48 free_doble.c
-rw-r--r-- 1 root root  1024 Apr 13 09:56 holberton.h
-rwxr-xr-x 1 root root 22264 Apr 13 10:37 hsh
-rwxr-xr-x 1 root root 17504 Apr  9 09:56 laquees
-rwxr-xr-x 1 root root 22272 Apr 12 09:45 prompt
-rwxr-xr-x 1 root root 17224 Apr  6 15:35 prompt2
-rwxr-xr-x 1 root root 17296 Apr  7 16:12 promt2
-rw-r--r-- 1 root root   973 Apr 13 10:36 promt2.c
-rw-r--r-- 1 root root  1591 Apr 13 09:56 string_functions.c
-rwxr-xr-x 1 root root 17296 Apr  7 11:52 test
-rw-r--r-- 1 root root    17 Apr 12 15:49 test_ls_2
-rw-r--r-- 1 root root     8 Apr 11 12:48 text
-rw-r--r-- 1 root root   965 Apr 11 12:48 tokenize_functions.c
-rw-r--r-- 1 root root   890 Apr  6 16:36 tokenz.c
prompt$
```
## Authors 🤔
*  [**Carolina Ramón**](https://github.com/caramonp)

*  [**Juan Camilo Cadavid**](https://github.com/Juansu01)
