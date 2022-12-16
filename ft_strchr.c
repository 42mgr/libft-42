/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraf <mgraf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:21:15 by mgraf             #+#    #+#             */
/*   Updated: 2022/12/12 15:12:54 by mgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	int		found;

	i = 0;
	found = 1;
	while (str[i] != (char)c)
	{
		if (i == ft_strlen(str))
		{
			found = 0;
			break ;
		}
		i++;
	}
	if (i <= ft_strlen(str) && found)
		return ((char *)&str[i]);
	return (NULL);
}

// int main()
// {
// 	char *str = "bonjour";
// 	printf("String: '%s'\n", ft_strchr(str, 's'));
// }
