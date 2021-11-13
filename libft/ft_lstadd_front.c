/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:20:51 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/11/13 16:04:00 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list	**lst, t_list	*new)
{
	new->next = *lst;
	*lst = new;
}

// int main(void)
// {
// 	t_list *lst = ft_lstnew("78");
//      ft_lstadd_front(&lst, ft_lstnew("56"));
//      ft_lstadd_front(&lst, ft_lstnew("34"));
// 	 ft_lstadd_front(&lst, ft_lstnew("12"));
//      while (lst)
//      {
//          printf("%s", lst->content);
//          lst = lst->next;
//      }
// }
