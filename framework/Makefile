# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmougino <nmougino@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/04/05 16:20:26 by nmougino          #+#    #+#              #
#    Updated: 2017/02/11 17:23:52 by nmougino         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#	Compilator - clang est plus sur que gcc
CC =		clang
CFLAGS =	-Weverything

#	Binary
NAME =		libunit.a
DST =		.

#	Default rule
DEFRULE =	all

#	Dossiers utiles
SRCDIR =	.
INCDIR =	.
LIBDIR =	libs
OBJDIR =	objs
DETDIR =	array display list math memory misc printf string

#	Liste des sources
SRC =		display_return.c \
			launch_test.c \
			load_test.c
LIB =		ft
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

.PHONY = default glu all re $(OBJDIR) $(NAME) deplib clean fclean

#	Main rules
default:
	@echo "$(GRA)  DEFAULT RULE EXECUTION  :::  rule $(DEFRULE)$(DEF)"
	@$(addprefix make ,$(DEFRULE))
	@echo "$(GRE)$(GRA)Programme termine :)$(DEF)"

glu: re
	make clean

all: $(NAME)

re: fclean all

#	Compilation rules
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	$(CC) $(CFLAGS) -c  -o $@ $^ -I$(INCDIR)

$(OBJDIR):
	@echo "$(GRA)$(CYA)@ ++ Objects compilation$(DEF)"
	@mkdir -p $(OBJDIR)
	@mkdir -p $(addprefix "$(OBJDIR)/", $(DETDIR))

$(NAME): $(OBJDIR) $(OBJP)
	@echo "$(PUR)@ Library indexation$(DEF)"
	@ar rc $(NAME) $(OBJP)
	@ranlib $(NAME)

#	MrProper's legacy
clean:
	@echo "$(RED)@ Objects deletion$(DEF)"
	@rm -rf $(OBJDIR)

fclean: clean
	@echo "$(RED)@ Binary deletion$(DEF)"
	@rm -f $(NAME)
