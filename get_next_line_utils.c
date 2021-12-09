/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 10:54:21 by jwilliam          #+#    #+#             */
/*   Updated: 2021/11/04 14:23:10 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"get_next_line.h"

/*
Creates a substring from the input string, starting from the position in the 
string defined by start and up to the amount of characters defined in len. 
Returns the substring created.
*/
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*str;
	size_t				sindex;
	size_t				strindex;

	sindex = 0;
	strindex = 0;
	str = (char *)malloc((len + 1) * sizeof(*s));
	if (!str)
		return (NULL);
	while (s[sindex] != '\0')
	{
		if (sindex >= start && strindex < len)
		{
			str[strindex] = s[sindex];
			strindex++;
		}
		sindex++;
	}
	str[strindex] = '\0';
	return (str);
}

/*
Finds the first occurence of c in the string. If found, returns a pointer to
the first occurence of c within the string or returns NULL if no match was 
found.
*/
char	*ft_strchr(const char *str, int c)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] == c)
			return ((char *)str + index);
		index++;
	}
	if (c == '\0')
		return ((char *)str + index);
	return (NULL);
}

/*
Gets the length of a string passed to the function, returns the length of the 
string including the '\0'.
*/
int	ft_strlen(const char *str)
{
	int		index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

/*
Allocates memory to a new string and duplicates an existing string to the
newly allocated string. Returns the new string created in the function.
*/
char	*ft_strdup(const char *str)
{
	char		*ptr;
	int			len;
	int			index;

	len = ft_strlen(str);
	ptr = (char *)malloc((len + 1) * sizeof(*str));
	if (!ptr)
		return (NULL);
	index = 0;
	while (index < len)
	{
		ptr[index] = str[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}

/*
Takes one string and appends another string to create a newly combined string.
First allocates memory to create a new string of the combined length of s1 and 
s2. Use s1 as source string, s2 as the string to append to the source string. 
Returns the combined string.
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*str;
	int			index1;
	int			index2;

	index1 = 0;
	index2 = 0;
	str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) + 1 * sizeof(char));
	if (!str)
		return (NULL);
	while (s1[index1] != '\0')
		str[index2++] = s1[index1++];
	index1 = 0;
	while (s2[index1] != '\0')
		str[index2++] = s2[index1++];
	str[index2] = '\0';
	return (str);
}
