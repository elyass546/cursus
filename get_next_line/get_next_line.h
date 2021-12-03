/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:30:46 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/30 16:30:48 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define NOULL NULL
# include <stdlib.h>
# include <unistd.h>

char	*ft_substr(char *s, int start, int len);
char	*ft_strchr(char *haystack, int needle);
char	*ft_strjoin(char *s1, char *s2);
char	*get_next_line(int fd);
size_t	ft_strlen(char	*str);
char	*ft_strdup(char *src);
void	myfree(char	**str);

#endif
