CC = gcc

RM  = rm -f

CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

SRC = ft_strlen.c ft_isprint.c ft_memset.c ft_isalnum.c ft_isalpha.c ft_memcpy.c

OBJ = $(SRC:%.c=%.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rcs $@ $^
%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean :
	$(RM) *.o

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re $(NAME)
