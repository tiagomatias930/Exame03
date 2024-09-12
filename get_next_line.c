#include <unistd.h>
#include <stdlib.h>

#ifndef BUZZER_SIZE_H
# define BUZZER_SIZE 42
#endif

int	ft_strlen(char *string)
{
	int	index;

	index = 0;
	while (string[index] != '\0')
		index++;
	return (index);
}

char	*ft_str_duplicate(char *string)
{
	int		index;
	int		length;
	char	*duplicate;

	length = ft_strlen(string);
	index = 0;
	duplicate = (char *)malloc(sizeof(char) * length + 1);
	if (!duplicate)
		return (NULL);
	while (string[index] != '\0')
	{
		duplicate[index] = string[index];
		index++;
	}
	duplicate[index] = '\0';
	return (duplicate);
}

char	*get_next_line(int fd)
{
	static	char chr [BUZZER_SIZE];
	char	str[7000000];
	static	int 	b_posi;
	static	int	b_size;
	int	i;

	i = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	while (1)
	{
		if (b_posi >= b_size)
		{
			b_size = read(fd, chr, BUFFER_SIZE);
			b_posi = 0;
			if (b_size <= 0)
				break ;
		}
		str[i++] = chr[b_posi++];
		if (str[i - 1] == '\n')
			break ;
	}
	str[i] = '\0';
	if (i == 0)
		return (NULL);
	return (ft_str_duplicate(str));
}
