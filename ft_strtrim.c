/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraf <mgraf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 14:02:45 by mgraf             #+#    #+#             */
/*   Updated: 2022/12/16 12:18:38 by mgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in_set(char c, char *set)
{
	int	i;

	if (c)
	{
		i = 0;
		while (*set)
		{
			if (*set == c)
				return (1);
			set++;
		}
	}
	return (0);
}

static int	ft_is_start(char *s1, char *set)
{
	int	pos;

	pos = 0;
	while (ft_is_in_set(s1[pos], set))
		pos++;
	return (pos);
}

static int	ft_is_end(char *s1, char *set)
{
	int	len;

	len = (int)ft_strlen(s1);
	if (len > 0)
	{
		while (ft_is_in_set(s1[len - 1], set))
		{
			len--;
			if (len == 0)
				break ;
		}
	}
	return (len);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		s_pos;
	int		e_pos;

	s_pos = ft_is_start((char *)s1, (char *)set);
	e_pos = ft_is_end((char *)s1, (char *)set);
	if (e_pos <= s_pos)
	{
		e_pos = 0;
		s_pos = 0;
	}
	trimmed = ft_substr(s1, s_pos, e_pos - s_pos);
	return (trimmed);
}
// #include <stdio.h>
// int main (void)
// {
// char *s1 = "   am et     "; 
// char *set = " et";
//   printf("String: '%s'\n", s1);
//   printf("String: '%s'\n", ft_strtrim(s1, set));
//   return 0;
// }
