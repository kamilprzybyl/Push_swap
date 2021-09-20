FLAGS = -Wall -Wextra -Werror
NAME = 	push_swap
SRC = 	push_swap.c \
		case_3.c \
		case_5.c \
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
		utils/push_smaller.c \
		utils/quick_sort.c \
		utils/free_arr.c \
		utils/free_list.c \
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

val:
	docker run -ti -v $(PWD):/test memory-test:0.1 bash -c "cd /test/; gcc -o main *.c utils/*.c && valgrind --leak-check=full ./main 10 11 5 2 -2 32 17 171 21412 242 353 -325"

re: fclean all