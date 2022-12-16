/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraf <mgraf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 14:27:42 by mgraf             #+#    #+#             */
/*   Updated: 2022/12/12 18:57:51 by mgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*joined;
	size_t	i;
	size_t	j;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined = ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (!joined)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		joined[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		joined[i + j] = s2[j];
		j++;
	}
	return (joined);
}

// int main()
// {
// 	char	s1[] = "lorem ipsum";
// 	char	s2[] = "dolor sit amet";
// 	printf("String: %s\n", (ft_strjoin(s1, s2)));	
// }
