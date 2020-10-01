/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chcampet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/09 16:18:48 by chcampet          #+#    #+#             */
/*   Updated: 2020/09/09 18:41:12 by chcampet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int i;

	i = 0;
	while (i < --size)
		ft_swap(&tab[i++], &tab[size]);
}