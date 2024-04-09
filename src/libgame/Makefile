NAME		:= game

define METHODS
endef

ARCHIVE		:= lib$(NAME).a

CC		:= gcc
CFLAGS		:= -Wall -Werror -Wextra
CPPFLAGS	:= -I$(includedir) -I$(CURDIR)	

ARFLAGS		:= -rcs

.PHONY: all
all: $(ARCHIVE)

.PHONY: re
re: $(METHODS:%=$(NAME)_%.c) $(ARCHIVE)($(METHODS:%=$(NAME)_%.o))

$(NAME): $(ARCHIVE)

$(ARCHIVE):
	$(MAKE) re

.PHONY: clean
clean:
	$(RM) *.o

.PHONY: fclean

fclean: clean
	$(RM) *.a
