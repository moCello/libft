# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmarcell <mmarcell@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/02/14 13:21:34 by mmarcell       #+#    #+#                 #
#    Updated: 2020/01/09 19:45:08 by mmarcell      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

include mini_srcs

NAME := libft.a

OBJS := $(MINI_SOURCES:%=%.o)

CFLAGS := -Wall -Wextra -Werror

HDRS := libft.h

PLUS = \033[38;5;40m+\033[0;00m
MINUS = \033[38;5;160m-\033[0;00m

all: $(NAME)

$(NAME): $(OBJS)
	@ar -rcs $(NAME) $^
	@echo " ${PLUS} $@"

%.o: %.c $(HDRS)
	@$(CC) -c $(CFLAGS) -o $@ $<
	@echo " ${PLUS} $@"

clean:
	@rm -fv $(OBJS) | sed -e $$'s/^/ $(MINUS) /'

fclean: clean
	@rm -fv $(NAME) | sed -e $$'s/^/ $(MINUS) /'

re: fclean all

.PHONY: all clean fclean re
