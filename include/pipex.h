#ifndef PIPEX_H
# define PIPEX_H

// **	Libft header
#include "../Libft/libft.h"
// **	get_next_line()
#include "../Libft/get_next_line.h"
// **	ft_printf()
#include "../Libft/ft_printf.h"
// **	exit(), malloc(), free()
#include <stdlib.h>
// **	sterror(), perror()
#include <stdio.h>
// **	read(), write(), close(), access(), dup(), dup2(), execve(), fork(), pipe(), unlink()
#include <unistd.h>
// **	open()
#include <fcntl.h>
// **	wait(), waitpid()
#include <sys/wait.h>
// ** Errno global variable
#include <errno.h>

// ** Get PATH variable from the environment
char *path_is(char **env, char *cmd);
// ** Print a message
void p(char *file, int line, int msg);
// **	free memory allocated
void free_st(char **split, int not_this_one);

#endif // PIPEX_H
