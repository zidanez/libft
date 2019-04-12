/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnancy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 15:31:48 by fnancy            #+#    #+#             */
/*   Updated: 2019/04/12 15:31:48 by fnancy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*res;
	char	*r;

	if (!(res = (char *)malloc(sizeof(char) * ft_strlen(s))))
		return (NULL);
	else
	{
		r = res;
		while (*s)
		{
			*res = f(*s);
			s++;
			res++;
		}
	}
	return (r);
}
