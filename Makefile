NAME := Codexion

COMPILE := cc -Wall -Werror -Wextra -I./includes
SRCS := src/main.c \
		src/parser/parser.c
OBJS := $(SRCS:.c=.o)
ARGS ?=


all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILE) $(OBJS) -o $(NAME)

%.o: %.c
	$(COMPILE) -c $< -o $@

debug: COMPILE += -g
debug: re


clean:
	rm -fr $(OBJS)

fclean: clean
	rm -fr $(NAME)

re: fclean all

run: $(NAME)
	./$(NAME) $(ARGS)

.PHONY: all clean fclean re debug run
