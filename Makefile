FLAGS = -Wall -Wextra -Werror
NAME = 	push_swap
SRC = 	push_swap.c \
		case_3.c \
		case_5.c \
		case_100.c \
		case_500.c \
		reverse_rotate.c \
		rotate.c \
		swap.c \
		push.c \
		utils/print_stacks.c \
		utils/is_sorted.c \
		utils/max.c \
		utils/min.c \
		utils/max_idx.c \
		utils/min_idx.c \
		utils/list_len.c \
		utils/get_idx.c \
		utils/get_content.c \
		utils/get_last.c \
		utils/is_dup.c \
		utils/is_number.c \
		utils/move_top.c \
		utils/handle_chunk.c \
		utils/quick_sort.c \
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

all: $(NAME)

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