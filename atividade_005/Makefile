compile: analisador_sql.y analisador_sql.lex
	@echo "compiling..." 
	bison -d analisador_sql.y
	flex  -o analisador_sql.lex.c analisador_sql.lex
	gcc  -o analisador_sql analisador_sql.lex.c analisador_sql.tab.c -lfl -lm
	@echo "success!"
clean:	
	@echo "cleaning..."
	rm -f *.c *.h analisador_sql
	@echo "cleaned!"

test: 	
	./analisador_sql sql