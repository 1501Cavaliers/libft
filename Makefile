NAME = libft.exe
CC = gcc -Wall -Werror -Wextra -g3 -fsanitize=address
MY_SOURCES = ft_isalpha.c \
	ft_isdigit.c \
	ft_isalnum.c \
	ft_isascii.c \
	ft_isprint.c \
	ft_strlen.c \
	ft_memset.c \
	ft_bzero.c \
	ft_memcpy.c \
	ft_memmove.c \
	ft_strlcpy.c \
	ft_strlcat.c \
	ft_toupper.c \
	ft_tolower.c \
	ft_strchr.c \
	ft_strrchr.c \
	ft_strncmp.c \
	ft_memchr.c \
	ft_memcmp.c \
	ft_strnstr.c \
	ft_atoi.c \
	ft_calloc.c \
	ft_strdup.c \
	main.c
MY_OBJETCS = $(MY_SOURCES:.c=.o)
$(NAME): $(MY_OBJETCS)
	$(CC) -o $(NAME) $(MY_OBJETCS)
	ar -cr libft.a $(MY_OBJETCS)
	ar -d libft.a main.o
NAME: $(NAME)
clean:	
	rm -f *.o
fclean: clean
	rm -f $(NAME) libft.a
re: NAME clean
all: NAME clean fclean re
