
NAME = libft.a
PATH_SRC = ./src/
PATH_INCLUDE = ./include/
PATH_UNITY = ./unity/src/
PATH_TEST = ./test/
PATH_BUILD_OBJ = ./build/objs
PATH_BUILD_RES = ./build/results
BUILD_PATHS = $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)

CCFLAGS = -Wall -Werror -Wextra
UNITY = ./unity/src/unity.c

LIBFT = libft.h
TARGET = ft_isalpha
TEST = test_$(TARGET)

all: $(NAME)

$(NAME):
	cc $(CCFLAGS) $(PATH_SRC)$(TARGET).c $(PATH_TEST)$(TEST).c $(UNITY) -I $(PATH_INCLUDE) -I $(PATH_UNITY) -o $(TEST)
	./$(TEST)

clean:
	rm -rf $(TEST) $(PATH_BUILD_OBJ) $(PATH_BUILD_RES)

#fclean

#re
