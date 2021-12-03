/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:30:55 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/30 16:30:57 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# define NOULL NULL
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_substr(char *s, int start, int len);
char	*ft_strchr(char *haystack, int needle);
char	*ft_strjoin(char *s1, char *s2);
size_t	ft_strlen(char	*str);
char	*ft_strdup(char *src);
char	*salam(char *str);
void	myfree(char	**s);

#endif
