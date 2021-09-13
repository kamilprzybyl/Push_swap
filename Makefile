FLAGS = -Wall -Wextra -Werror
NAME = 	push_swap
SRC = 	push_swap.c \
		print_stacks.c \
		reverse_rotate.c \
		rotate.c \
		swap.c \
		push.c \
		is_sorted.c \
		max.c \
		min.c \
		max_idx.c \
		min_idx.c \
		list_len.c \
		get_idx.c \
		get_content.c \
		get_last.c \
		case_3.c \
		case_5.c \
		case_100.c \
		utils/ft_putchar.c \
		utils/ft_putstr.c \
		utils/ft_strlen.c \
		utils/ft_lstadd_back.c \
		utils/ft_lstnew.c \
		utils/ft_lstadd_front.c \
		utils/ft_strncmp.c \
		utils/ft_strdup.c \
		utils/ft_strlcpy.c \
		utils/ft_strchr.c \
		utils/ft_split.c \
		utils/ft_substr.c \
		utils/ft_atoi.c \
		utils/ft_putnbr.c \
		utils/ft_putendl.c \
		utils/ft_isdigit.c

OBJ = 	$(SRC:.c=.o)

all: $(NAME) #make all if $(NAME) doesn't exist

%.o: %.c
	gcc -c $(FLAGS) $^ -o $@

$(NAME): $(OBJ)
	gcc $(FLAGS) $^ -o $@

clean:
	rm -fr $(OBJ)

fclean:
	make clean
	rm -fr $(NAME)

re: fclean all