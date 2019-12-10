/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arumpler <arumpler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/12 01:41:17 by hugoklein         #+#    #+#             */
/*   Updated: 2019/04/27 19:24:00 by arumpler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printhex(int nb)
{
	if (nb >= 16)
		ft_printhex(nb / 16);
	if ((nb % 16) < 10)
		ft_putchar((nb % 16) + '0');
	else
		ft_putchar((nb % 16) - 10 + 'a');
}
