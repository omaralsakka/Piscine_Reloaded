/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oabdelfa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 14:47:34 by oabdelfa          #+#    #+#             */
/*   Updated: 2021/10/28 15:21:22 by oabdelfa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	result = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		result[i] = min;
		i++;
		min++;
	}
	return (result);
}
