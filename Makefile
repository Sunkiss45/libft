# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebarguil <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/11 09:40:18 by ebarguil          #+#    #+#              #
#    Updated: 2021/01/12 15:38:59 by ebarguil         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c \
				ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c \
				ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c \
				ft_split.c ft_strchr.c ft_strdup.c ft_strjoin.c ft_strlcat.c \
				ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
				ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c \
				ft_tolower.c ft_toupper.c \

SRCS_B		=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
				ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c \
				ft_lstmap.c \

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror -c
RM			=	rm -f
NORM		=	norminette *.h && norminette *.c

OBJS		=	$(SRCS:%.c=%.o)

OBJS_B		=	$(SRCS_B:%.c=%.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
	ar rc $(NAME) $(OBJS)

$(OBJS)		:	$(SRCS)
	$(CC) $(CFLAGS) $(SRCS)

$(OBJS_B)	:	$(SRCS_B)
	$(CC) $(CFLAGS) $(SRCS_B)

n			:
	$(NORM)

bonus		:	fclean $(OBJS) $(OBJS_B)
	ar rc $(NAME) $(OBJS) $(OBJS_B)

clean		:
	$(RM) $(OBJS) $(OBJS_B)

fclean		:	clean
	$(RM) $(NAME)

re			:	fclean all
