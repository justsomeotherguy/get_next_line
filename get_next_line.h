/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwilliam <jwilliam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:00:19 by jwilliam          #+#    #+#             */
/*   Updated: 2021/11/02 14:22:49 by jwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include	<unistd.h>
# include	<stdlib.h>

char		*get_next_line(int fd);

int			ft_strlen(const char *str);

char		*ft_strdup(const char *str);

char		*ft_strjoin(char const *s1, char const *s2);

char		*ft_strchr(const char *str, int c);

char		*ft_substr(char const *s, unsigned int start, size_t len);

#endif
