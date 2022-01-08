/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:54:05 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/10/29 14:30:59 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	let;

	i = 1;
	let = 0;
	while (argc != 1)
	{
		while (argv[i][let])
		{
			ft_putchar(argv[i][let]);
			let++;
		}
		ft_putchar('\n');
		i++;
		let = 0;
		argc--;
	}
	return (0);
}
