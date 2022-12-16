/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraf <mgraf@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:21:23 by mgraf             #+#    #+#             */
/*   Updated: 2022/12/12 16:40:16 by mgraf            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	i;

	dstlen = ft_strlen(dst);
	i = dstlen;
	while (src[i - dstlen] && (i + 1) < size)
	{
		dst[i] = src[i - dstlen];
		i++;
	}
	if (dstlen < size)
		dst[i] = '\0';
	if (size < dstlen)
		return (size + ft_strlen(src));
	else
		return (dstlen + ft_strlen(src));
}
//https://linux.die.net/man/3/strlcat
