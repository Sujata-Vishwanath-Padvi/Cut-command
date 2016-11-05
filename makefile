project: main.o project.o
	cc main.c project.c -o project
main.o: main.c project.h
	cc -c main.c
project.o: project.c project.h
	cc -c project.c
	
