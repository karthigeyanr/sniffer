
SRC := main.c
OBJ := $(addprefix ../bin/,$(notdir $(SRC:.c=.o)))

all: $(OBJ)

../bin/%.o: ./%.c
	gcc -c -o $@ $<
