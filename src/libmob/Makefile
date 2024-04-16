define GETTERS
	orientation:int
	backpack:int*
	hp:int
	mp:int
	map:void*
	pos:void*
endef

define SETTERS
	set_money:int
	set_hp:int
	bind_map:void*
	bind_backpack:int*
endef

define CONSTRUCTION_METHODS
	create_null
	create
	destroy
endef

define CONFIG_METHODS
	populate
	init_backpack
	destroy_backpack
endef

define ACTION_METHODS
	move
	collect
endef

define REACTOR_METHODS
	on_command	
endef

define METHODS
	$(CONSTRUCTION_METHODS)
	$(CONFIG_METHODS)
	$(ACTION_METHODS)
	$(REACTOR_METHODS)
endef

include ../Makefile
