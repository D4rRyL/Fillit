# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/19 07:58:53 by mgautier          #+#    #+#              #
#*   Updated: 2017/01/15 14:30:18 by mgautier         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

# Define target and sources

TARGET := libft.a

# To exclude some files from the compilation (to gain some time on the
# moulinette timeout, for example... ;p) uncomment the line defining the set
# of files to exclude to NOTHING.

#LIB_LST = $(NOTHING)
LIB_LIST = $(NOTHING)
#LIB_FIFO = $(NOTHING)
#LIB_STR = $(NOTHING)
#LIB_DISPLAY = $(NOTHING)
#LIB_MEM = $(NOTHING)
LIB_CONVERT = $(NOTHING)
LIB_BOOLEAN = $(NOTHING)
#LIB_MATH = $(NOTHING)
#LIB_MISCELLANEOUS = $(NOTHING)

NAME = libft.a
LIB_LST ?=\
	f_lstpush.c f_lstnew.c f_lst_every_valid.c f_lstmap.c\
	f_lstmapi.c f_lst_len.c f_lstsearch.c f_lstremoveif_one.c f_add_end_lst.c\
	f_lstiter.c f_strljoin.c f_strsplit_lst.c f_lstdelone.c f_lstdel.c 
LIB_LIST ?=\
	ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c \
	f_lstpop.c  ft_lstpushdata.c \
	ft_lstadd.c ft_lstcheck.c ft_add_end_list.c 
LIB_FIFO ?=\
	f_fifo_add.c f_fifo_create.c f_fifo_take.c f_fifo_destroy.c f_fifo_extract.c
LIB_STR ?=\
	ft_strcat.c ft_strchr.c ft_strclr.c \
	ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c \
	ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlen.c\
	ft_strmap.c ft_strmapi.c\
	ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnstr.c \
	ft_strrchr.c ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c\
	ft_gen_strdel.c ft_strnew_char.c ft_strnew.c ft_free_string_array.c
LIB_DISPLAY ?=\
	ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c \
	ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c 
LIB_MEM ?=\
	ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c \
	ft_bzero.c ft_memalloc.c ft_memset.c 
LIB_CONVERT ?=\
	ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c 
LIB_BOOLEAN ?=\
	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c
LIB_MATH ?=\
	ft_int_square_root.c ft_square_root_round_up.c
LIB_MISCELLANEOUS ?=\
	database.c no_destroy.c
SRC := $(LIB_LST) $(LIB_LIST) $(LIB_FIFO)\
	$(LIB_STR) $(LIB_DISPLAY) $(LIB_MEM)\
	$(LIB_CONVERT) $(LIB_BOOLEAN) $(LIB_MATH)\
	$(LIB_MISCELLANEOUS)

ARCH_MEMBER := $(NAME)($(SRC:.c=.o))

AR = ar
ARFLAGS = -rc
RANLIB = ranlib
CFLAGS := -Werror -Wextra -Wall

.NOTPARALLEL:
.PHONY: all clean fclean re

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

$(NAME): $(ARCH_MEMBER)
	$(RANLIB) $@
