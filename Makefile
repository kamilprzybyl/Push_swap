FLAGS = -Wall -Wextra -Werror
NAME = 	push_swap
SRC = 	push_swap.c \
		print_stacks.c \
		reverse_rotate.c \
		rotate.c \
		swap.c \
		push.c \
		is_sorted.c \
		utils/ft_putchar_fd.c \
		utils/ft_putstr_fd.c \
		utils/ft_strlen.c \
		utils/ft_lstadd_back.c \
		utils/ft_lstnew.c \
		utils/ft_lstadd_front.c \
		utils/ft_strncmp.c \
		utils/ft_strdup.c \
		utils/ft_strlcpy.c

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