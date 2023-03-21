#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define NULL_CHAR 1

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <limits.h>

char	*get_next_line_gnl(int fd);
char	*ft_strchr_gnl(const char *s, int c);
char	*ft_strdup_gnl(const char *s1);
size_t	ft_strlen_gnl(const char *s);
char	*ft_strcat_gnl(char *s1, char *s2, char *str, size_t len);
char	*ft_strjoin_gnl(char *s1, char *s2);

#endif // GET_NEXT_LINE_H
