dir_source := source
dir_build := build


program: $(dir_source)/main.c
	@mkdir -p $(dir_build)
	gcc $(dir_source)/main.c -o $(dir_build)/main
