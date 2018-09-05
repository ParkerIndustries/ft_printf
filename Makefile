# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smickael <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/06 17:27:51 by smickael          #+#    #+#              #
#    Updated: 2018/08/08 16:42:45 by smickael         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC =	ft_itoa.c \
		ft_bzero.c \
		ft_strdup.c \
		ft_strcpy.c \
		ft_memset.c \
		ft_strnew.c \
		ft_strchr.c \
		ft_strsub.c \
		ft_strlen.c \
		ft_strjoin.c \
		ft_strlower.c \
		ft_strcat.c \
		ft_isdigit.c \
		ft_isspace.c \
		ft_atoi.c \
		ft_ltoa.c

OBJ = $(SRC:.c=.o)

SRCDIR = sources
OBJDIR = objects

SRCS = $(addprefix $(SRCDIR)/, $(SRC))
OBJS = $(addprefix $(OBJDIR)/, $(OBJ))
HEADER = -I includes

CC = gcc
CFLAGS = -c -Wall -Wextra -Werror

C_NO = "\033[00m"
C_OK = "\033[35m"
C_GOOD = "\033[32m"
C_ERROR = "\033[31m"
C_WARN = "\033[33m"

SUCCESS = $(C_GOOD)SUCCESS$(C_NO)
OK = $(C_OK)OK$(C_NO)

.PHONY: all clean fclean re

all: $(NAME)

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@/bin/mkdir -p $(OBJDIR)
	@$(CC) $(CFLAGS) $(HEADER) $< -o $@
	@echo "Linking" [ $< ] $(OK)

$(NAME): $(OBJS)
	@ar rc $@ $^
	@ranlib $@
	@echo "Compiling & indexing" [ $(NAME) ] $(SUCCESS)

clean:
	@/bin/rm -rf $(OBJDIR)
	@echo "Delete" [ objs ] $(OK)

fclean: clean
	@/bin/rm -f $(NAME)
	@echo "Delete" [ $(NAME) ] $(OK)

re: fclean all
