#include "pipex.h"

int	main(int ac, char **av, char **env)
{
	int	fd[ac-4][2];
	int	i;
	int stat;
	int	pid;
	
	stat = 0;
	i = 0;
	pid = 0;
	if (ac < 5 || !av || !(*av) || !env || !(*env))
			msg(" <./ pipex > <infile><cmd_1>...<cmd_n><outfile>", 1);
	while (i < ac - 4)
	{	
		if (pipe(fd[i]))
			{perror("pipe");exit(1);}
		i++;
	}
	i = 0;
	while (i < ac - 3)
	{
		pid = fork();
		if (pid == 0)
		{
			if (i == 0)
				first_cmd(av, env, fd[i]);
			else if (i == ac-4)
				last_cmd(ac, av, env, fd[i-1]);
			else
				middle_cmd(av[i+2], env);
			exit(1);
		}
		if (i < ac - 4)
		{
			ft_dup2(fd[i][0], STDIN_FILENO);
			close(fd[i][0]);
			ft_dup2(fd[i+1][1], STDOUT_FILENO);
			close(fd[i][1]);
		}
		i++;
	}
	wait(&stat);
	if(WIFEXITED(stat))
		{stat = WEXITSTATUS(stat);if (stat != 0) exit(stat);}
	return 0;
}
