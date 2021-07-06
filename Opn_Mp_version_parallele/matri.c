#ifndef __MATRI_H__

#define  __MATRI_H__
#endif
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <limits.h>
#include <mpi.h>
double produit_scalaire( double* v1, double*v2, int linge){
        int i;

        double y=0.0;
#pragma omp parallel for reduction(+:y)
    for(i=0; i < linge; i++){

        y += v1[i]*v2[i];

        
    }
   printf(" y = %f\n",y);
   return y;
}


double produit_matrix_vect(double**matrix, double* vect, int ligne, int col){
    
    int i, j;
    double* v3;
#pragma omp parallel for schedule(runtime) private(i,j,v3)
    for(i = 0; i < ligne ;i++){
        v3 = 0;
        for(j=0; j < col; j++){
            v3[i] += matrix[i][j]*vect[j];



        }






    }
}




double produit_matrix_matrix(double** matrix1, double** matrix2, double** matrix3, int ligne_m1, int ligne_m2, int col1, int col2){

    int i, j , k;
if(ligne_m1 == ligne_m2){




#pragma omp parallel for schedule(runtime) private(i,k,j,matrix3)
    for(i = 0; i < ligne_m1; i++){
        for(j = 0; j< ligne_m2; j++){
            for(k=0; k < col2; k++ ){

                matrix3[i][j] = matrix1[i][k]*matrix2[k][j];


            }
        }



    }


}
else{
    printf("\n Impossible de faire le produit maticielle car nombre de colonne de la premiere matrice est different du nombre de ligne de la deuxième matrice.\n ");
}

}


/*
void auto_remp_matrix(int nb_ligneA, int nb_colA, int nb_ligneB, int nb_colB){

    int i, j, k;  
    double** A=NULL, **B= NULL;
    srand(time (NULL)); 
    for(i = 0; i < nb_ligneA; i++){
        for(j = 0; j < nb_ligneB; j++){

            for(k = 0; k < nb_colB; k++){
                    A[i][j]=(rand() % 100)*(0.14);
                    B[i][j]=(rand() %  100)*(0.33);
            }

        }

    }
}

void auto_remp_vector(int nb_ligneV, int nb_col){

        int i;
        double *vect =NULL;


    for(i = 0; i < nb_col;i++){

        vect[i] = rand()*(0.025);




    }
}

*/
