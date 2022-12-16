/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraf <mgraf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:21:55 by mgraf             #+#    #+#             */
/*   Updated: 2022/12/10 19:52:44 by mgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == 0)
		return ((char *)big);
	if (*big == 0)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && (j + i < len))
			{
				j++;
				if (little[j] == '\0')
					return ((char *)&big[i]);
				if (big[i] == '\0')
					break ;
			}
		}
		i++;
	}
	return (NULL);
}
