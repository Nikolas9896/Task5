all: help
c_release:
	gcc main.c my_string.c -o main
c_debug:
	gcc main.c my_string.c -o main -g
cpp_release:
	g++ main.cpp my_string.c -o main
cpp_debug:
	g++ main.cpp my_string.c -o main -g
wc_release:
	i586-mingw32msvc-gcc main.c my_string.c -o main.exe
wc_debug:
	i586-mingw32msvc-gcc main.c my_string.c -o main.exe -g
wcpp_release:
	i586-mingw32msvc-g++ main.cpp my_string.c -o main.exe
wcpp_debug:
	i586-mingw32msvc-g++ main.cpp my_string.c -o main.exe -g
debug:
	gdb ./main
run:
	./main
clear:
	rm ./main
help:
	@echo "Options:"
	@echo "	c_release"
	@echo "	cpp_release"
	@echo "	c_debug"
	@echo "	cpp_debug"
	@echo "	wc_release"
	@echo "	wc_debug"
	@echo "	wcpp_release"
	@echo "	wcpp_debug"
	@echo "	run"
	@echo "	debug"
	@echo "	clear"
	@echo "	help"
