NAME = fillit

SRC = ./src/fillit.c ./src/copy_array.c ./src/copy_array2.c ./src/ft_cnt.c  ./src/ft_make_sq.c ./src/ft_pst.c ./src/ft_print_sq.c \
		./src/ft_sq.c ./src/ft_sq2.c ./src/ft_test_figure.c ./src/ft_test_file.c ./src/ft_fit.c\
		./src/ft_test_symbols.c ./src/make_array_fig.c ./src/make_buf_array.c\

OBJECTS = $(SRC:.c=.o)

INCLUDE = ./includes

all:$(NAME)

CC = gcc

CFLAGS = -Wall -Wextra -Werror

%.o:%.c
	$(CC) $(CFLAGS) -I./$(INCLUDE)  -o $@ -c $<

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJECTS) -I./$(INCLUDE)

clean:
	@/bin/rm -rf $(OBJECTS)

fclean: clean
	@/bin/rm -f $(NAME)
re: fclean all
