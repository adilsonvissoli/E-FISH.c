CC = gcc
FLAGS = -Wall
CLEAR = rm -f
SRC = ./src/
INCLUDE = ./include/
OBJETOS = ./objs/
NAME = e-fish

all: $(SRC)main.c menus.o listas.o 
	$(CC) $(FLAGS) $(SRC)main.c $(OBJETOS)menus.o $(OBJETOS)listas.o -o $(NAME)

menus.o: $(SRC)menus.c $(INCLUDE)menus.h
	$(CC) -c $(SRC)menus.c -o $(OBJETOS)menus.o

listas.o: $(SRC)listas.c $(INCLUDE)listas.h
	$(CC) -c $(SRC)listas.c -o $(OBJETOS)listas.o

REMOVER:
	$(LIMPAR) $(OBJETOS)*	