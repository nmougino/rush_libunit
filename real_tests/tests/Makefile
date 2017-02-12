# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/08/07 23:21:20 by nmougino          #+#    #+#              #
#    Updated: 2017/02/12 20:45:22 by nmougino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Compilator - clang est plus sur que gcc
CC =		clang
CFLAGS +=	-Wall -Wextra -Werror -Weverything

#	Binary
NAME =		tests

#	Default rule
DEFRULE =	all

#	Dossiers utiles
SRCDIR =	.
INCDIR =	../includes
OBJDIR =	objs
DETDIR =	ft_strlen ft_strcmp ft_strrev ft_itoa

#	Liste des sources
SRC =		ft_strlen/00_launcher.c \
			ft_strlen/01_basic_test.c \
			ft_strlen/02_null_test.c \
			ft_strlen/03_empty_string.c \
			ft_strcmp/00_launcher.c \
			ft_strcmp/01_equal_test.c \
			ft_strcmp/02_null_test.c \
			ft_strcmp/03_different_test.c \
			ft_strcmp/04_different_test_two.c \
			ft_strcmp/05_different_len_test.c \
			ft_strcmp/06_different_len_test_two.c \
			ft_strcmp/07_null_test_two.c \
			ft_strcmp/08_null_test_three.c \
			ft_strrev/00_launcher.c \
			ft_strrev/01_basic_test.c \
			ft_strrev/02_null_test.c \
			ft_strrev/03_empty_string.c \
			ft_itoa/00_launcher.c \
			ft_itoa/01_basic_test.c \
			ft_itoa/02_negative_test.c \
			ft_itoa/03_zero_test.c \
			ft_itoa/04_min_test.c \
			ft_itoa/05_max_test.c \
			main.c

OBJ =		$(SRC:.c=.o)

#	Prefixes
LLIBP =		$(addprefix -l, $(LIB))
LIBP =		$(addprefix lib, $(LIB))
OBJP =		$(addprefix $(OBJDIR)/, $(SRC:.c=.o))

#	Couleurs
DEF =		\033[0m
GRA =		\033[1m
SOU =		\033[4m
BLI =		\033[5m
BLA =		\033[30m
RED =		\033[31m
GRE =		\033[32m
YEL =		\033[33m
BLU =		\033[34m
PUR =		\033[35m
CYA =		\033[36m
WHI =		\033[37m

define \n


endef

# #
#	RULES
#

.PHONY = default glu all re libcomp $(OBJDIR) $(NAME) clean fclean

#	Main rules
default:
	@echo "$(GRA)  DEFAULT RULE EXECUTION  :::  rule $(DEFRULE)$(DEF)"
	@$(addprefix make ,$(DEFRULE))
	@echo "$(GRE)$(GRA)Programme termine :)$(DEF)"

glu: re
	make clean

all: libcomp $(OBJDIR) $(NAME)

re: fclean all

#	Compilation rules
libcomp:
	make all -C ../../framework
	make all -C ..

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS)	$(ADDFLAGS) -c -o $@ $^ -I . -I $(INCDIR)

$(OBJDIR):
	@mkdir -p $(OBJDIR)
	@mkdir -p $(addprefix "$(OBJDIR)/", $(DETDIR))
	@echo "$(GRA)$(CYA)@ ++ Objects compilation$(DEF)"

$(NAME): $(OBJP)
	@echo "$(GRA)$(CYA)@ ++ $@ compilation$(DEF)"
	@$(CC) $(CFLAGS) $(ADDFLAGS) $^ -o $@ -I . -I ../includes -L ../../framework -lunit -L .. -lft

#	MrProper's legacy
clean:
	@echo "$(RED)@ Objects deletion$(DEF)"
	@rm -rf $(OBJDIR)
	@echo "$(RED)@ Binary deletion$(DEF)"
	@rm -f $(NAME)
	make clean -C ../../framework
	make clean -C ..

fclean: clean
	@echo "$(RED)@ Binary deletion$(DEF)"
	@rm -f $(NAME)
	make fclean -C ../../framework
	make fclean -C ..
