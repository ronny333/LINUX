outfile:ronil.o sum.o sub.o mul.o
	cc sum.o sub.o mul.o -o ronil.o -outfile
ronil.o:ronil.c
	cc -c ronil.c -o ronil.o
sum.o:sum.c
	cc -c sum.c -o sum.o
sub.o:sub.c
	cc -c sub.c -o sub.o
mul.o:mul.c
	cc -c mul.c -o mul.o 


