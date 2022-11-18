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

MY_OBJETCS = $(MY_SOURCES:.c=.o)

SOURCES_BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \

OBJECTS_BONUS = $(SOURCES_BONUS:.c=.o)

CC = cc 
CFLAGS = -Wall -Wextra -Werror

NAME = libft.a

$(NAME): $(MY_OBJETCS)
	ar -crs $(NAME) $(MY_OBJETCS)

all: $(NAME)

NAME: $(NAME)

clean:	
	rm -f $(MY_OBJETCS) $(OBJECTS_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus : $(MY_OBJETCS) $(SOURCES_BONUS)
	$(CC) -c $(SOURCES_BONUS)
	ar -rcs $(NAME) $(MY_OBJETCS) $(OBJECTS_BONUS)
