NODE_DIR	:=
NODE		:= node

SCRIPT_DIR	:= ../../scripts/
SCRIPT		:= generateMap.js

GENERATE_MAP	:= $(NODE_DIR)$(NODE) $(SCRIPT_DIR)$(SCRIPT)

ALL		:=  simple.ber #huge.ber

all: $(ALL)

clean:
	$(RM) $(ALL)
fclean:
	$(RM) *.ber


huge.ber:
	$(GENERATE_MAP) 20000 20000 200 $@

width	:= 80
height	:= 20
walls	:= 16

%.ber:
	$(GENERATE_MAP) $(width) $(height) $(walls) $@
