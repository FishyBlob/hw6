all:
	gcc -c action.c -o action.o
	gcc -c lendian.c -o lendian.o
	gcc lendian.o action.o hw0601.c -o hw0601
	gcc action.o hw0602.c -o hw0602
	gcc -c rotation.c -o rotation.o
	gcc rotation.o action.o hw0603.c -o hw0603 -lm
	gcc -c projection.c -o projection.o
	gcc projection.o action.o hw0604.c -o hw0604
	gcc -c poker.c -o poker.o
	gcc poker.o hw0605.c -o hw0605
	gcc hw0606.c -o hw0606
	gcc hw0606-2.c -o hw0606-2  