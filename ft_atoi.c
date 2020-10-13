/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 09:15:01 by adorigo           #+#    #+#             */
/*   Updated: 2020/08/05 14:55:00 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define MIN_INT -2147483648
#define MAX_INT 2147483647

/*
**	the checker(const char **str) function will skip any whitespace characters
**	and as soon as it reaches a non-whitespace character, it will check whether
**	the non-whitespace character is a minus or not, if it is, it will set the
** is_negative variable to 1 and return it
*/

static int	checker(const char **str)
{
	int is_negative;

	while (**str == ' ' || **str == '\t' || **str == '\n'
			|| **str == '\v' || **str == '\f' || **str == '\r')
		(*str)++;
	is_negative = 0;
	if (**str == '-' || **str == '+')
	{
		if (**str == '-')
			is_negative = 1;
		(*str)++;
	}
	return (is_negative);
}

/*
**	ft_atoi(const char *str) is the school42 implementation of the atoi
**	function, it takes a char* as first and only argument, and returns the
**	string transformed into an int
*/

int			ft_atoi(const char *str)
{
	long			nb;
	int				i;
	int				is_negative;

	is_negative = checker(&str);
	i = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (!is_negative && nb > (unsigned int)MAX_INT)
			return (-1);
		else if (nb > (unsigned int)MIN_INT)
			return (0);
		nb *= 10;
		nb += str[i] - '0';
		i++;
	}
	if (is_negative)
		return (-nb);
	else
		return (nb);
}
