make -C libft/ fclean && make -C libft/
clang -g -Wall -Wextra -Werror -I libft/includes -o fillit_validate.o -c fillit_validate.c
clang -o test_fillit fillit_validate.o -I libft/includes -L libft/ -lft
