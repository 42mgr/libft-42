/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraf <mgraf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 14:45:33 by mgraf             #+#    #+#             */
/*   Updated: 2022/12/12 18:32:05 by mgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	while (str[i] != (unsigned char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	if (i <= ft_strlen(str))
		return ((char *)&str[i]);
	return (NULL);
}
// int main(){
// 	char str[] = "bonjour";
// 	printf("String: '%s'\n", ft_strrchr(str, 's'));
// }
