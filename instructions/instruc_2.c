/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instruc_2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 14:45:15 by marvin            #+#    #+#             */
/*   Updated: 2024/12/16 13:45:57 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(int *tab_a, int size_a)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = tab_a[0];
	while (i < size_a - 1)
	{
		tab_a[i] = tab_a[i + 1];
		i++;
	}
	tab_a[size_a - 1] = tmp;
	write(1, "ra\n", 3);
}

void	rb(int *tab_b, int size_b)
{
	int	i;
	int	tmp;

	i = 0;
	tmp = tab_b[0];
	while (i < size_b - 1)
	{
		tab_b[i] = tab_b[i + 1];
		i++;
	}
	tab_b[size_b - 1] = tmp;
	write(1, "rb\n", 3);
}

void	rr(int *tab_a, int *tab_b, int size_a, int size_b)
{
	ra(tab_a, size_a);
	rb(tab_b, size_b);
	write(1, "rr\n", 3);
}

void	rra(int *tab_a, int size_a)
{
	int	i;
	int	tmp;

	i = size_a - 2;
	tmp = tab_a[size_a - 1];
	while (i >= 0)
	{
		tab_a[i + 1] = tab_a[i];
		i--;
	}
	tab_a[0] = tmp;
	write(1, "rra\n", 4);
}

void	rrb(int *tab_b, int size_b)
{
	int	i;
	int	tmp;

	i = size_b - 2;
	tmp = tab_b[size_b - 1];
	while (i >= 0)
	{
		tab_b[i + 1] = tab_b[i];
		i--;
	}
	tab_b[0] = tmp;
	write(1, "rrb\n", 4);
}
