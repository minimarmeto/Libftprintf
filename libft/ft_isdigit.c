/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 17:14:37 by dgomez-b          #+#    #+#             */
/*   Updated: 2021/10/18 16:16:50 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************* LIBRERIAS ******************************** */

#include "libft.h"

/* ******************************* FUNCIONES ******************************** */

int	ft_isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
