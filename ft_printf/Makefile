NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs

SRCS_DIR_LIBFT = libft
SRCS_FILES_LIBFT = ft_atoi.c \
                   ft_bzero.c \
                   ft_calloc.c \
                   ft_isalnum.c \
                   ft_isalpha.c \
                   ft_isascii.c \
                   ft_isdigit.c \
                   ft_isprint.c \
                   ft_itoa.c \
                   ft_lstadd_back.c \
                   ft_lstadd_front.c \
                   ft_lstclear.c \
                   ft_lstdelone.c \
                   ft_lstiter.c \
                   ft_lstlast.c \
                   ft_lstmap.c \
                   ft_lstnew.c \
                   ft_lstsize.c \
                   ft_memchr.c \
                   ft_memcmp.c \
                   ft_memcpy.c \
                   ft_memmove.c \
                   ft_memset.c \
                   ft_putchar_fd.c \
                   ft_putendl_fd.c \
                   ft_putnbr_fd.c \
                   ft_putstr_fd.c \
                   ft_split.c \
                   ft_strchr.c \
                   ft_strdup.c \
                   ft_striteri.c \
                   ft_strjoin.c \
                   ft_strlcat.c \
                   ft_strlcpy.c \
                   ft_strlen.c \
                   ft_strmapi.c \
                   ft_strncmp.c \
                   ft_strnstr.c \
                   ft_strrchr.c \
                   ft_strtrim.c \
                   ft_substr.c \
                   ft_tolower.c \
                   ft_toupper.c

SRCS_LIBFT = $(addprefix $(SRCS_DIR_LIBFT)/, $(SRCS_FILES_LIBFT))

SRCS_PRINTF = ft_printf.c \
              ft_putnbr_uns.c \
              ft_putnbr_hex_lower.c \
              ft_putnbr_hex_upper.c \
              ft_putnbr_p.c \
              ft_putfloat.c

SRCS = $(SRCS_PRINTF) $(SRCS_LIBFT)

OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I .

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
