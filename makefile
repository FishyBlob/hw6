all:
	gcc hw0601.c -o hw0601
	gcc -c action.c -o action.o
	gcc action.o hw0602.c -o hw0602
	gcc -c rotation.c -o rotation.o
	gcc rotation.o action.o hw0603.c -o hw0603 -lm