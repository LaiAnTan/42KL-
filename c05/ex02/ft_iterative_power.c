/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlai-an <tlai-an@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 09:04:36 by tlai-an           #+#    #+#             */
/*   Updated: 2022/06/07 09:04:36 by tlai-an          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int n;
	int val;

	n = 0;
	val = nb;
	if (nb == 0 && power == 0)
		return (1);
	if (power < 0)
		return (0);
	while (++n < power)
		val *= nb;
	return (val);
}

int main()
{
	printf("power: %d\n", ft_iterative_power(2, 4));
	return 0;
}