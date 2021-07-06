#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

#ifndef __MATRI_H__

#define __MATRI_H__
#endif



int main(int argc, char**argv){

    double* v1 = NULL, *v2 = NULL;
    v1= (double*)malloc(sizeof(double));
    v2 = (double*)malloc(sizeof(double));
   *v1= (1.234, 2.233,4.3889); 
   *v2 = (1.237, 8.9345, 23.8459);

    produit_scalaire(v1, v2, 3);

    free(v1);
    free(v2);
    return 0;
}
