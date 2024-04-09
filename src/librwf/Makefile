NAME		:= rwf

define METHODS
	read
endef

ARCHIVE		:= lib$(NAME).a

CC		:= gcc
CFLAGS		:= -Wall -Werror -Wextra
CPPFLAGS	:= -I$(includedir) -I$(CURDIR)	

AR		:= ar
ARFLAGS		:= -rcs

.PHONY: all
all: $(ARCHIVE)

.PHONY: re
re: $(ARCHIVE)($(METHODS:%=$(NAME)_%.o))

$(NAME): $(ARCHIVE)

$(ARCHIVE): $(METHODS:%=$(NAME)_%.c)
	$(MAKE) re

.PHONY: clean
clean:
	$(RM) *.o

.PHONY: fclean

fclean: clean
	$(RM) *.a
