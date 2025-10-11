cc := gcc
bld := build
src := src

compile:
	$(cc) -o -c $(bld)/main.o $(src)/main.c
	$(cc) -o $(bld)/exec.bin $(bld)/*.o

clean:
	rm -rf $(bld)/*.o $(bld)/*.bin