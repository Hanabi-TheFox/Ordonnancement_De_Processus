#--------------------------------------------------
#---------- Propriété de Ethan et Renato ----------
#--------------------------------------------------

CC=gcc
CFLAGS= -W -Wall
RM=rm -f bin/*.o
srcdir= src/
bindir= bin/
docdir= doc/
SRC=$(wildcard $(srcdir)*.c)
HEAD=$(wildcard $(srcdir)*.h)
OBJ=$(subst $(srcdir), $(bindir), $(SRC:.c=.o))
PROG=ordonnencementDeProcessus

# Créer l'executable
$(PROG): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

# Créer tous les fichiers .o
bin/%.o : src/%.c
	$(CC) $(CFLAGS) -c $< -o $@ 

# Supprime les fichiers .o dans bin
.PHONY: clean
clean:
	$(RM)

# Lancer le programme
.PHONY: run
run: $(PROG)
	./$(PROG)

# Que peut on faire avec un makefile ?
.PHONY: help
help:
	@echo "make : compile le programme"
	@echo "make run : compile et lance le programme"
	@echo "make clean : supprime les fichiers .o"
	@echo "make help : affiche ce message"
