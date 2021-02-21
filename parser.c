//
// Created by Violet Furr on 2/21/21.
//
#include "lib.h"
//#include "get_next_line.h"

void make_map(t_list **head, int size)
{
	char **map = ft_calloc(size + 1, sizeof(char *));
	int i = -1;
	t_list *tmp = *head;

	while (tmp)
	{
		map[++i] = tmp->content;
		tmp = tmp->next;
	}
	i = -1;
	while (map[++i])
	{
		ft_putendl(map[i]);
	}
}

int main(int argc, char **argv)
{
	int fd = open("/Users/vfurr/workplace/cub3d/map.cub", O_RDONLY);
	char *line = NULL;
	t_list *head = NULL;

	while (get_next_line(fd, &line))
	{
		ft_lstadd_back (&head, ft_lstnew(line));
	}
	ft_lstadd_back (&head, ft_lstnew(line));
	make_map(&head, ft_lstsize(head));
}
