#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"




int main(){

printf("Testing Sample Of The Matrix Library... The 2D Arrays Used Here Are Of Type \"Double\"\n");
printf("Important Note: Can Display More Precision of The Double Results But This Is Just A Test Sample!\n\n");
printf("***Author: Yahya Almardeny***\n");
printf("26/07/2016\n");
printf("*******************************************************************************\n\n");


int x,y;



/*Creating Matrices*/
double **matrix1 = calloc (5, sizeof(double*));
for (x=0;x<5;x++){matrix1[x] = calloc (5, sizeof(double));}
if(matrix1 == NULL) {printf("No Enough Memory"); exit(0);}


double **matrix2 = calloc (5, sizeof(double*));
for (x=0;x<5;x++){matrix2[x] = calloc (5, sizeof(double));}
if(matrix2 == NULL) {printf("No Enough Memory"); exit(0);}


printf("Please Insert The First Matrix, Element By Element, Row By Row\n\n");
for (x=0;x<5;x++){
    for(y=0;y<5;y++){
        printf ("Row %d Column %d : ", x+1,y+1);
        scanf("%lf", &matrix1[x][y]);
        printf("------------------------------\n");
    }
}


printf("\n\nNow Insert The Second Matrix, Element By Element, Row By Row\n\n");

for (x=0;x<5;x++){
    for(y=0;y<5;y++){
        printf ("Row %d Column %d : ", x+1,y+1);
        scanf("%lf", &matrix2[x][y]);
        printf("------------------------------\n");
    }
}

printf("\n***RESULTS***\n\n");

/*Find the Determinant of both matrices*/

double *det1 = calloc (1, sizeof( double));
if(det1 == NULL) {printf("No Enough Memory"); exit(0);}

double *det2 = calloc (1, sizeof(double));
if(det2 == NULL) {printf("No Enough Memory"); exit(0);}

det1 = mDet(5, "lf", matrix1);
det2 = mDet(5, "lf", matrix2);

printf ("The Determinant Of The First Matrix: %.10lf\n", *det1);
printf ("The Determinant Of The Second Matrix: %.10lf\n", *det2);
free(det1); free(det2);

printf("\n******************************************************\n\n");

/*Find the Transpose of both matrices*/
 double **trans1 = calloc (5, sizeof(double*));
for (x=0;x<5;x++){trans1[x] = calloc (5, sizeof(double));}
if(trans1 == NULL) {printf("No Enough Memory"); exit(0);}

double  **trans2 = calloc (5, sizeof( double*));
for (x=0;x<5;x++){trans2[x] = calloc (5, sizeof(double));}
if(trans2 == NULL) {printf("No Enough Memory"); exit(0);}

trans1 = (double**)mTrans (5,5,"lf", matrix1);
trans2 = (double**)mTrans (5,5, "lf", matrix2);

printf("The Transpose of The First Matrix\n");
for (x=0;x<5;x++, printf("\n")){
    for(y=0;y<5;y++){
        printf("%lf ", trans1[x][y]);
    }
}


printf("\nThe Transpose of The Second Matrix\n");
for (x=0;x<5;x++, printf("\n")){
    for(y=0;y<5;y++){
        printf ("%lf ", trans2[x][y]);
    }
}

for (x=0;x<5;x++){free(trans1[x]);} free(trans1);
for (x=0;x<5;x++){free(trans2[x]);} free(trans2);


printf("\n******************************************************\n\n");
/*Add & Subtract Two Matrices*/
double **add = calloc (5, sizeof(double*));
for (x=0;x<5;x++){add[x] = calloc (5, sizeof(double));}
if(add == NULL) {printf("No Enough Memory"); exit(0);}

add = mAdd(5,5,5,5, "lf" , matrix1, matrix2);

printf("The Result of Adding The Two Matrices\n");
for (x=0;x<5;x++, printf("\n")){
    for(y=0;y<5;y++){
        printf("%lf ", add[x][y]);
    }
}

double **sub = calloc (5, sizeof(double*));
for (x=0;x<5;x++){sub[x] = calloc (5, sizeof(double));}
if(sub == NULL) {printf("No Enough Memory"); exit(0);}

sub = mSub(5,5,5,5, "lf" , matrix1, matrix2);

printf("\nThe Result of Subtracting The Two Matrices\n");
for (x=0;x<5;x++, printf("\n")){
    for(y=0;y<5;y++){
        printf("%lf ", sub[x][y]);
    }
}
for (x=0;x<5;x++){free(add[x]);} free(add);
for (x=0;x<5;x++){free(sub[x]);} free(sub);

printf("\n******************************************************\n\n");

/*Find The Matrix Inverse*/
double **inverse1 = calloc (5, sizeof(double*));
for (x=0;x<5;x++){inverse1[x] = calloc (5, sizeof(double));}
if(inverse1 == NULL) {printf("No Enough Memory"); exit(0);}


double **inverse2 = calloc (5, sizeof(double*));
for (x=0;x<5;x++){inverse2[x] = calloc (5, sizeof(double));}
if(inverse2 == NULL) {printf("No Enough Memory"); exit(0);}

inverse1 = mInverse(5,5,"lf",matrix1);
inverse2 = mInverse(5,5,"lf",matrix2);

printf("The Inverse of First Matrix\n");
for (x=0;x<5;x++, printf("\n")){
    for(y=0;y<5;y++){
        printf ("%.15lf  ", inverse1[x][y]);
    }
}

printf("\nThe Inverse of Second Matrix\n");
for (x=0;x<5;x++, printf("\n")){
    for(y=0;y<5;y++){
        printf ("%.15lf  ", inverse2[x][y]);
    }
}

for (x=0;x<5;x++){free(inverse1[x]);} free(inverse1);
for (x=0;x<5;x++){free(inverse2[x]);} free(inverse2);


printf("\n******************************************************\n\n");
/*Divide Two Matrices*/
double **div_result = calloc (5, sizeof(double*));
for (x=0;x<5;x++){div_result[x] = calloc (5, sizeof(double));}
if(div_result == NULL) {printf("No Enough Memory"); exit(0);}

div_result = mDiv(5,5,5,5,"lf", matrix1, matrix2);

printf("The Result Of Dividing the First Matrix By The Second Matrix\n");
for (x=0;x<5;x++, printf("\n")){
    for(y=0;y<5;y++){
        printf ("%.15lf  ", div_result[x][y]);
    }
}
for (x=0;x<5;x++){free(div_result[x]);} free(div_result);


printf("\n******************************************************\n\n");
/*Multiply*/
double **mul_result = calloc (5, sizeof(double*));
for (x=0;x<2;x++){mul_result[x] = calloc (5, sizeof(double));}
if(div_result == NULL) {printf("No Enough Memory"); exit(0);}

mul_result = mMult(5,5,5,5,"lf",matrix1, matrix2);

printf("The Result Of Multiplying The First Matrix By The Second Matrix\n");
for (x=0;x<5;x++,printf("\n")){
    for(y=0;y<5;y++){
        printf ("%.15lf  ",  mul_result[x][y]);
    }
}
for (x=0;x<5;x++){free(mul_result[x]);} free(mul_result);



getchar();
getchar();
return 0;}
