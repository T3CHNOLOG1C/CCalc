dir_source := source


program: $(dir_source)/main.c
	gcc $(dir_source)/main.c -o ccalc
