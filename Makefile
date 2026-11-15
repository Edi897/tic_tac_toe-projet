all:
	gcc -Wall -Wextra main.c tic-tac-toe.c -o tic-tac-toe

clean:
	rm -f tic-tac-toe

re: clean all
