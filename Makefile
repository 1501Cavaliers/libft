NAME = libft.a
CC = gcc -Wall -Werror -Wextra
EXE = libft.exe
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
	ft_substr.c \
	ft_strjoin.c \
	ft_strtrim.c \
	ft_split.c \
	ft_itoa.c \
	ft_strmapi.c \
	ft_striteri.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_putendl_fd.c \
	ft_putnbr_fd.c \
	main.c
MY_OBJETCS = $(MY_SOURCES:.c=.o)
$(MY_OBJETCS): $(MY_SOURCES)
	$(CC) -c $(MY_SOURCES)
$(NAME): $(MY_OBJETCS)
	ar -cr $(NAME) $(MY_OBJETCS)
	ar -d $(NAME) main.o
$(EXE): $(NAME)
	$(CC) -o $(EXE) $(NAME) main.o
NAME: $(NAME)
clean:	
	rm -f *.o
fclean: clean
	rm -f $(NAME) libft.a
re: NAME clean
mem:
	valgrind --leak-check=yes ./libft.exe
all: NAME clean fclean re mem
