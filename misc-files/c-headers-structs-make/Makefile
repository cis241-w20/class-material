CC = gcc-9
CFLAGS = -Wall

program : program.o sum.o
	$(CC) $(CFLAGS) -o $@ $^

# Patterm rule for all .c to .o
%.o :  %.c sum.h
	$(CC) $(CFLAGS) -o $@ -c $<

clean :
	rm program.o sum.o program
