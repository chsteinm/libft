#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *begin_new;
    t_list  *new;
    t_list  *last;

    new = ft_lstnew((*f)(lst->content));
    if (!new)
        return (NULL);
    begin_new = new;
    while (lst->next)
    {
        last = new;
        new = ft_lstnew((*f)(lst->next->content));
        if (!new)
        {
            ft_lstclear(&begin_new, del);
            break;
        }
        last->next = new;
        lst = lst->next;
    }
    return (begin_new);
}