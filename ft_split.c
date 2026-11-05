/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aait-abd <aait-abd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 22:38:43 by aait-abd          #+#    #+#             */
/*   Updated: 2026/11/05 02:13:44 by aait-abd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
	}
	return (count);
}

static void	ft_free_words(char **arr, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static char	*ft_get_word(char const *s, size_t start, size_t len)
{
	char	*word;

	word = malloc(len + 1);
	if (word == NULL)
		return (NULL);
	ft_memcpy(word, s + start, len);
	word[len] = '\0';
	return (word);
}

static int	ft_fill_arr(char **arr, char const *s, char c, size_t words)
{
	size_t	i;
	size_t	start;
	size_t	len;

	i = 0;
	start = 0;
	while (i < words)
	{
		while (s[start] == c)
			start++;
		if (s[start] != '\0')
		{
			len = 0;
			while (s[start + len] != '\0' && s[start + len] != c)
				len++;
			arr[i] = ft_get_word(s, start, len);
			if (arr[i] == NULL)
			{
				ft_free_words(arr, i);
				return (0);
			}
			start += len;
			i++;
		}
	}
	arr[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = ft_count_words(s, c);
	arr = malloc((words + 1) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	if (!ft_fill_arr(arr, s, c, words))
		return (NULL);
	return (arr);
}