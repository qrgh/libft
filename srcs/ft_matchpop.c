/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matchpop.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgoeminn <cgoeminn@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/05 17:11:34 by cgoeminn          #+#    #+#             */
/*   Updated: 2015/01/05 17:11:34 by cgoeminn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void	ft_erase(char *str, size_t len)
{
	while (*str && len)
	{
		*str = ' ';
		++str;
		--len;
	}
}

static int	ft_word_count(const char *s, const char *m)
{
	int		i;
	size_t	size;

	i = 0;
	while (*s)
	{
		if ((size = ft_matchlen(s, m)) > 0)
		{
			++i;
			s += size;
		}
		else
			++s;
	}
	return (i);
}

char		**ft_matchpop(char *str, const char *match)
{
	char	**tab;
	int		size;
	int		tab_i;

	size = (str ? ft_word_count(str, match) + 1 : 0);
	tab = (char**)malloc(sizeof(char*) * size);
	if (!tab)
		return (NULL);
	tab_i = 0;
	while (*str)
	{
		if ((size = ft_matchlen(str, match)) > 0)
		{
			tab[tab_i++] = ft_strsub(str, 0, size);
			ft_erase(str, size);
			str += size;
		}
		else
			++str;
	}
	tab[tab_i] = NULL;
	return (tab);
}
