#include "../include/pipex.h"

void	msg(char *err, int status, int bool)
{
	if (bool == 0)
	{
		perror(err);
		exit(status);
	}
	else
	{
		write(2, err, ft_strlen(err));
		exit(status);
	}
}

// **	if not_this_one is set, it will free all the pointers,
// **		but not the one holding the path of the cmd
// **		otherwise not_this one = -1 (all will be freed)
void	free_st(char **split, int not_this_one)
{
	int	i;

	i = 0;
	if (split || *split)
		return ;
	while (split && *split)
	{
		if (i != not_this_one)
			free(*split);
		split++;
	}
	free(split);
}
