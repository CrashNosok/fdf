NAME = fdf

CC = gcc
FLAGS = -Werror -Wextra -Wall
# LIBRARIES = -lmlx -lm -lft -L$(LIBFT_DIRECTORY) -L$(MINILIBX_DIRECTORY) -framework OpenGL -framework AppKit
LIBRARIES = -lmlx -lm -lft -L$(LIBFT_DIRECTORY) -L$(MINILIBX_DIRECTORY) -lX11 -lXext
INCLUDES = -I$(HEADERS_DIRECTORY) -I$(LIBFT_HEADERS) -I$(MINILIBX_HEADERS)

LIBFT_DIRECTORY = ./libft/
LIBFT = $(LIBFT_DIRECTORY)libft.a
LIBFT_HEADERS = $(LIBFT_DIRECTORY)includes/

# MINILIBX_DIRECTORY = ./minilibx_macos/
MINILIBX_DIRECTORY = ./minilibx/
MINILIBX = $(MINILIBX_DIRECTORY)libmlx.a
MINILIBX_HEADERS = $(MINILIBX_DIRECTORY)

HEADERS_LIST = fdf.h
HEADERS_DIRECTORY = ./includes/
HEADERS = $(addprefix $(HEADERS_DIRECTORY), $(HEADERS_LIST))

SOURCES_DIRECTORY = ./sources/
 SOURCES_LIST = change_map.c\
	change_map2.c\
	deal_key.c\
	default_utilites.c\
	default.c\
	draw.c\
	gradient.c\
	main.c\
	read_file.c\
	rotate.c\
	utilites.c\
	validation.c
SOURCES = $(addprefix $(SOURCES_DIRECTORY), $(SOURCES_LIST))

OBJECTS_DIRECTORY = objects/
OBJECTS_LIST = $(patsubst %.c, %.o, $(SOURCES_LIST))
OBJECTS	= $(addprefix $(OBJECTS_DIRECTORY), $(OBJECTS_LIST))

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(LIBFT) $(MINILIBX) $(OBJECTS_DIRECTORY) $(OBJECTS)
	$(CC) $(LIBRARIES) $(INCLUDES) $(OBJECTS) -o $(NAME)

$(OBJECTS_DIRECTORY):
	mkdir -p $(OBJECTS_DIRECTORY)

$(OBJECTS_DIRECTORY)%.o : $(SOURCES_DIRECTORY)%.c $(HEADERS)
	$(CC) $(FLAGS) -c $(INCLUDES) $< -o $@

$(LIBFT):
	$(MAKE) -sC $(LIBFT_DIRECTORY)

$(MINILIBX):
	$(MAKE) -sC $(MINILIBX_DIRECTORY)

clean:
	$(MAKE) -sC $(LIBFT_DIRECTORY) clean
	$(MAKE) -sC $(MINILIBX_DIRECTORY) clean
	rm -rf $(OBJECTS_DIRECTORY)

fclean: clean
	rm -f $(MINILIBX)
	rm -f $(LIBFT)
	rm -f $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all
