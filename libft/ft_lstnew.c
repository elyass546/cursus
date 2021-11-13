/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:24:27 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/13 01:24:35 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ptr;

	ptr = (t_list *)malloc(sizeof(t_list));
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
/*
 int main(void)
{
     t_list *l =  ft_lstnew((void*)"42");
     printf("%s\n", (char *)l->content);
}*/
