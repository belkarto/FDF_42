# Colors
BOLD_PURPLE =   \033[1;35m
BOLD_CYAN   =   \033[1;36m
BOLD_YELLOW =   \033[1;33m
NO_COLOR    =   \033[0m
DEF_COLOR   = \033[0;39m
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

src	= main.c shapes.c control.c

object = $(src:.c=.o)

NAME = fdf

%.o	: %.c fdf.h
	$(CC)  -Imlx -c $< -o $@

all : $(NAME)

$(NAME) : $(object)
	$(CC) $(object) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

clean :
	rm $(object)
