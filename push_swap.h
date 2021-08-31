#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

void	push_swap(t_list **head_a, t_list **head_b, int ac);
void	handle_reverse_rotate(char *spec, t_list **head_a, t_list **head_b);
void	handle_rotate(char *spec, t_list **head_a, t_list **head_b);
void	handle_push(char *spec, t_list **head_a, t_list **head_b);
void	handle_swap(char *spec, t_list **head_a, t_list **head_b);
void	print_stacks(t_list *a, t_list *b);
int		is_sorted(t_list *head);

void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);

#endif
