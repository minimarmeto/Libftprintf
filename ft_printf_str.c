/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 15:31:55 by dgomez-b          #+#    #+#             */
/*   Updated: 2022/02/10 17:25:33 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************** LIBRARIES ******************************* */

#include "ft_printf.h"

/* ******************************** FUNCTIONS ******************************* */

char	*ft_printf_str(char *s)
{
	if (!s)
		return (ft_strdup("(null)"));
	return (ft_strdup(s));
}
