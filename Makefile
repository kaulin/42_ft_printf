NAME = libftprintf.a

SRCS = ft_printf.c \
	safer_putchar_fd.c \
	safer_putstr_fd.c \
	print_c.c \
	print_s.c \
	print_p.c \
	print_d.c \
	print_u.c \
	print_x.c \

OBJ = $(SRCS:.c=.o)

LIBFT = ./libft/libft.a 

LIBDIR = ./libft

CC = cc

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(LIBFT) $(OBJ)
	ar -crs $(NAME) $(OBJ)

$(LIBFT):
	make -C $(LIBDIR)
	@cp $(LIBFT) $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBDIR) -c $< -o $@

clean:
	rm -f $(OBJ)
	make clean -C $(LIBDIR)

fclean: clean
	rm -f $(NAME)
	make fclean -C $(LIBDIR)

re: fclean $(NAME)

.PHONY: all clean fclean re
