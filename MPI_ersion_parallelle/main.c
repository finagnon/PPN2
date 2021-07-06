#include <stdio.h>
#include <stdlib.h>
#include <mpi.h>


#ifndef __MATRI_H__

#define __MATRI_H__

#endif



int main(int argc, char**argv){

  int size, rank;
	int size, rank;
	MPI_Init(&argc, &argv);
	MPI_Comm_size(MPI_COMM_WORLD,&size);
	MPI_Comm_rank(MPI_COMM_WORLD, &rank);
	
    double **A = (double**)malloc(133*sizeof(double));
    double* v1 = (double*)malloc(133*sizeof(double));
  double* v2 = (double*)malloc(133*sizeof(double));
   //A=malloc(sizeof(double));
   //*v1= (1.234, 34,456,4.5,62.233,4.3889); 
   *v2 = (1.237, 8.9345,33,23,23,723.8459);
    
    //**A= (2,4,5.6,8.789,34,78.89),(2,4,5.6,8.789,34,78.89),(2,4,5.6,8.789,34,78.89),(2,4,5.6,8.789,34,78.89),(2,4,5.6,8.789,34,78.89),(2,4,5.6,8.789,34,78.89);
    produit_scalaire(v1, v2, 6);
    //produit_matrix_vect(A,v2,6,6);
    //free(A);
    free(v1);
   // free(v2);
    //auto_remp_matrix(6,6,6,6);
    //auto_remp_vector(6);
     MPI_Finalize();
    return 0;
}