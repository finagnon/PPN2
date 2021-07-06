#ifndef __MATRI_H__

#define __MATRI_H__

#endif
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <math.h>
#include <mpi.h>
double produit_scalaire( double* v1, double*v2, int linge){
        int i;

        double y=0.0;

    for(i=0; i < linge; i++){

        y += v1[i]*v2[i];

        
    }
    printf(" y = %lf",y);
}


double produit_matrix_vect(double**matrix, double* vect, int ligne, int col){
    
    int i, j;
    double* v3 = NULL;
    v3 =  (double*)malloc(ligne*sizeof(double));
    for(i = 0; i < ligne ;i++){
        v3 = 0;
    
        for(j=0; j < col; j++){
            
    

            v3[i] += matrix[i][j]*vect[j];



        }






    }
    
    free(v3);
}




double produit_matrix_matrix(double** matrix1, double** matrix2, int ligne, int ligne_m2, int col1,int col2){

    int i, j , k;
    double** matrix3 = (double**)malloc(ligne*sizeof(double));

    for(i = 0; i < ligne; i++){
        for(j = 0; j< ligne_m2; j++){
            matrix3 = 0;
            for(k=0; k < col2; k++ ){

                matrix3[i][j] += matrix1[i][k]*matrix2[k][j];


            }
        }



    }
    free(matrix3);
}



/*

double auto_remp_matrix(int nb_ligneA, int nb_colA, int nb_ligneB, int nb_colB){

    int i, j, k;  
    double** A= (double**)malloc(nb_ligneA*sizeof(double));//, **B= double *vect = (double*)malloc(nb_ligneB*sizeof(double));;
    srand(time (NULL)); 
    for(i = 0; i < nb_ligneA; i++){
        for(j = 0; j < nb_ligneB; j++){

            for(k = 0; k < nb_colB; k++){
                    A[i][j]=(rand() % 100)*(0.14);
                    //B[i][j]=(rand() %  100)*(0.33);
            }

        }

    }
    return **A;
    free(A);
    //free(B);
}

double auto_remp_vector(int nb_ligneV){

        int i;
        double *vect = (double*)malloc(nb_ligneV*sizeof(double));


    for(i = 0; i < nb_ligneV;i++){

        vect[i] = rand()*(0.025);




    }
    return *vect;
    free(vect);
    
}

*/
