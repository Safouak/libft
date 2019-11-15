/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souakrim <souakrim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/21 14:23:32 by souakrim          #+#    #+#             */
/*   Updated: 2017/11/21 14:23:39 by souakrim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int nb)
{
	if (nb < 0 && nb != -2147483648)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else if (nb >= 0 && nb <= 9)
		ft_putchar('0' + nb);
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}