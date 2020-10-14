CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = push_swap
HEADERS = includes/
SRCS = srcs

$(NAME): all
 
all: 
	@make -C libft																	# go to libft directory and do make
	@make -C ft_printf
	@$(CC) $(CFLAGS) -I $(HEADERS) $(SRCS)/*.c libft/libft.a ft_printf/libftprintf.a -o $(NAME)  			# compile files and libft, set exec name
	@echo "\033[32m$(NAME) built!\033[0m"											# print "built!" in green

push_swap: 
	@make -C libft
	@make -C ft_printf
	@$(CC) $(CFLAGS) -I $(HEADERS) $(SRCS)/push_swap.c libft/libft.a ft_printf/libftprintf.a -o $(NAME)
	@echo "\033[32m$(NAME) built!\033[0m"

checker:

	
clean:
	@make -C libft clean							# do clean in libft
	@make -C ft_printf clean
	@rm $(NAME)

fclean:
	@make -C libft fclean							# do fclean in libft
	@make -C ft_printf fclean

re: clean all

.PHONY: all clean fclean re