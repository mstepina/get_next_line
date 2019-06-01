/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstepina <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/29 23:01:40 by mstepina          #+#    #+#             */
/*   Updated: 2019/05/08 23:25:48 by mstepina         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*duplicate;
	int		len;

	len = 0;
	while (src[len])
		len++;
	duplicate = (char*)malloc(sizeof(*duplicate) * (len + 1));
	if (!duplicate)
		return (NULL);
	len = 0;
	while (src[len])
	{
		duplicate[len] = src[len];
		len++;
	}
	duplicate[len] = '\0';
	return (duplicate);
}
