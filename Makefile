FLAGS = -Wall -Wextra -Werror
NAME = 	push_swap
SRC = 	src/push_swap.c \
		src/case_3.c \
		src/case_5.c \
		src/case_500.c \
		src/reverse_rotate.c \
		src/rotate.c \
		src/swap.c \
		src/push.c \
		src/utils/print_stacks.c \
		src/utils/is_sorted.c \
		src/utils/max.c \
		src/utils/min.c \
		src/utils/max_idx.c \
		src/utils/min_idx.c \
		src/utils/list_len.c \
		src/utils/get_idx.c \
		src/utils/get_content.c \
		src/utils/get_last.c \
		src/utils/is_dup.c \
		src/utils/is_number.c \
		src/utils/move_top.c \
		src/utils/push_smaller.c \
		src/utils/quick_sort.c \
		src/utils/free_arr.c \
		src/utils/free_list.c \
		src/utils/ft_putchar.c \
		src/utils/ft_putstr.c \
		src/utils/ft_strlen.c \
		src/utils/ft_lstadd_back.c \
		src/utils/ft_lstnew.c \
		src/utils/ft_lstadd_front.c \
		src/utils/ft_strncmp.c \
		src/utils/ft_strdup.c \
		src/utils/ft_strlcpy.c \
		src/utils/ft_strchr.c \
		src/utils/ft_split.c \
		src/utils/ft_substr.c \
		src/utils/ft_atoi.c \
		src/utils/ft_putnbr.c \
		src/utils/ft_putendl.c \
		src/utils/ft_isdigit.c

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