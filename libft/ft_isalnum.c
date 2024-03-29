/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sivinska <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/14 12:46:30 by sivinska          #+#    #+#             */
/*   Updated: 2017/11/15 16:49:15 by sivinska         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c < 48)
		return (0);
	if (c > 57 && c < 65)
		return (0);
	if (c > 90 && c < 97)
		return (0);
	if (c > 122)
		return (0);
	else
		return (1);
}
