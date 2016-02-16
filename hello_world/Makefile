all: hello_world

clean: 
	rm hello_world hello_world.o

hello_world.o: hello_world.c
	gcc $< -o $@ -c

hello_world: hello_world.o
	gcc $< -o $@ 
