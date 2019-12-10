/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hklein <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 12:40:29 by hklein            #+#    #+#             */
/*   Updated: 2019/02/18 15:47:44 by hklein           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((i == 0 && str[i] >= 97 && str[i] <= 122) || (((str[i - 1] <= 47)
			|| (str[i - 1] >= 58 && str[i - 1] <= 64))
			&& (str[i] >= 97 && str[i] <= 122)))
		{
			str[i] = str[i] - 32;
		}
		if ((str[i] >= 65 && str[i] <= 90) && ((str[i - 1] >= 48
			&& str[i - 1] <= 57) || (str[i - 1] >= 65 && str[i - 1] <= 122)))
		{
			str[i] = (str[i] + 32);
		}
		i++;
	}
	return (str);
}
