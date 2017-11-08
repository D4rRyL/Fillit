# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgautier <mgautier@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/12/19 07:58:53 by mgautier          #+#    #+#              #
#*   Updated: 2017/01/15 14:46:55 by mgautier         ###   ########.fr       *#
#                                                                              #
# **************************************************************************** #

NAME := fillit
SRC := ft_add_remove_tetri.c ft_generate_resolve_array.c \
	ft_file_reader.c ft_is_placable.c ft_parser.c ft_piece_reader.c \
	ft_relative_position.c ft_solver.c ft_string_to_coordinates.c \
	ft_transform_tetri.c ft_valid_pieces_format.c ft_display_string_array.c \
	main.c
OBJ := $(SRC:.c=.o)

LIB := libft
CFLAGS := -Werror -Wextra -Wall
CPPFLAGS := -iquote$(LIB)
LDFLAGS := -L$(LIB)
LDLIBS := $(patsubst lib%,-l%,$(LIB))

.PHONY: all clean fclean re $(LIB)
.NOTPARALLEL:
all: $(NAME)

clean: $(LIB)clean
	$(RM) $(OBJ)

fclean: clean $(LIB)fclean
	$(RM) $(NAME)

re: fclean all

$(NAME): $(OBJ) 
	$(MAKE) -C $(LIB)
	$(CC) $(OBJ) $(LDFLAGS) $(LDLIBS) -o $@

$(LIB)fclean $(LIB)clean:
	$(MAKE) -C $(LIB) $(patsubst $(LIB)%,%,$@)
