#include "libft.h"

// int main(int ac, char **av)
// {
// 	char c[] = "HADDANI";
// 	char *cc = " MOMO";
// 	char *s = ft_strlcat(c, cc, 10);
	
// 	printf("%s\n", s);
// 	printf("%zu\n", ft_strlcat(c, cc, 2));
// 	return 0;
// }

int main() {
	int i = 0;
	char *s = "My food list";
	t_list *fooddlist;

	fooddlist = NULL;
	char *banana = "banana";
	char *tffa7a = "tffa7a";
	char *bo3wida = "bo3wida";
	char *br9ou9a = "br9ou9a";
	char *formaja = "formaja";

	fooddlist = ft_lstnew(s, 13);

	size_t	pos_banana = ft_lstpush(&fooddlist, ft_lstnew(banana, 6));
	size_t	pos_tffa7a = ft_lstpush(&fooddlist, ft_lstnew(tffa7a, 6));
	size_t	pos_br9ou9a = ft_lstpush(&fooddlist, ft_lstnew(br9ou9a, 7));
	size_t	pos_formaja = ft_lstpush(&fooddlist, ft_lstnew(formaja, 7));

	t_list *ptr;
	ptr = fooddlist;
	while (ptr)
	{
		ft_putstr((char*)ptr->content);
		ft_putchar('\t');
		ft_putnbr(ptr->content_size);
		ft_putchar('\n');
		ptr = ptr->next;
	}
	ft_putstr("\n~~~~~~~~~~~~~~~~~~\n");
	ft_lstpushto(&fooddlist, ft_lstnew("tiktok",6), 0);

	ptr = fooddlist;
	while (ptr)
	{
		ft_putstr((char*)ptr->content);
		ft_putchar('\t');
		ft_putnbr(ptr->content_size);
		ft_putchar('\n');
		ptr = ptr->next;
	}



	/*
	printf("banana\t%zu\n", pos_banana);
	printf("tffa7a\t%zu\n", pos_tffa7a);
	//printf("bo3wida\t%zu\n", pos_bo3wida);
	printf("br9ou9a\t%zu\n", pos_br9ou9a);
	printf("formaja\t%zu\n\n", pos_formaja);

	printf("%zu\n", ft_lstlen(&fooddlist));
	
	printf("bo3wida\t%zu\n\n", ft_lstpushto(&fooddlist, ft_lstnew(bo3wida, 4), 3));

	printf("%zu", ft_lstlen(&fooddlist));
*/
	return 0;
}