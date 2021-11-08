compile: sql.y sql.lex
	bison -d sql.y --debug
	flex -o sql.lex.c sql.lex
	gcc -o sql sql.lex.c sql.tab.c -lfl -lm 

clean:
	rm -f *.c *.h sql

test: 	
	./analisador_sql sql