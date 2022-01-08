/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 18:58:23 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/10/29 18:29:05 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 4096

void	ft_display_file(char *fl)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	fd = open(fl, O_RDONLY);
	if (fd == -1)
		return ;
	ret = read(fd, buf, BUF_SIZE);
	while (ret > 0)
	{
		write(1, &buf, ret);
		ret = read(fd, buf, BUF_SIZE);
	}
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	ft_display_file(argv[1]);
	return (0);
}
