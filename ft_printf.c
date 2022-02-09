/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgomez-b <dgomez-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 12:58:17 by dgomez-b          #+#    #+#             */
/*   Updated: 2022/02/09 13:39:33 by dgomez-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ******************************** LIBRARIES ******************************* */

#include "ft_printf.h"

/* ******************************** FUNCTIONS ******************************* */

static char	*ft_substrc(const char *s, char c)
{
	int	i;

	if (!s)
		return (0);
	if (!c)
		return (ft_strdup(s));
	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (ft_substr(s, 0, i));
}

static int	ft_printf_write(const char *s, va_list list)
{
	char	**args;
	int		pos;
	int		cant;
	int		i;
	
	if (!s)
		return ;
	pos = 0;
	cant = 0;
	i = 0;
	args = ft_args(s, list);
	while(s[pos])
	{
		if (s[pos] != '%')
			i += write(1, s + pos, 1);
		else
		{
			i += write(1, args[cant], ft_strlen(args[cant]));
			free(args[cant]);
			pos++;
			cant++;
		}
		pos++;
	}
	free(args);
	return (i);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;

	i = 0;
	if (!s)
		return (i);
	va_start(list, s);
	i = ft_printf_write(s, list);
	va_end(list);
	return (i);
}
