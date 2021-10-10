#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

# define A 0
# define B 1

typedef struct s_list
{
	int				content;
	struct s_list	*next;
}				t_list;

void	push_swap(t_list **head_a, t_list **head_b);
void	handle_reverse_rotate(t_list **head, int stack);
void	handle_rotate(t_list **head, int stack);
void	handle_push(t_list **head_a, t_list **head_b, int stack);
void	handle_swap(t_list **head, int stack);

void	case_3(t_list **head, int stack);
void	case_5(t_list **head_a, t_list **head_b);
void	case_500(t_list **head_a, t_list **head_b);

int		push_smaller(t_list **head_a, t_list **head_b, int apex);
void	handle_chunk(t_list	**head_a, t_list **head_b, int start, int end);
void	quick_sort(int *arr, int low, int high);
void	print_stacks(t_list *head_a, t_list *head_b);
int		is_sorted(t_list *head);
int		min_idx(t_list *head);
int		max_idx(t_list *head);
int		min(t_list *head);
int		max(t_list *head);
int		list_len(t_list *head);
int		get_idx(t_list *head, int val);
int		get_content(t_list *head, int index);
int		get_last(t_list *head);
void	move_top(t_list **head, int stack, int number);
int		is_dup(t_list *head, int num);
int		is_number(char *s);
void	free_arr(char **arr);
void	free_list(t_list **head);

void	ft_lstadd_back(t_list **alst, t_list *new);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_putchar(char c);
void	ft_putstr(char *s);
size_t	ft_strlen(const char *s);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *s1);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	**ft_split(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_atoi(const char *str);
void	ft_putnbr(int n);
void	ft_putendl(char *s);
int		ft_isdigit(int c);

#endif
