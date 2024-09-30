NAME = cns_chr_hdl
CC = gcc
FLAGS = -Werror -Wextra -Wall -I./inc
RM = rm

SOURCE = cns_isalpha.c \
		 cns_isalnum.c \
		 cns_isascii.c \
		 cns_isdigit.c \
		 cns_isprint.c \
		 cns_isspace.c \
         main.c

OBJS = $(SOURCE:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) -o $@ $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re