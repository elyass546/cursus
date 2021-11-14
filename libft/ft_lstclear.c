/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:54:08 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/13 18:52:34 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list	**lst, void (*del)(void *))
{
	int	i;

	i = 0;
	if (!del || !lst || !*lst)
		return ;
	while (lst[i])
	{
		del(lst[i]->content);
		free(lst[i]);
		lst[i] = lst[i]->next;
	}
}

// void    ft_lstclear(t_list **lst, void (*del)(void*))
// {
//     int    i;

//     i = 0;
//     if (!lst || !del || !*lst)
//         return ;
//     while (lst[i])
//     {
//         ft_lstdelone(lst , del);
//			free(lst[i]);
//         lst[i] = lst[i]->next;
//     }
//     lst = NULL;
// }

/*
int   main()
{
	t_list *lst1 = ft_lstnew("salam");
	t_list *lst2 = 
	t_list *lst3
	ft_lstadd_front(&lst, ft_lstnew("56"));
    ft_lstadd_front(&lst, ft_lstnew("34"));
 	ft_lstadd_front(&lst, ft_lstnew("12"));	
}*/
