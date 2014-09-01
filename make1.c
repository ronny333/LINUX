outfile:sum.o sub.o mul.o
	cc sum.o sub.o mul.o -outfile
sum.o:sum.c
	cc -c sum.c -o sum.o
sub.o:sub.c
	cc -c sub.c -o sub.o
mul.o:mul.c
	cc -c mul.c -o mul.o 
