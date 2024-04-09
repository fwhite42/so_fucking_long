# Default library path
MK	?= mk

# Force the value of $(NAME)
NAME	:= so_long

# Tells core.mk to link X11 libraries when compiling $(NAME).c
X11	:= TRUE

# Source libraries
define RARIES
	mlx
	ft
	ftprintf
	error
	arr
	rwf
	view
	map
	pos
endef

define REQ_TEST
	arr
	map
	mlx
endef

include $(MK)/core.mk
include $(MK)/test.mk
