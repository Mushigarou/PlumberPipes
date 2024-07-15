# PlumberPipes
## Usage
PlumberPipes rebuilds shell pipes and redirections in C, using `pipe`, `fork`, `dup2` and `execve`.

Two commands:
```
 make
 ./pipex infile cmd_1 cmd_2 outfile
 ```
 
Any number of commands (`make bonus`):
```
 make
 ./pipex infile cmd_1 ... cmd_n outfile
 ```
 
The program supports heredocument too, here is the syntax that should be given to the program :
```
 ./pipex here_doc DELIMITER cmd_1 ... cmd_n outfile
 ```
 
With two commands, I create one pipe (pipe(2)) to communicate between the two child processes. Then, i forked (fork(2)) twice in the parent process, and i wait for the child processes before returning zero upon successful completion.

Making a command write its output in the pipe, instead of STDOUT_FILENO, is done by using the dup2(2) function.
## Visualisation On How To Handle A Single Pipe :
![Page_2_3](https://user-images.githubusercontent.com/115739322/226490616-32166bc2-e2c7-4d64-a587-e4fed3b45c85.png)

## Multiple Pipes and Here-doc
The extended version handles any number of pipes, and `<<` / `>>` when the first argument is "here_doc".

### This command:
```
 ./pipex file1 cmd1 cmd2 cmd3 ... cmdn file2
 ```
 
Should behave like :
```
 < file1 cmd1 | cmd2 | cmd3 ... | cmdn > file2
 ```
### And this :

```
 ./pipex here_doc LIMITER cmd cmd1 file
 ```
Should behave like
```
$> cmd << LIMITER | cmd1 >> file
```
## Visualisation On How To Handle Multiple Pipes :
![Page_1_4](https://user-images.githubusercontent.com/115739322/227705339-e15003c5-fde2-4436-98b3-8912e3870d32.png)

This project is licensed under the MIT license
