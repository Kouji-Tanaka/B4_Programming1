#makefile
.PHONY : cleen help

CC := gcc
CFLAGS := -o main.out
CPPFLAGS :=
LDFLAGS :=
LDFLIBS :=

main.out : src/main.c src/sub.c
	$(CC) $(CFLAGS) main.c sub.c
	@echo "exported as \""$@"\""

cleen :
		rm main.out