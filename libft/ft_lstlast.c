/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:22:20 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/13 01:23:17 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list	*lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (0);
}
// int main(void)
// {
// 	t_list *lst = ft_lstnew("78");
//      ft_lstadd_front(&lst, ft_lstnew("56"));
//      ft_lstadd_front(&lst, ft_lstnew("34"));
// 	 ft_lstadd_front(&lst, ft_lstnew("12"));
//     t_list *i = ft_lstlast(lst);
//     puts(i->content);
// }
