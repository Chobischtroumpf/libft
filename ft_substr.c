/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adorigo <adorigo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 15:55:21 by adorigo           #+#    #+#             */
/*   Updated: 2019/10/22 15:32:26 by adorigo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *scpy;

	if (ft_strlen(s) < start)
	{
		if (!(scpy = malloc(len + 1)))
			return (NULL);
		scpy[0] = '\0';
		return (scpy);
	}
	if (s)
	{
		scpy = ft_strndup(&s[start], len);
		return (scpy);
	}
	else
		return (NULL);
}
