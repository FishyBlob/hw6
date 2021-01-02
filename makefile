all:
	gcc hw0601.c -o hw0601
	gcc -c action.c -o action.o
	gcc action.o hw0602.c -o hw0602
