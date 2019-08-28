# Simple Shell
### Overview
Coded in C, our simple shell was designed to take after the `sh` UNIX command line interpreter. It replicates the core basic functionalities of 'sh' although some functionality may be missing or not fully functional in our version.
### Installation
Clone the repository to your terminal in your desired working directory. To clone the repository, run the following command into your command line:
`git clone <url of repo>'
### Getting started
Once you have cloned the repo, compile all files using this command:
`gcc *.c`
For better results, add in the following flags to your gcc command: -Wall, -Werror, -Wetra, -pedantic. The command should look like the following command:
`gcc -Wall -Werror -Wextra -pedantic *.c`
Feel free to turn on the `-o` flag followed by your desired name for the output executable file. If opted out of `-o` flag, the output file will be `a.out`.
### Usage
After compilation, the program may be ran either interactively or non-interactively.
* Interactive mode is ran by running the program in your terminal. To run it, command will be:
`./a.out`
The prompt should print out onto the terminal shortly after launching. In the case of our shell, the prompt will be:
`MAY THE FORCE BE WITH YOU$ `
To exit, simply type in `exit`.
* Non-interactive mode may be ran by piping the command into the program like so:
`echo ls | ./a.out`
After executing the command, the program will exit.
### Built-Ins
 Command | Description
---------|-------------
 env     | Print environment list
### Examples
* Interactive without direct path
```
MAY THE FORCE BE WITH YOU$ ls
0x15    _fork.c     print_funcs.c  README.md     string_funcs.c
```
* Interactive with direct path
```
MAY THE FORCE BE WITH YOU$ /bin/ls
0x15    _fork.c     print_funcs.c  README.md     string_funcs.c
```
* Non-interactive without direct path
```
$ echo ls | a.out
#README.md#  _env.c    _pathoma.c     prompter.c    string_funcs.c
```
* Interactive without direct path including flags
```
MAY THE FORCE BE WITH YOU$ ls -l
total 68
-rw-rw-r-- 1 vagrant vagrant   255 Aug 28 06:07 _env.c
-rw-rw-r-- 1 vagrant vagrant   481 Aug 28 08:13 _fork.c
```
### Release History
* 0.1.0 - First release - 29 Aug 2019
## Authors
*[Hanh Nguyen](https://github.com/hanhuyeny2k)
*[Alia Vang](https://github.com/aliavang)
## Acknowledgments
All the people who helped us build our shell! :blush: