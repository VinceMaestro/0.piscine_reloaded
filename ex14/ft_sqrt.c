/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpetit <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 19:57:17 by vpetit            #+#    #+#             */
/*   Updated: 2016/11/07 19:57:20 by vpetit           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		a;

	a = 0;
	if (nb < 0)
	{
		return (0);
	}
	while (a * a < nb)
	{
		a += 1;
	}
	if (a * a == nb)
	{
		return (a);
	}
	else
	{
		return (0);
	}
}
