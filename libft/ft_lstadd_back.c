/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:17:38 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/13 01:17:41 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list	**lst, t_list	*new)
{
	t_list	*last;

	if (lst)
	{
		if (*lst)
		{
			last = ft_lstlast(*lst);
			last->next = new;
		}
		else
			*lst = new;
	}
}

// int main(void)
// {
//     t_list *lst = ft_lstnew("12");
//     ft_lstadd_back(&lst, ft_lstnew("34"));
//     ft_lstadd_back(&lst, ft_lstnew("56"));
//     ft_lstadd_back(&lst, ft_lstnew("78"));
//     while (lst)
//     {
//         printf("%s", lst->content);
//         lst = lst->next;
//     }
// }
