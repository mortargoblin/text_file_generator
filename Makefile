CC    = gcc
IN    = main.c
OUT   = textfilegenerator
FLAGS = -Wextra -Wall

textfilegenerator: main.c
	$(CC) -o $(OUT) $(IN) $(FLAGS)
