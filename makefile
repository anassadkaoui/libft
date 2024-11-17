CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f

NAME = libft.a
SRCS = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
	ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c \
    ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
	ft_putchar_fd.c ft_putendl_fd.c \
    ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
    ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
    ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c \
    ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c \
    ft_toupper.c ft_striteri.c
BONUS_SRCS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c \
		ft_lstnew_bonus.c ft_lstsize_bonus.c

BONUS_OBJS = $(BONUS_SRCS:.c=.o)
OBJS = $(SRCS:.c=.o)
HEADER = libft.h

all: $(NAME)

bonus : $(BONUS_OBJS)

$(NAME): $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@
	$(AR) $(NAME) $@

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: clean