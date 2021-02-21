# include <sys/types.h>
# include <string.h>
# include <sys/uio.h>
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
//# include "libft1/libft.h"
# include "get_next_line.h"

typedef struct	s_list
{
    void			*content;
    size_t			content_size;
    struct s_list	*next;
}				t_list;

void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_putchar(char c);
void		ft_putstr(char  *str);
void	ft_putendl(char *s);
void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
void	*ft_calloc(size_t count, size_t size);