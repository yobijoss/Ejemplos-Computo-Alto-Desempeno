#include <stdio.h>
#include "mpi.h"

MPI:Status status;

int rank,size;

int main(int argc, char ** argv){
	
	error = MPI_Init(&argc,&argv);

	MPI_Comm_size(MPI_COMM_WORLD,&size);
	MPI_Comm_rank(MPI_COMM_WORLD,&rank);
	
	// ejemplo de deadlock y como resolverlo
	
	source = rank-1;
	dest = rank+1;	
	
	return 0;
}
