#include "../libft/includes/libft.h"
#include "../ft_printf/includes/ft_printf.h"
#include <stdio.h>


void handle_reverse_rotate(char *spec, t_list **head_a, t_list **head_b);
void handle_rotate(char *spec, t_list **head_a, t_list **head_b);
void handle_push(char *spec, t_list **head_a, t_list **head_b);
void handle_swap(char *spec, t_list **head_a, t_list **head_b);
void swap(t_list **lst);
void rotate(t_list **lst);
void reverse_rotate(t_list **lst);
void push(t_list **src, t_list **dst);
int push_swap(int ac, char **av);
void print_stacks(t_list *a, t_list *b);