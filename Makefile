
NAME = libft.a
PATH_SRC = ./src/
PATH_INCLUDE = ./include/
PATH_UNITY = ./unity/src/
PATH_TEST = ./test/
PATH_BUILD_OBJ = ./build/objs
PATH_BUILD_RES = ./build/results
BUILD_PATHS = $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)

CCFLAGS = -Wall -Werror -Wextra
UNITY = unity.c

LIBFT = libft.h
TARGET = test_ft_isalpha

all: $(NAME)

$(NAME):
	cc $(CCFLAGS) $(PATH_TEST)$(TARGET).c $(PATH_UNITY)$(UNITY) -I $(PATH_INCLUDE) $(PATH_UNITY)-o $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)

#fclean

#re
