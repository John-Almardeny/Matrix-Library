/* MATRIX LIBRARY (THE IMPLEMENTATION)

@AUTHOR: YAHYA ALMARDENY
24/07/2016
*/


#include <stdarg.h> // FOR VARIADIC FUNCTIONS
#include <stdio.h> // STANDARD INPUT/OUTPUT
#include <string.h> // FOR STRING-CASE COMPARISON IN THE VARIADIC FUNCTIONS
#include<stdlib.h> // FOR CALLOC MAINLY
#include "matrix.h" // THE HEADER WHICH CONTAINS THE DECLARATIONS OF THE FUNCTIONS







/*ADD TWO MATRICES*/




double **mAdd(int row, int col, int row1, int col1, const char *format, ...){
if ((row!=row1) || (col!=col1)){printf("Both Matrices must be equal in size\n"); exit(0);}
if (row<=0 || col<=0 || row1 <=0 || col1 <=0){printf("Columns and Rows must be Greater than Zero\n"); exit(0);}

else{
va_list ap;
va_start (ap, format);
int x,y;



if (strcasecmp(format, "i") == 0 || strcasecmp(format, "d") == 0){/*Integer*/

int **matrix1 = calloc(row, sizeof(int*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(int));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

int **matrix2 = calloc(row1, sizeof(int*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(int));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, int**);
matrix2 = va_arg(ap, int**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double) (matrix1[x][y] + matrix2[x][y]);
    }
}

return answer;
}

else if (strcasecmp(format, "ld") == 0 || strcasecmp(format, "li") == 0){ /*Long*/

long **matrix1 = calloc(row, sizeof(long*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(long));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

long **matrix2 = calloc(row1, sizeof(long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, long**);
matrix2 = va_arg(ap, long**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)(matrix1[x][y] + matrix2[x][y]);
    }
}


return answer;
}

else if (strcasecmp(format, "h") == 0 ){ /*Short*/
short **matrix1 = calloc(row, sizeof(short*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(short));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

short **matrix2 = calloc(row1, sizeof(short*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(short));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, short**);
matrix2 = va_arg(ap, short**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double) (matrix1[x][y] + matrix2[x][y]);
    }
}

return answer;



}


else if (strcasecmp(format, "lf") == 0){ /*Double*/
double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(double));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, double**);
matrix2 = va_arg(ap, double**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (matrix1[x][y] + matrix2[x][y]);
    }
}

return  answer;

}

else if (strcasecmp(format, "lld") == 0 || strcasecmp(format, "lli") == 0){ /*Long Long*/
long long **matrix1 = calloc(row, sizeof(long long*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(long long));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

long long **matrix2 = calloc(row1, sizeof(long long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(long long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, long long**);
matrix2 = va_arg(ap, long long**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = ((double)matrix1[x][y] + (double)matrix2[x][y]);
    }
}


return  answer;


}


else if (strcasecmp(format, "iu") == 0 || strcasecmp(format, "u") == 0){ /*Unsigned Integer*/
unsigned int **matrix1 = calloc(row, sizeof(unsigned int*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned int));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

unsigned int **matrix2 = calloc(row1, sizeof(unsigned int*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned int));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, unsigned int**);
matrix2 = va_arg(ap, unsigned int**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] =(double)(matrix1[x][y] + matrix2[x][y]);
    }
}

return answer;


}

else if (strcasecmp(format, "lu") == 0 ){ /*Unsigned Long*/
unsigned long **matrix1 = calloc(row, sizeof(unsigned long*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned long));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

unsigned long **matrix2 = calloc(row1, sizeof(unsigned long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, unsigned long**);
matrix2 = va_arg(ap, unsigned long**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)(matrix1[x][y] + matrix2[x][y]);
    }
}

return answer;


}
else if (strcasecmp(format, "llu") == 0 ){ /*Unsigned Long Long*/
unsigned long long **matrix1 = calloc(row, sizeof(unsigned long long*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned long long));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

unsigned long long **matrix2 = calloc(row1, sizeof(unsigned long long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned long long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, unsigned long long**);
matrix2 = va_arg(ap, unsigned long long**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)matrix1[x][y] + (double)matrix2[x][y];
    }
}

return  answer;


}


else if (strcasecmp(format, "hu") == 0 ){ /*Unsigned Short*/
unsigned short **matrix1 = calloc(row, sizeof(unsigned short*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned short));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

unsigned short **matrix2 = calloc(row1, sizeof(unsigned short*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned short));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, unsigned short**);
matrix2 = va_arg(ap, unsigned short**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)(matrix1[x][y] + matrix2[x][y]);
    }
}

return  answer;

}


else {printf("Unknown Number Type!\n"); exit(0);}

}

}






















/*SUBTRACT TWO MATRICES*/














double **mSub(int row, int col, int row1, int col1, const char *format, ...){
if ((row!=row1) || (col!=col1)){printf("Both Matrices must be equal in size\n"); exit(0);}
if (row<=0 || col<=0 || row1 <=0 || col1 <=0){printf("Columns and Rows must be Greater than Zero\n"); exit(0);}

else{
va_list ap;
va_start (ap, format);
int x,y;



if (strcasecmp(format, "i") == 0 || strcasecmp(format, "d") == 0){/*Integer*/

int **matrix1 = calloc(row, sizeof(int*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(int));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

int **matrix2 = calloc(row1, sizeof(int*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(int));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, int**);
matrix2 = va_arg(ap, int**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)(matrix1[x][y] - matrix2[x][y]);
    }
}

return  answer;
}

else if (strcasecmp(format, "ld") == 0 || strcasecmp(format, "li") == 0){ /*Long*/

long **matrix1 = calloc(row, sizeof(long*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(long));}
if (matrix1== NULL){printf("No Enough Memory\n"); exit(0);}

long **matrix2 = calloc(row1, sizeof(long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, long**);
matrix2 = va_arg(ap, long**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)(matrix1[x][y] - matrix2[x][y]);
    }
}

return  answer;
}

else if (strcasecmp(format, "h") == 0 ){ /*Short*/
short **matrix1 = calloc(row, sizeof(short*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(short));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

short **matrix2 = calloc(row1, sizeof(short*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(short));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, short**);
matrix2 = va_arg(ap, short**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double) (matrix1[x][y] - matrix2[x][y]);
    }
}

return  answer;



}


else if (strcasecmp(format, "lf") == 0){ /*Double*/
double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(double));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, double**);
matrix2 = va_arg(ap, double**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (matrix1[x][y] - matrix2[x][y]);
    }
}

return  answer;

}

else if (strcasecmp(format, "lld") == 0 || strcasecmp(format, "lli") == 0){ /*Long Long*/
long long **matrix1 = calloc(row, sizeof(long long*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(long long));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

long long **matrix2 = calloc(row1, sizeof(long long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(long long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double**answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, long long**);
matrix2 = va_arg(ap, long long**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = ((double)matrix1[x][y] - (double)matrix2[x][y]);
    }
}


return  answer;


}


else if (strcasecmp(format, "iu") == 0 || strcasecmp(format, "u") == 0){ /*Unsigned Integer*/
unsigned int **matrix1 = calloc(row, sizeof(unsigned int*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned int));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

unsigned int **matrix2 = calloc(row1, sizeof(unsigned int*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned int));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, unsigned int**);
matrix2 = va_arg(ap, unsigned int**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)((double)matrix1[x][y] - (double)matrix2[x][y]);
    }
}

return  answer;


}

else if (strcasecmp(format, "lu") == 0 ){ /*Unsigned Long*/
unsigned long **matrix1 = calloc(row, sizeof(unsigned long*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned long));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

unsigned long **matrix2 = calloc(row1, sizeof(unsigned long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}


double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, unsigned long**);
matrix2 = va_arg(ap, unsigned long**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)((double)matrix1[x][y] - (double)matrix2[x][y]);
    }
}

return answer;


}
else if (strcasecmp(format, "llu") == 0 ){ /*Unsigned Long Long*/
unsigned long long **matrix1 = calloc(row, sizeof(unsigned long long*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned long long));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

unsigned long long **matrix2 = calloc(row1, sizeof(unsigned long long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned long long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, unsigned long long**);
matrix2 = va_arg(ap, unsigned long long**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)((double)matrix1[x][y] - (double)matrix2[x][y]);
    }
}
return answer; // this cast won't affect the precision of the answer because it will be re-cast again with (long long), here just to stop the warning


}


else if (strcasecmp(format, "hu") == 0 ){ /*Unsigned Short*/
unsigned short **matrix1 = calloc(row, sizeof(unsigned short*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned short));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

unsigned short **matrix2 = calloc(row1, sizeof(unsigned short*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned short));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

double **answer = calloc(row, sizeof(double*));
for (x=0;x<row;x++){answer[x] = calloc(col, sizeof(double));}
if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, unsigned short**);
matrix2 = va_arg(ap, unsigned short**);

for (x=0;x<row;x++){
    for(y=0; y<col; y++){
    answer[x][y] = (double)((double)matrix1[x][y] - (double)matrix2[x][y]);
    }
}


return answer;

}


else {printf("Unknown Number Type!\n"); exit(0);}


}

}



















/*FIND A TRANSPOSE OF A GIVEN MATRIX*/











void **mTrans(int row, int col, const char* format, ...){
if (col<=0 || row<=0){printf("**The number of columns and rows must be Greater that Zero**"); exit(0);}
else{
va_list ap;
va_start(ap, format);

int x,y;

if (strcasecmp(format, "i") == 0 || strcasecmp(format, "d") == 0){ /*Integer*/

int **matrix = calloc (row, sizeof(int*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(int));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

int **mTranspose = calloc (col, sizeof(int*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(int));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, int**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}



return (void**)mTranspose;
}

else if (strcasecmp(format, "ld") == 0 || strcasecmp(format, "li") == 0){ /*Long*/
long **matrix = calloc (row, sizeof(long*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(long));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

long **mTranspose = calloc (col, sizeof(long*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(long));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, long**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}


return (void**)mTranspose;
}



else if (strcasecmp(format, "h") == 0 ){ /*Short*/
short **matrix = calloc (row, sizeof(short*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(short));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

short **mTranspose = calloc (col, sizeof(short*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(short));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, short**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}


return (void**)mTranspose;
}


else if (strcasecmp(format, "f") == 0){ /*Float*/
float **matrix = calloc (row, sizeof(float*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(float));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

float **mTranspose = calloc (col, sizeof(float*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(float));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, float**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}

return (void**)mTranspose;

}

else if (strcasecmp(format, "lf") == 0){ /*Double*/
double **matrix = calloc (row, sizeof(double*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(double));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

double **mTranspose = calloc (col, sizeof(double*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(double));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, double**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}

return (void**)mTranspose;

}


else if (strcasecmp(format, "lld") == 0 || strcasecmp(format, "lli") == 0){ /*Long Long*/
long long **matrix = calloc (row, sizeof(long long*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(long long));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

long long **mTranspose = calloc (col, sizeof(long long*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(long long));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, long long**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}

return (void**)mTranspose;

}


else if (strcasecmp(format, "iu") == 0 || strcasecmp(format, "u") == 0){ /*Unsigned Integer*/
unsigned int **matrix = calloc (row, sizeof(unsigned int*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(unsigned int));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

unsigned int **mTranspose = calloc (col, sizeof(int*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(unsigned int));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, unsigned int**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}


return (void**)mTranspose;
}



else if (strcasecmp(format, "lu") == 0 ){ /*Unsigned Long*/
unsigned long **matrix = calloc (row, sizeof(unsigned long*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(unsigned long));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

unsigned long **mTranspose = calloc (col, sizeof(unsigned long*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(unsigned long));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, unsigned long**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}


return (void**)mTranspose;



}
else if (strcasecmp(format, "llu") == 0 ){ /*Unsigned Long Long*/
unsigned long long **matrix = calloc (row, sizeof(unsigned long long*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(unsigned long long));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

unsigned long long **mTranspose = calloc (col, sizeof(unsigned long long*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(unsigned long long));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, unsigned long long**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}


return (void**)mTranspose;


}


else if (strcasecmp(format, "hu") == 0 ){ /*Unsigned Short*/
unsigned short **matrix = calloc (row, sizeof(unsigned short*));
for (x=0;x<row;x++){matrix[x] = calloc(col, sizeof(unsigned short));}
if (matrix == NULL){printf("No Enough Memory\n"), exit(0);}

unsigned short **mTranspose = calloc (col, sizeof(short*));
for (x=0;x<col;x++){mTranspose[x] = calloc(row, sizeof(unsigned short));}
if (mTranspose == NULL){printf("No Enough Memory\n"), exit(0);}

matrix = va_arg (ap, unsigned short**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        mTranspose[y][x] = matrix[x][y];
    }
}


return (void**)mTranspose;


}



else {printf("Unknown Number Type!\n"); exit(0);}

}

}




















/*MULTIPLY TWO MATRICES*/















double **mMult(int row , int col, int row2, int col2 ,const char* format, ...){ /*do multiplication and return dynamic array with the result, cast with (int**)*/


if (col!= row2){printf("**The number of columns of the 1st matrix must equal the number of rows of the 2nd matrix**"); exit(0);}
else if (col2<=0 || col<=0 || row<=0 || row2<=0){printf("**The number of columns and rows must be Greater that Zero**"); exit(0);}

else{ /*if all are greater than zero and number of 1st matrix' cols equals number of 2nd matrix's rows -> everything is legal*/
va_list ap; // Argument Parameter: A Variable to hold the information needed for "va_start"
va_start(ap, format); // macro to initialize va_list with the number of arguments(second parameter i.e format)


if (strcasecmp(format, "i") == 0 || strcasecmp(format, "d") == 0){ /*Integer*/ // It returns 0 when they are alike

    int unleash_row,x,y;
    double r=0;
    /*Array To Hold First Parameter*/
    int **matrix1 = calloc(row, sizeof(int*));
    for(x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(int));}
    if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}
    /*Array To Hold Second Parameter*/
    int **matrix2 = calloc(row2, sizeof(int*));
    for(x=0;x<row2;x++){matrix2[x] = calloc(col2, sizeof(int));}
    if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Copy First and Second Parameters to Matrix1 & Matrix2*/
    matrix1 = va_arg(ap, int**);// it takes the first parameter from the stack and interprets it to int** (this access first parameter)
    matrix2 = va_arg(ap, int**);// it takes the second parameter form the stack and interprets it to the int** (this access second parameter)
    /*Create **Array to hold and return the answer of multiplication*/
    double **answer = calloc(row, sizeof(double*));
    for (x=0;x<row;x++){answer[x] = calloc(col2, sizeof(double));}
    if (answer == NULL){printf("No Enough Memory\n"); exit(0);}



        if (row>=2){ /*both are square matrices or the first is a row matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
             for (unleash_row=0; unleash_row<row; unleash_row++){
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r = r + (double)((double)matrix1[unleash_row][y] * (double)matrix2[y][x]);
                        }

                    answer[unleash_row][x]= r; //pick up the result2
                    r=0; // reset for next round
                }
            }

        return answer;
        }


        else if (row==1){/*1st matrix is a row matrix and 2nd matrix is any legal matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r+= ((double)matrix1[0][y] * (double)matrix2[y][x]);
                        }
                    answer[0][x]= r; //pick up the result
                    r=0; // reset for next round
                }

        return answer;
        }



       else{
            exit(0);} /*For Any Unexpected Case*/
}


else if (strcasecmp(format, "ld") == 0 || strcasecmp(format, "li") == 0){ /*Long*/

    int unleash_row,x,y;
    double r=0;
    /*Array To Hold First Parameter*/
    long **matrix1 = calloc(row, sizeof(long*));
    for(x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(long));}
    if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}
    /*Array To Hold Second Parameter*/
    long **matrix2 = calloc(row2, sizeof(long*));
    for(x=0;x<row2;x++){matrix2[x] = calloc(col2, sizeof(long));}
    if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Copy First and Second Parameters to Matrix1 & Matrix2*/
    matrix1 = va_arg(ap, long**);// it takes the first parameter from the stack and interprets it to int** (this access first parameter)
    matrix2 = va_arg(ap, long**);// it takes the second parameter form the stack and interprets it to the int** (this access second parameter)
    /*Create **Array to hold and return the answer of multiplication*/
     double **answer = calloc(row, sizeof(double*));
    for (x=0;x<row;x++){answer[x] = calloc(col2, sizeof(double));}
    if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

        if (row>=2){ /*both are square matrices or the first is a row matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
             for (unleash_row=0; unleash_row<row; unleash_row++){
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r = r + (double)((double)matrix1[unleash_row][y] * (double)matrix2[y][x]);
                        }

                    answer[unleash_row][x]= r; //pick up the result2
                    r=0; // reset for next round
                }
            }

        return answer; // cast because the function signature is of type int** but that will not affect the result
        }


        else if (row==1){/*1st matrix is a row matrix and 2nd matrix is any legal matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r+= ((double)matrix1[0][y] * (double)matrix2[y][x]);
                        }
                    answer[0][x]= r; //pick up the result
                    r=0; // reset for next round
                }

        return answer;
        }



       else{
            exit(0);} /*For Any Unexpected Case*/


}

else if (strcasecmp(format, "h") == 0 ){ /*Short*/
    int unleash_row,x,y;
    double r=0;
    /*Array To Hold First Parameter*/
    short **matrix1 = calloc(row, sizeof(short*));
    for(x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(short));}
    if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}
    /*Array To Hold Second Parameter*/
    short **matrix2 = calloc(row2, sizeof(short*));
    for(x=0;x<row2;x++){matrix2[x] = calloc(col2, sizeof(short));}
    if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Copy First and Second Parameters to Matrix1 & Matrix2*/
    matrix1 = va_arg(ap, short**);// it takes the first parameter from the stack and interprets it to int** (this access first parameter)
    matrix2 = va_arg(ap, short**);// it takes the second parameter form the stack and interprets it to the int** (this access second parameter)
    /*Create **Array to hold and return the answer of multiplication*/
    double **answer = calloc(row, sizeof(double*));
    for (x=0;x<row;x++){answer[x] = calloc(col2, sizeof(double));}
    if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

        if (row>=2){ /*both are square matrices or the first is a row matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
             for (unleash_row=0; unleash_row<row; unleash_row++){
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r = r + (double)((double)matrix1[unleash_row][y] * (double)matrix2[y][x]);
                        }

                    answer[unleash_row][x]= r; //pick up the result2
                    r=0; // reset for next round
                }
            }

        return answer;
        }


        else if (row==1){/*1st matrix is a row matrix and 2nd matrix is any legal matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                       r+= ((double)matrix1[0][y] * (double)matrix2[y][x]);
                        }
                    answer[0][x]= r; //pick up the result
                    r=0; // reset for next round
                }

        return answer;
        }



       else{
            exit(0);} /*For Any Unexpected Case*/


}


else if (strcasecmp(format, "lf") == 0){ /*Double*/
    int unleash_row,x,y;
    double r=0;
    /*Array To Hold First Parameter*/
    double **matrix1 = calloc(row, sizeof(double*));
    for(x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
    if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}
    /*Array To Hold Second Parameter*/
    double **matrix2 = calloc(row2, sizeof(double*));
    for(x=0;x<row2;x++){matrix2[x] = calloc(col2, sizeof(double));}
    if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Copy First and Second Parameters to Matrix1 & Matrix2*/
    matrix1 = va_arg(ap, double**);// it takes the first parameter from the stack and interprets it to int** (this access first parameter)
    matrix2 = va_arg(ap, double**);// it takes the second parameter form the stack and interprets it to the int** (this access second parameter)
    /*Create **Array to hold and return the answer of multiplication*/
    double **answer =  calloc(row, sizeof(double*));
    for (x=0; x<row;x++){answer[x]= calloc(col2,sizeof(double));}
    if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

        if (row>=2){ /*both are square matrices or the first is a row matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
             for (unleash_row=0; unleash_row<row; unleash_row++){
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r+= matrix1[unleash_row][y] * matrix2[y][x];
                        }

                    answer[unleash_row][x]= r; //pick up the result2
                    r=0; // reset for next round
                }
            }

        return answer;
        }


        else if (row==1){/*1st matrix is a row matrix and 2nd matrix is any legal matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r+= matrix1[0][y] * matrix2[y][x];
                        }
                    answer[0][x]= r; //pick up the result
                    r=0; // reset for next round
                }

        return answer;
        }



       else{
            exit(0);} /*For Any Unexpected Case*/


}
else if (strcasecmp(format, "lld") == 0 || strcasecmp(format, "lli") == 0){ /*Long Long*/
    int unleash_row,x,y;
    double r=0;
    /*Array To Hold First Parameter*/
    long long **matrix1 = calloc(row, sizeof(long long*));
    for(x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(long long));}
    if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}
    /*Array To Hold Second Parameter*/
    long long **matrix2 = calloc(row2, sizeof(long long*));
    for(x=0;x<row2;x++){matrix2[x] = calloc(col2, sizeof(long long));}
    if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Copy First and Second Parameters to Matrix1 & Matrix2*/
    matrix1 = va_arg(ap, long long**);// it takes the first parameter from the stack and interprets it to int** (this access first parameter)
    matrix2 = va_arg(ap, long long**);// it takes the second parameter form the stack and interprets it to the int** (this access second parameter)
    /*Create **Array to hold and return the answer of multiplication*/
    double **answer =  calloc(row, sizeof(double*));
    for (x=0; x<row;x++){answer[x]= calloc(col2,sizeof(double));}
    if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

        if (row>=2){ /*both are square matrices or the first is a row matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
             for (unleash_row=0; unleash_row<row; unleash_row++){
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r = r + (double)((double)matrix1[unleash_row][y] * (double)matrix2[y][x]);
                        }

                    answer[unleash_row][x]= r; //pick up the result2
                    r=0; // reset for next round
                }
            }

        return answer;
        }


        else if (row==1){/*1st matrix is a row matrix and 2nd matrix is any legal matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r+= ((double)matrix1[0][y] * (double)matrix2[y][x]);
                        }
                    answer[0][x]= r; //pick up the result
                    r=0; // reset for next round
                }

        return answer;
        }



       else{
            exit(0);} /*For Any Unexpected Case*/


}


else if (strcasecmp(format, "iu") == 0 || strcasecmp(format, "u") == 0){ /*Unsigned Integer*/
    int unleash_row,x,y;
    double r=0;
    /*Array To Hold First Parameter*/
    unsigned int **matrix1 = calloc(row, sizeof(unsigned int*));
    for(x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned int));}
    if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}
    /*Array To Hold Second Parameter*/
    unsigned int **matrix2 = calloc(row2, sizeof(unsigned int*));
    for(x=0;x<row2;x++){matrix2[x] = calloc(col2, sizeof(unsigned int));}
    if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Copy First and Second Parameters to Matrix1 & Matrix2*/
    matrix1 = va_arg(ap, unsigned int**);// it takes the first parameter from the stack and interprets it to int** (this access first parameter)
    matrix2 = va_arg(ap, unsigned int**);// it takes the second parameter form the stack and interprets it to the int** (this access second parameter)
    /*Create **Array to hold and return the answer of multiplication*/
    double **answer = calloc(row, sizeof(double*));
    for (x=0;x<row;x++){answer[x] = calloc(col2, sizeof(double));}
    if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

        if (row>=2){ /*both are square matrices or the first is a row matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
             for (unleash_row=0; unleash_row<row; unleash_row++){
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r = r + (double)((double)matrix1[unleash_row][y] * (double)matrix2[y][x]);
                        }

                    answer[unleash_row][x]= r; //pick up the result2
                    r=0; // reset for next round
                }
            }

        return answer;
        }


        else if (row==1){/*1st matrix is a row matrix and 2nd matrix is any legal matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r+= ((double)matrix1[0][y] * (double)matrix2[y][x]);
                        }
                    answer[0][x]= r; //pick up the result
                    r=0; // reset for next round
                }

        return answer;
        }



       else{
            exit(0);} /*For Any Unexpected Case*/


}

else if (strcasecmp(format, "lu") == 0 ){ /*Unsigned Long*/
    int unleash_row,x,y;
    double r = 0;
    /*Array To Hold First Parameter*/
    unsigned long **matrix1 = calloc(row, sizeof(unsigned long*));
    for(x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned long));}
    if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}
    /*Array To Hold Second Parameter*/
    unsigned long **matrix2 = calloc(row2, sizeof(unsigned long*));
    for(x=0;x<row2;x++){matrix2[x] = calloc(col2, sizeof(unsigned long));}
    if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Copy First and Second Parameters to Matrix1 & Matrix2*/
    matrix1 = va_arg(ap, unsigned long**);// it takes the first parameter from the stack and interprets it to int** (this access first parameter)
    matrix2 = va_arg(ap, unsigned long**);// it takes the second parameter form the stack and interprets it to the int** (this access second parameter)
    /*Create **Array to hold and return the answer of multiplication*/
     double **answer = calloc(row, sizeof(double*));
    for (x=0;x<row;x++){answer[x] = calloc(col2, sizeof(double));}
    if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

        if (row>=2){ /*both are square matrices or the first is a row matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
             for (unleash_row=0; unleash_row<row; unleash_row++){
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r = r + (double)((double)matrix1[unleash_row][y] * (double)matrix2[y][x]);
                        }

                    answer[unleash_row][x]= r; //pick up the result2
                    r=0; // reset for next round
                }
            }

        return answer;
        }


        else if (row==1){/*1st matrix is a row matrix and 2nd matrix is any legal matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r+= ((double)matrix1[0][y] * (double)matrix2[y][x]);
                        }
                    answer[0][x]= r; //pick up the result
                    r=0; // reset for next round
                }

        return answer;
        }



       else{
            exit(0);} /*For Any Unexpected Case*/


}
else if (strcasecmp(format, "llu") == 0 ){ /*Unsigned Long Long*/
    int unleash_row,x,y;
    unsigned long long r=0;
    /*Array To Hold First Parameter*/
    unsigned long long **matrix1 = calloc(row, sizeof(unsigned long long*));
    for(x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned long long));}
    if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}
    /*Array To Hold Second Parameter*/
    unsigned long long **matrix2 = calloc(row2, sizeof(unsigned long long*));
    for(x=0;x<row2;x++){matrix2[x] = calloc(col2, sizeof(unsigned long long));}
    if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Copy First and Second Parameters to Matrix1 & Matrix2*/
    matrix1 = va_arg(ap, unsigned long long**);// it takes the first parameter from the stack and interprets it to int** (this access first parameter)
    matrix2 = va_arg(ap, unsigned long long**);// it takes the second parameter form the stack and interprets it to the int** (this access second parameter)
    /*Create **Array to hold and return the answer of multiplication*/
    double **answer =  calloc(row, sizeof(double*));
    for (x=0; x<row;x++){answer[x]= calloc(col2,sizeof(double));}
    if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

        if (row>=2){ /*both are square matrices or the first is a row matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
             for (unleash_row=0; unleash_row<row; unleash_row++){
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                         r = r + (double)((double)matrix1[unleash_row][y] * (double)matrix2[y][x]);
                        }

                    answer[unleash_row][x]= r; //pick up the result2
                    r=0; // reset for next round
                }
            }

        return answer;
        }


        else if (row==1){/*1st matrix is a row matrix and 2nd matrix is any legal matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r+= ((double)matrix1[0][y] * (double)matrix2[y][x]);
                        }
                    answer[0][x]= r; //pick up the result
                    r=0; // reset for next round
                }

        return answer;
        }



       else{
            exit(0);} /*For Any Unexpected Case*/


}


else if (strcasecmp(format, "hu") == 0 ){ /*Unsigned Short*/
    int unleash_row,x,y;
    double r=0;
    /*Array To Hold First Parameter*/
    unsigned short **matrix1 = calloc(row, sizeof(unsigned short*));
    for(x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(unsigned short));}
    if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}
    /*Array To Hold Second Parameter*/
    unsigned short **matrix2 = calloc(row2, sizeof(unsigned short*));
    for(x=0;x<row2;x++){matrix2[x] = calloc(col2, sizeof(unsigned short));}
    if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Copy First and Second Parameters to Matrix1 & Matrix2*/
    matrix1 = va_arg(ap, unsigned short**);// it takes the first parameter from the stack and interprets it to int** (this access first parameter)
    matrix2 = va_arg(ap, unsigned short**);// it takes the second parameter form the stack and interprets it to the int** (this access second parameter)
    /*Create **Array to hold and return the answer of multiplication*/
     double **answer = calloc(row, sizeof(double*));
    for (x=0;x<row;x++){answer[x] = calloc(col2, sizeof(double));}
    if (answer == NULL){printf("No Enough Memory\n"); exit(0);}

        if (row>=2){ /*both are square matrices or the first is a row matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
             for (unleash_row=0; unleash_row<row; unleash_row++){
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r = r + (double)((double)matrix1[unleash_row][y] * (double)matrix2[y][x]);
                        }

                    answer[unleash_row][x]= r; //pick up the result2
                    r=0; // reset for next round
                }
            }

        return answer;
        }


        else if (row==1){/*1st matrix is a row matrix and 2nd matrix is any legal matrix*/
             /*Start multiplying first row in the first by first column in the 2nd matrix and so on*/
                for(x=0; x<col2; x++){
                    for(y=0; y<col; y++){
                        r+= ((double)matrix1[0][y] * (double)matrix2[y][x]);
                        }
                    answer[0][x]= r; //pick up the result
                    r=0; // reset for next round
                }

        return answer;
        }



       else{
            exit(0);} /*For Any Unexpected Case*/


}



else {printf("Unknown Number Type!\n"); exit(0);}

}


return 0;

}



















/*FIND THE INVERSE OF A GIVEN MATRIX*/











double **mInverse(int row , int col, const char* format, ...){

if (col<=0 || row<=0){printf("**The number of columns and rows must be greater that 0**"); exit(0);}
else if (col!=row) {printf("**It must be a square matrix (i.e columns=rows)**"); exit(0);}

else{ /*if all are greater than zero and number -> everything is legal*/
va_list ap; // Argument Parameter: A Variable to hold the information needed for "va_start"
va_start(ap, format); // macro to initialize va_list with the number of arguments(second parameter i.e format)

int x,y,i,j, unwanted_row,unwanted_col,var3,col1, limit=0;
double change_sign =1;
if (strcasecmp(format, "i") == 0 || strcasecmp(format, "d") == 0){ /*Integer*/ // It returns 0 when they are alike
    if (col==2){
    int **matrix;
    matrix = calloc (row, sizeof(int*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(int));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}
    matrix = va_arg(ap, int**);

    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"i", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    inverse[0][0]= det * ((double)(matrix[1][1]));
    inverse[0][1]= det * ((double)(matrix[0][1] * -1));
    inverse[1][0]= det * ((double)(matrix[1][0] * -1));
    inverse[1][1]= det * ((double)(matrix[0][0]));

    free(det_result);
    return inverse;

    }


    else{
    int **holder = calloc(row-1, sizeof(int*));
    for (x=0; x<row-1; x++){holder[x] = calloc(col-1, sizeof(int));}
    if (holder == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the pre-answer*/
    double **pre_inverse;
    pre_inverse = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){pre_inverse[x]=  calloc(col, sizeof(double));}
    if (pre_inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the final answer*/
    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Create The Matrix (copy of the received parameter*/
    int **matrix;
    matrix = calloc (row, sizeof(int*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(int));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Assign The parameter to the matrix*/
    matrix = va_arg(ap, int**);

    /*Find the 1/Determinant*/
    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"i", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;


    /*Start Inversing*/
    for (unwanted_row=x=y=i=j=0; unwanted_row<col; unwanted_row++){ /*repeat the whole process COL times (note: it's square matrix, so COL==ROW), to  iterate over the rows*/
        for (unwanted_col=0; unwanted_col<col; unwanted_col++){ /*repeat the whole process COL times , to  iterate over the columns*/
                for (var3=0; var3<col; var3++){
                    for (col1=0; col1<col; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                         if (var3!=unwanted_row && col1 !=unwanted_col){
                                      holder[x][y]= matrix[var3][col1];

                                      y++;
                                      if(y==(col-1)){
                                            x++;
                                            y=0;
                                      }
                                      if(x==(col-1)){
                                      double *temp_answer = calloc(1, sizeof(double));
                                      if (temp_answer == NULL){printf("No Enough Memory\n"); exit(0);}
                                      temp_answer = mDet((col-1),"i", holder);
                                      pre_inverse[i][j] = det * (*temp_answer);
                                      free(temp_answer);
                                            j++;

                                                if(j==col){
                                                    i++;
                                                    j=0;
                                                }
                                                x=y=0;
                                            }

                }
                }
                }
                }
                }
if (col%2 == 0){
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
            change_sign *= -1;
        }

}

else{
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
        }

}

     for(x=0;x<row;x++){/*copy in an inversed way*/ /*Make the transpose = swap */
        for(y=0;y<col;y++){
               inverse[y][x] =  pre_inverse[x][y];
        }
    }

    for(x=0;x<row-1;x++){free(holder[x]);} free(holder);
    for(x=0;x<row;x++){free(pre_inverse[x]);} free(pre_inverse);
    free(det_result);

    return inverse;

}
}


else if (strcasecmp(format, "ld") == 0 || strcasecmp(format, "li") == 0){ /*Long*/
    if (col==2){
    long **matrix;
    matrix = calloc (row, sizeof(long*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(long));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}
    matrix = va_arg(ap, long**);

    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"li", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    inverse[0][0]= det * ((double)(matrix[1][1]));
    inverse[0][1]= det * ((double)(matrix[0][1] * -1));
    inverse[1][0]= det * ((double)(matrix[1][0] * -1));
    inverse[1][1]= det * ((double)(matrix[0][0]));

    free(det_result);
    return inverse;

    }


    else{
    long **holder = calloc(row-1, sizeof(long*));
    for (x=0; x<row-1; x++){holder[x] = calloc(col-1, sizeof(long));}
    if (holder == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the pre-answer*/
    double **pre_inverse;
    pre_inverse = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){pre_inverse[x]=  calloc(col, sizeof(double));}
    if (pre_inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the final answer*/
    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Create The Matrix (copy of the received parameter*/
    long **matrix;
    matrix = calloc (row, sizeof(long*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(long));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Assign The parameter to the matrix*/
    matrix = va_arg(ap, long**);

    /*Find the 1/Determinant*/
     double  *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"li", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    /*Start Inversing*/
    for (unwanted_row=x=y=i=j=0; unwanted_row<col; unwanted_row++){ /*repeat the whole process COL times (note: it's square matrix, so COL==ROW), to  iterate over the rows*/
        for (unwanted_col=0; unwanted_col<col; unwanted_col++){ /*repeat the whole process COL times , to  iterate over the columns*/
                for (var3=0; var3<col; var3++){
                    for (col1=0; col1<col; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                         if (var3!=unwanted_row && col1 !=unwanted_col){
                                      holder[x][y]= matrix[var3][col1];
                                      y++;
                                      if(y==(col-1)){
                                            x++;
                                            y=0;
                                      }
                                      if(x==(col-1)){
                                      double *temp_answer = calloc(1, sizeof(double));
                                      if (temp_answer == NULL){printf("No Enough Memory\n"); exit(0);}
                                      temp_answer =  mDet((col-1),"li", holder);
                                      pre_inverse[i][j] = det * (*temp_answer);
                                      free(temp_answer);

                                            j++;
                                                if(j==col){
                                                    i++;
                                                    j=0;
                                                }
                                                x=y=0;
                                            }

                }
                }
                }
                }
                }




if (col%2 == 0){
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
            change_sign *= -1;
        }

}

else{
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
        }

}


     for(x=0;x<row;x++){/*copy in an inversed way*/ /*Make the transpose = swap */
        for(y=0;y<col;y++){
               inverse[y][x] =  pre_inverse[x][y];
        }
    }

    for(x=0;x<row-1;x++){free(holder[x]);} free(holder);
    for(x=0;x<row;x++){free(pre_inverse[x]);} free(pre_inverse);
    free(det_result);
    return inverse;


}
}

else if (strcasecmp(format, "h") == 0 ){ /*Short*/
    if (col==2){
    short **matrix;
    matrix = calloc (row, sizeof(short*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(short));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}
    matrix = va_arg(ap, short**);

    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"h", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    inverse[0][0]= det * ((double)(matrix[1][1]));
    inverse[0][1]= det * ((double)(matrix[0][1] * -1));
    inverse[1][0]= det * ((double)(matrix[1][0] * -1));
    inverse[1][1]= det * ((double)(matrix[0][0]));

    free(det_result);
    return inverse;

    }

    else{
    short **holder = calloc(row-1, sizeof(short*));
    for (x=0; x<row-1; x++){holder[x] = calloc(col-1, sizeof(short));}
    if (holder == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the pre-answer*/
    double **pre_inverse;
    pre_inverse = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){pre_inverse[x]=  calloc(col, sizeof(double));}
    if (pre_inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the final answer*/
    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Create The Matrix (copy of the received parameter*/
    short **matrix;
    matrix = calloc (row, sizeof(short*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(short));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Assign The parameter to the matrix*/
    matrix = va_arg(ap, short**);

    /*Find the 1/Determinant*/
    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"h", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 /(*det_result);

    /*Start Inversing*/
    for (unwanted_row=x=y=i=j=0; unwanted_row<col; unwanted_row++){ /*repeat the whole process COL times (note: it's square matrix, so COL==ROW), to  iterate over the rows*/
        for (unwanted_col=0; unwanted_col<col; unwanted_col++){ /*repeat the whole process COL times , to  iterate over the columns*/
                for (var3=0; var3<col; var3++){
                    for (col1=0; col1<col; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                         if (var3!=unwanted_row && col1 !=unwanted_col){
                                      holder[x][y]= matrix[var3][col1];
                                      y++;
                                      if(y==(col-1)){
                                            x++;
                                            y=0;
                                      }
                                      if(x==(col-1)){
                                      double *temp_answer = calloc(1, sizeof(double));
                                      if (temp_answer == NULL){printf("No Enough Memory\n"); exit(0);}
                                      temp_answer = mDet((col-1),"h", holder);
                                      pre_inverse[i][j]=det * (*temp_answer);
                                      free(temp_answer);

                                            j++;
                                                if(j==col){
                                                    i++;
                                                    j=0;
                                                }
                                                x=y=0;
                                            }

                }
                }
                }
                }
                }




if (col%2 == 0){
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
            change_sign *= -1;
        }

}

else{
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
        }

}


     for(x=0;x<row;x++){/*copy in an inversed way*/ /*Make the transpose = swap */
        for(y=0;y<col;y++){
               inverse[y][x] =  pre_inverse[x][y];
        }
    }

    for(x=0;x<row-1;x++){free(holder[x]);} free(holder);
    for(x=0;x<row;x++){free(pre_inverse[x]);} free(pre_inverse);
    free(det_result);

    return inverse;

}
}


else if (strcasecmp(format, "lf") == 0){ /*Double*/
    if (col==2){
    double **matrix;
    matrix = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(double));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}
    matrix = va_arg(ap, double**);

    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"lf", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    inverse[0][0]= det * (matrix[1][1]);
    inverse[0][1]= det * (matrix[0][1] * -1);
    inverse[1][0]= det * (matrix[1][0] * -1);
    inverse[1][1]= det * (matrix[0][0]);

    free(det_result);
    return inverse;

    }


    else{
    double **holder = calloc(row-1, sizeof(double*));
    for (x=0; x<row-1; x++){holder[x] = calloc(col-1, sizeof(double));}
    if (holder == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the pre-answer*/
    double **pre_inverse;
    pre_inverse = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){pre_inverse[x]=  calloc(col, sizeof(double));}
    if (pre_inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the final answer*/
    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Create The Matrix (copy of the received parameter*/
    double **matrix;
    matrix = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(double));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Assign The parameter to the matrix*/
    matrix = va_arg(ap, double**);

    /*Find the 1/Determinant*/
    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = (double*)mDet(col,"lf", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result; // no need for cast because it's already of type double

    /*Start Inversing*/
    for (unwanted_row=x=y=i=j=0; unwanted_row<col; unwanted_row++){ /*repeat the whole process COL times (note: it's square matrix, so COL==ROW), to  iterate over the rows*/
        for (unwanted_col=0; unwanted_col<col; unwanted_col++){ /*repeat the whole process COL times , to  iterate over the columns*/
                for (var3=0; var3<col; var3++){
                    for (col1=0; col1<col; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                         if (var3!=unwanted_row && col1 !=unwanted_col){
                                      holder[x][y]= matrix[var3][col1];

                                      y++;
                                      if(y==(col-1)){
                                            x++;
                                            y=0;
                                      }
                                      if(x==(col-1)){
                                      double *temp_answer = calloc(1, sizeof(double));
                                      if (temp_answer == NULL){printf("No Enough Memory\n"); exit(0);}
                                      temp_answer = mDet((col-1),"lf", holder);
                                      pre_inverse[i][j] = det * (*temp_answer); // no need for cast

                                      free(temp_answer);

                                            j++;
                                                if(j==col){
                                                    i++;
                                                    j=0;
                                                }
                                                x=y=0;
                                            }

                }

                }

                }
                }
                }




if (col%2 == 0){
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
            change_sign *= -1;
        }

}

else{
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
        }

}

     for(x=0;x<row;x++){/*copy in an inversed way*/ /*Make the transpose = swap */
        for(y=0;y<col;y++){
               inverse[y][x] =  pre_inverse[x][y];
        }
    }

    for(x=0;x<row-1;x++){free(holder[x]);} free(holder);
    for(x=0;x<row;x++){free(pre_inverse[x]);} free(pre_inverse);
    free(det_result);

    return inverse;

    }
}


else if (strcasecmp(format, "lld") == 0 || strcasecmp(format, "lli") == 0 ){ /*Long Long*/
    if (col==2){
    long long **matrix;
    matrix = calloc (row, sizeof(long long*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(long long));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}
    matrix = va_arg(ap, long long**);

    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"lli", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    inverse[0][0]= det * ((double)(matrix[1][1]));
    inverse[0][1]= det * ((double)(matrix[0][1] * -1));
    inverse[1][0]= det * ((double)(matrix[1][0] * -1));
    inverse[1][1]= det * ((double)(matrix[0][0]));

    free(det_result);
    return inverse;

    }


    else{
    long long **holder = calloc(row-1, sizeof(long long*));
    for (x=0; x<row-1; x++){holder[x] = calloc(col-1, sizeof(long long));}
    if (holder == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the pre-answer*/
    double **pre_inverse;
    pre_inverse = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){pre_inverse[x]=  calloc(col, sizeof(double));}
    if (pre_inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the final answer*/
    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Create The Matrix (copy of the received parameter*/
    long long **matrix;
    matrix = calloc (row, sizeof(long long*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(long long));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Assign The parameter to the matrix*/
    matrix = va_arg(ap, long long**);

    /*Find the 1/Determinant*/
    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"lli", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 /(*det_result);


    /*Start Inversing*/
    for (unwanted_row=x=y=i=j=0; unwanted_row<col; unwanted_row++){ /*repeat the whole process COL times (note: it's square matrix, so COL==ROW), to  iterate over the rows*/
        for (unwanted_col=0; unwanted_col<col; unwanted_col++){ /*repeat the whole process COL times , to  iterate over the columns*/
                for (var3=0; var3<col; var3++){
                    for (col1=0; col1<col; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                         if (var3!=unwanted_row && col1 !=unwanted_col){
                                      holder[x][y]= matrix[var3][col1];
                                      y++;
                                      if(y==(col-1)){
                                            x++;
                                            y=0;
                                      }
                                      if(x==(col-1)){
                                      double *temp_answer = calloc(1, sizeof(double));
                                      if (temp_answer == NULL){printf("No Enough Memory\n"); exit(0);}
                                      temp_answer = mDet((col-1),"lli", holder);
                                      pre_inverse[i][j] = det * (*temp_answer);
                                      free(temp_answer);

                                            j++;
                                                if(j==col){
                                                    i++;
                                                    j=0;
                                                }
                                                x=y=0;
                                            }

                }
                }
                }
                }
                }




if (col%2 == 0){
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
            change_sign *= -1;
        }

}

else{
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
        }

}


     for(x=0;x<row;x++){/*copy in an inversed way*/ /*Make the transpose = swap */
        for(y=0;y<col;y++){
               inverse[y][x] =  pre_inverse[x][y];
        }
    }

    for(x=0;x<row-1;x++){free(holder[x]);} free(holder);
    for(x=0;x<row;x++){free(pre_inverse[x]);} free(pre_inverse);
    free(det_result);

    return inverse;

    }
}


else if (strcasecmp(format, "iu") == 0 || strcasecmp(format, "u") == 0){ /*Unsigned Integer*/
    if (col==2){
    unsigned int **matrix;
    matrix = calloc (row, sizeof(unsigned int*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(unsigned int));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}
    matrix = va_arg(ap, unsigned int**);

    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"u", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    inverse[0][0]= det * ((double)(matrix[1][1]));
    inverse[0][1]= det * ((double)(matrix[0][1] * -1));
    inverse[1][0]= det * ((double)(matrix[1][0] * -1));
    inverse[1][1]= det * ((double)(matrix[0][0]));

    free(det_result);
    return inverse;

    }


    else{
    unsigned int **holder = calloc(row-1, sizeof(unsigned int*));
    for (x=0; x<row-1; x++){holder[x] = calloc(col-1, sizeof(unsigned int));}
    if (holder == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the pre-answer*/
    double **pre_inverse;
    pre_inverse = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){pre_inverse[x]=  calloc(col, sizeof(double));}
    if (pre_inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the final answer*/
    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Create The Matrix (copy of the received parameter*/
    unsigned int **matrix;
    matrix = calloc (row, sizeof(unsigned int*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(unsigned int));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Assign The parameter to the matrix*/
    matrix = va_arg(ap, unsigned int**);

    /*Find the 1/Determinant*/
    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"iu", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 /(*det_result);

    /*Start Inversing*/
    for (unwanted_row=x=y=i=j=0; unwanted_row<col; unwanted_row++){ /*repeat the whole process COL times (note: it's square matrix, so COL==ROW), to  iterate over the rows*/
        for (unwanted_col=0; unwanted_col<col; unwanted_col++){ /*repeat the whole process COL times , to  iterate over the columns*/
                for (var3=0; var3<col; var3++){
                    for (col1=0; col1<col; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                         if (var3!=unwanted_row && col1 !=unwanted_col){
                                      holder[x][y]= matrix[var3][col1];
                                      y++;
                                      if(y==(col-1)){
                                            x++;
                                            y=0;
                                      }
                                      if(x==(col-1)){
                                      double *temp_answer = calloc(1, sizeof(double));
                                      if (temp_answer == NULL){printf("No Enough Memory\n"); exit(0);}
                                      temp_answer = mDet((col-1),"iu", holder);

                                      pre_inverse[i][j] = det * (*temp_answer);
                                      free(temp_answer);

                                            j++;
                                                if(j==col){
                                                    i++;
                                                    j=0;
                                                }
                                                x=y=0;
                                            }

                }
                }
                }
                }
                }




if (col%2 == 0){
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
            change_sign *= -1;
        }

}

else{
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
        }

}


     for(x=0;x<row;x++){/*copy in an inversed way*/ /*Make the transpose = swap */
        for(y=0;y<col;y++){
               inverse[y][x] =  pre_inverse[x][y];
        }
    }

    for(x=0;x<row-1;x++){free(holder[x]);} free(holder);
    for(x=0;x<row;x++){free(pre_inverse[x]);} free(pre_inverse); free(det_result);

    return inverse;

    }

}


else if (strcasecmp(format, "lu") == 0 ){ /*Unsigned Long*/
    if (col==2){
    unsigned long **matrix;
    matrix = calloc (row, sizeof(unsigned long*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(unsigned long));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}
    matrix = va_arg(ap, unsigned long**);

    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"lu", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    inverse[0][0]= det * ((double)(matrix[1][1]));
    inverse[0][1]= det * ((double)(matrix[0][1] * -1));
    inverse[1][0]= det * ((double)(matrix[1][0] * -1));
    inverse[1][1]= det * ((double)(matrix[0][0]));

    free(det_result);
    return inverse;

    }


    else{
    unsigned long **holder = calloc(row-1, sizeof(unsigned long*));
    for (x=0; x<row-1; x++){holder[x] = calloc(col-1, sizeof(unsigned long));}
    if (holder == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the pre-answer*/
    double **pre_inverse;
    pre_inverse = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){pre_inverse[x]=  calloc(col, sizeof(double));}
    if (pre_inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the final answer*/
    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Create The Matrix (copy of the received parameter*/
    unsigned long **matrix;
    matrix = calloc (row, sizeof(unsigned long*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(unsigned long));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Assign The parameter to the matrix*/
    matrix = va_arg(ap, unsigned long**);

    /*Find the 1/Determinant*/
    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"lu", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 /(*det_result);

    /*Start Inversing*/
    for (unwanted_row=x=y=i=j=0; unwanted_row<col; unwanted_row++){ /*repeat the whole process COL times (note: it's square matrix, so COL==ROW), to  iterate over the rows*/
        for (unwanted_col=0; unwanted_col<col; unwanted_col++){ /*repeat the whole process COL times , to  iterate over the columns*/
                for (var3=0; var3<col; var3++){
                    for (col1=0; col1<col; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                         if (var3!=unwanted_row && col1 !=unwanted_col){
                                      holder[x][y]= matrix[var3][col1];
                                      y++;
                                      if(y==(col-1)){
                                            x++;
                                            y=0;
                                      }
                                      if(x==(col-1)){
                                      double *temp_answer = calloc(1, sizeof(double));
                                      if (temp_answer == NULL){printf("No Enough Memory\n"); exit(0);}
                                      temp_answer = mDet((col-1),"lu", holder);


                                      pre_inverse[i][j] = det * (*temp_answer);

                                      free(temp_answer);

                                            j++;
                                                if(j==col){
                                                    i++;
                                                    j=0;
                                                }
                                                x=y=0;
                                            }

                }
                }
                }
                }
                }




if (col%2 == 0){
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
            change_sign *= -1;
        }

}

else{
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
        }

}


     for(x=0;x<row;x++){/*copy in an inversed way*/ /*Make the transpose = swap */
        for(y=0;y<col;y++){
               inverse[y][x] =  pre_inverse[x][y];
        }
    }

    for(x=0;x<row-1;x++){free(holder[x]);} free(holder);
    for(x=0;x<row;x++){free(pre_inverse[x]);} free(pre_inverse);
    free(det_result);

    return inverse;


    }

}


else if (strcasecmp(format, "llu") == 0 ){ /*Unsigned Long Long*/
       if (col==2){
    unsigned long long **matrix;
    matrix = calloc (row, sizeof(unsigned long long*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(unsigned long long));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}
    matrix = va_arg(ap, unsigned long long**);

    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"llu", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    inverse[0][0]= det * ((double)(matrix[1][1]));
    inverse[0][1]= det * ((double)(matrix[0][1] * -1));
    inverse[1][0]= det * ((double)(matrix[1][0] * -1));
    inverse[1][1]= det * ((double)(matrix[0][0]));

    free(det_result);
    return inverse;

    }


    else{
    unsigned long long **holder = calloc(row-1, sizeof(unsigned long long*));
    for (x=0; x<row-1; x++){holder[x] = calloc(col-1, sizeof(unsigned long long));}
    if (holder == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the pre-answer*/
    double **pre_inverse;
    pre_inverse = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){pre_inverse[x]=  calloc(col, sizeof(double));}
    if (pre_inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the final answer*/
    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Create The Matrix (copy of the received parameter*/
    unsigned long long **matrix;
    matrix = calloc (row, sizeof(long long*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(unsigned long long));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Assign The parameter to the matrix*/
    matrix = va_arg(ap, unsigned long long**);

    /*Find the 1/Determinant*/
    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"llu", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 /(*det_result);

    /*Start Inversing*/
    for (unwanted_row=x=y=i=j=0; unwanted_row<col; unwanted_row++){ /*repeat the whole process COL times (note: it's square matrix, so COL==ROW), to  iterate over the rows*/
        for (unwanted_col=0; unwanted_col<col; unwanted_col++){ /*repeat the whole process COL times , to  iterate over the columns*/
                for (var3=0; var3<col; var3++){
                    for (col1=0; col1<col; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                         if (var3!=unwanted_row && col1 !=unwanted_col){
                                      holder[x][y]= matrix[var3][col1];
                                      y++;
                                      if(y==(col-1)){
                                            x++;
                                            y=0;
                                      }
                                      if(x==(col-1)){
                                          double *temp_answer = calloc(1, sizeof(double));
                                          if (temp_answer == NULL){printf("No Enough Memory\n"); exit(0);}
                                          temp_answer = mDet((col-1),"llu", holder);

                                          pre_inverse[i][j] = det * (*temp_answer);
                                          free(temp_answer);

                                            j++;
                                                if(j==col){
                                                    i++;
                                                    j=0;
                                                }
                                                x=y=0;
                                            }

                }
                }
                }
                }
                }




if (col%2 == 0){
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
            change_sign *= -1;
        }

}

else{
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
        }

}

     for(x=0;x<row;x++){/*copy in an inversed way*/ /*Make the transpose = swap */
        for(y=0;y<col;y++){
               inverse[y][x] =  pre_inverse[x][y];
        }
    }

    for(x=0;x<row-1;x++){free(holder[x]);} free(holder);
    for(x=0;x<row;x++){free(pre_inverse[x]);} free(pre_inverse);
    free(det_result);

    return inverse;

    }
}


else if (strcasecmp(format, "hu") == 0 ){ /*Unsigned Short*/
       if (col==2){
    unsigned short **matrix;
    matrix = calloc (row, sizeof(unsigned short*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(unsigned short));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}
    matrix = va_arg(ap, unsigned short**);

    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"hu", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 / *det_result;

    inverse[0][0]= det * ((double)(matrix[1][1]));
    inverse[0][1]= det * ((double)(matrix[0][1] * -1));
    inverse[1][0]= det * ((double)(matrix[1][0] * -1));
    inverse[1][1]= det * ((double)(matrix[0][0]));

    free(det_result);
    return inverse;

    }


    else{
    unsigned short **holder = calloc(row-1, sizeof(unsigned short*));
    for (x=0; x<row-1; x++){holder[x] = calloc(col-1, sizeof(unsigned short));}
    if (holder == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the pre-answer*/
    double **pre_inverse;
    pre_inverse = calloc (row, sizeof(double*));
    for (x=0; x<row; x++){pre_inverse[x]=  calloc(col, sizeof(double));}
    if (pre_inverse == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Create Array to Hold the final answer*/
    double **inverse=  calloc(row, sizeof(double*));
    for (x=0; x<row; x++){inverse[x]= calloc(col, sizeof(double));}
    if (inverse == NULL){printf("No Enough Memory\n"); exit(0);}


    /*Create The Matrix (copy of the received parameter*/
    unsigned short **matrix;
    matrix = calloc (row, sizeof(unsigned short*));
    for (x=0; x<row; x++){matrix[x]=  calloc(col, sizeof(unsigned short));}
    if (matrix == NULL){printf("No Enough Memory\n"); exit(0);}

    /*Assign The parameter to the matrix*/
    matrix = va_arg(ap, unsigned short**);

    /*Find the 1/Determinant*/
    double *det_result = calloc(1, sizeof(double));
    if (det_result == NULL){printf("No Enough Memory\n"); exit(0);}
    det_result = mDet(col,"hu", matrix);
    if (*det_result == 0){printf("Cannot Find the Inverse because the Determinant of the given Matrix equals Zero\n"); exit(0);}
    double det;
    det = 1 /(*det_result);

    /*Start Inversing*/
    for (unwanted_row=x=y=i=j=0; unwanted_row<col; unwanted_row++){ /*repeat the whole process COL times (note: it's square matrix, so COL==ROW), to  iterate over the rows*/
        for (unwanted_col=0; unwanted_col<col; unwanted_col++){ /*repeat the whole process COL times , to  iterate over the columns*/
                for (var3=0; var3<col; var3++){
                    for (col1=0; col1<col; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                         if (var3!=unwanted_row && col1 !=unwanted_col){
                                      holder[x][y]= matrix[var3][col1];
                                      y++;
                                      if(y==(col-1)){
                                            x++;
                                            y=0;
                                      }
                                      if(x==(col-1)){
                                          double *temp_answer = calloc(1, sizeof(double));
                                          if (temp_answer == NULL){printf("No Enough Memory\n"); exit(0);}
                                          temp_answer = mDet((col-1),"hu", holder);

                                          pre_inverse[i][j] = det * (*temp_answer);
                                          free(temp_answer);

                                            j++;
                                                if(j==col){
                                                    i++;
                                                    j=0;
                                                }
                                                x=y=0;
                                            }

                }
                }
                }
                }
                }




if (col%2 == 0){
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
            change_sign *= -1;
        }

}

else{
    for(x=0;x<row;x++){
            for(y=0;y<col;y++){
                   pre_inverse[x][y] *= change_sign;
                   change_sign *= -1;
                   if (pre_inverse[x][y] == -0){pre_inverse[x][y] = 0;}
            }
        }

}

     for(x=0;x<row;x++){/*copy in an inversed way*/ /*Make the transpose = swap */
        for(y=0;y<col;y++){
               inverse[y][x] =  pre_inverse[x][y];
        }
    }

    for(x=0;x<row-1;x++){free(holder[x]);} free(holder);
    for(x=0;x<row;x++){free(pre_inverse[x]);} free(pre_inverse);
    free(det_result);

    return inverse;

    }

}


else {printf("Unknown Number Type!\n"); exit(0);}

}





return 0;}






















/*DIVIDE ONE MATRICE BY ANOTHER */













double **mDiv(int row, int col, int row1, int col1, const char* format, ...){
if (col!= row1){printf("**The number of columns of the 1st matrix must equal the number of rows of the 2nd matrix**"); exit(0);}
else if (col1<=0 || col<=0 || row<=0 || row1<=0){printf("**The number of columns and rows must be Greater that Zero**"); exit(0);}
else if (col1!=row1){printf("**Second Matrix must be a square matrix (columns=rows)**"); exit(0);}

else{
va_list ap;
va_start(ap, format);
int x,y;
if (strcasecmp(format, "i") == 0 || strcasecmp(format, "d") == 0){

int **receiver = calloc(row, sizeof(int*));
for (x=0;x<row;x++){receiver[x] = calloc(col, sizeof(int));}
if (receiver == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

int **matrix2 = calloc(row1, sizeof(int*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(int));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

receiver = va_arg(ap, int**);
matrix2 = va_arg(ap, int**);

for (x=0;x<row;x++){ /*converting from int to double*/
    for(y=0;y<col;y++){
        matrix1[x][y] = (double)receiver[x][y];
    }
}


double **inverse_matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){inverse_matrix2[x] = calloc(col1, sizeof(double));}
if (inverse_matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}


 // Find the inverse of the second matrix
inverse_matrix2 = mInverse(row1, col1, "i", matrix2);
 // multiply the first matrix by the inverse
double **result = calloc(row, sizeof(double*));
for (x=0;x<row1;x++){result[x] = calloc(col1, sizeof(double));}
if (result == NULL){printf("No Enough Memory\n"); exit(0);}
result = mMult(row, col, row1, col1, "lf", matrix1, inverse_matrix2);
/*free Arrays*/
for (x=0;x<row1;x++){free(inverse_matrix2[x]);} free(inverse_matrix2);
for (x=0;x<row;x++){free(matrix1[x]);} free(matrix1);

 //return the result
return result;
}

else if (strcasecmp(format, "ld") == 0 || strcasecmp(format, "li") == 0){ /*Long*/
long **receiver = calloc(row, sizeof(long*));
for (x=0;x<row;x++){receiver[x] = calloc(col, sizeof(long));}
if (receiver == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

long **matrix2 = calloc(row1, sizeof(long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

receiver = va_arg(ap, long**);
matrix2 = va_arg(ap, long**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        matrix1[x][y] = (double)receiver[x][y];
    }
}


double **inverse_matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){inverse_matrix2[x] = calloc(col1, sizeof(double));}
if (inverse_matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

 // Find the inverse of the second matrix
 inverse_matrix2 = mInverse(row1, col1, "li", matrix2);
 // multiply the first matrix by the inverse
double **result = calloc(row, sizeof(double*));
for (x=0;x<row1;x++){result[x] = calloc(col1, sizeof(double));}
if (result == NULL){printf("No Enough Memory\n"); exit(0);}

result = mMult(row, col, row1, col1, "lf", matrix1, inverse_matrix2);
/*free Arrays*/
for (x=0;x<row1;x++){free(inverse_matrix2[x]);} free(inverse_matrix2);
for (x=0;x<row;x++){free(matrix1[x]);} free(matrix1);

 //return the result
return result;


}

else if (strcasecmp(format, "h") == 0 ){ /*Short*/
short **receiver = calloc(row, sizeof(short*));
for (x=0;x<row;x++){receiver[x] = calloc(col, sizeof(short));}
if (receiver == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

short **matrix2 = calloc(row1, sizeof(short*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(short));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

receiver = va_arg(ap, short**);
matrix2 = va_arg(ap, short**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        matrix1[x][y] = (double)receiver[x][y];
    }
}

double **inverse_matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){inverse_matrix2[x] = calloc(col1, sizeof(double));}
if (inverse_matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

 // Find the inverse of the second matrix
 inverse_matrix2 = mInverse(row1, col1, "h", matrix2);
 // multiply the first matrix by the inverse
 double **result = calloc(row, sizeof(double*));
for (x=0;x<row1;x++){result[x] = calloc(col1, sizeof(double));}
if (result == NULL){printf("No Enough Memory\n"); exit(0);}
result = mMult(row, col, row1, col1, "lf", matrix1, inverse_matrix2);
/*free Arrays*/
for (x=0;x<row1;x++){free(inverse_matrix2[x]);} free(inverse_matrix2);
for (x=0;x<row;x++){free(matrix1[x]);} free(matrix1);

 //return the result
return result;

}


else if (strcasecmp(format, "lf") == 0){ /*Double*/
double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(double));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

matrix1 = va_arg(ap, double**);
matrix2 = va_arg(ap, double**);



double **inverse_matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){inverse_matrix2[x] = calloc(col1, sizeof(double));}
if (inverse_matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}


inverse_matrix2 = mInverse(row1,col1, "lf", matrix2);

double **result = calloc(row, sizeof(double*));
for (x=0;x<row;x++){result[x] = calloc(col1, sizeof(double));}
if (result == NULL){printf("No Enough Memory\n"); exit(0);}
result = mMult(row, col, row1, col1, "lf", matrix1, inverse_matrix2);
/*free Arrays*/
for (x=0;x<row1;x++){free(inverse_matrix2[x]);} free(inverse_matrix2);



 //return the result
return result;

}
else if (strcasecmp(format, "lld") == 0 || strcasecmp(format, "lli") == 0){ /*Long Long*/
long long **receiver = calloc(row, sizeof(long long*));
for (x=0;x<row;x++){receiver[x] = calloc(col, sizeof(long long));}
if (receiver == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}


long long **matrix2 = calloc(row1, sizeof(long long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(long long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

receiver = va_arg(ap, long long**);
matrix2 = va_arg(ap, long long**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        matrix1[x][y] = (double)receiver[x][y]; // it will lose precision if the long long value is very big
    }
}

double **inverse_matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){inverse_matrix2[x] = calloc(col1, sizeof(double));}
if (inverse_matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

 // Find the inverse of the second matrix
 inverse_matrix2 = mInverse(row1, col1, "lli", matrix2);
 // multiply the first matrix by the inverse
double **result = calloc(row, sizeof(double*));
for (x=0;x<row1;x++){result[x] = calloc(col1, sizeof(double));}
if (result == NULL){printf("No Enough Memory\n"); exit(0);}
result = mMult(row, col, row1, col1, "lf", matrix1, inverse_matrix2);
/*free Arrays*/
for (x=0;x<row1;x++){free(inverse_matrix2[x]);} free(inverse_matrix2);
for (x=0;x<row;x++){free(matrix1[x]);} free(matrix1);

 //return the result
return result;


}


else if (strcasecmp(format, "iu") == 0 || strcasecmp(format, "u") == 0){ /*Unsigned Integer*/

unsigned int **receiver = calloc(row, sizeof(unsigned int*));
for (x=0;x<row;x++){receiver[x] = calloc(col, sizeof(unsigned int));}
if (receiver == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}


unsigned int **matrix2 = calloc(row1, sizeof(unsigned int*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned int));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

receiver = va_arg(ap, unsigned int**);
matrix2 = va_arg(ap, unsigned int**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        matrix1[x][y] = (double)receiver[x][y];
    }
}

double **inverse_matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){inverse_matrix2[x] = calloc(col1, sizeof(double));}
if (inverse_matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}
 // Find the inverse of the second matrix
 inverse_matrix2 = mInverse(row1, col1, "iu", matrix2);
 // multiply the first matrix by the inverse
 double **result = calloc(row, sizeof(double*));
for (x=0;x<row1;x++){result[x] = calloc(col1, sizeof(double));}
if (result == NULL){printf("No Enough Memory\n"); exit(0);}
result = mMult(row, col, row1, col1, "lf", matrix1, inverse_matrix2);
/*free Arrays*/
for (x=0;x<row1;x++){free(inverse_matrix2[x]);} free(inverse_matrix2);
for (x=0;x<row;x++){free(matrix1[x]);} free(matrix1);

 //return the result
return result;
}

else if (strcasecmp(format, "lu") == 0 ){ /*Unsigned Long*/
unsigned long **receiver = calloc(row, sizeof(unsigned long*));
for (x=0;x<row;x++){receiver[x] = calloc(col, sizeof(unsigned long));}
if (receiver == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}


unsigned  long **matrix2 = calloc(row1, sizeof(unsigned  long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned  long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

receiver = va_arg(ap, unsigned  long**);
matrix2 = va_arg(ap, unsigned  long**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        matrix1[x][y] = (double)receiver[x][y];
    }
}

double **inverse_matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){inverse_matrix2[x] = calloc(col1, sizeof(double));}
if (inverse_matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

 // Find the inverse of the second matrix
 inverse_matrix2 = mInverse(row1, col1, "lu", matrix2);
 // multiply the first matrix by the inverse
 double **result = calloc(row, sizeof(double*));
for (x=0;x<row1;x++){result[x] = calloc(col1, sizeof(double));}
if (result == NULL){printf("No Enough Memory\n"); exit(0);}
result = mMult(row, col, row1, col1, "lf", matrix1, inverse_matrix2);
/*free Arrays*/
for (x=0;x<row1;x++){free(inverse_matrix2[x]);} free(inverse_matrix2);
for (x=0;x<row;x++){free(matrix1[x]);} free(matrix1);

 //return the result
return result;


}
else if (strcasecmp(format, "llu") == 0 ){ /*Unsigned Long Long*/
unsigned long long **receiver = calloc(row, sizeof(unsigned long long*));
for (x=0;x<row;x++){receiver[x] = calloc(col, sizeof(unsigned long long));}
if (receiver == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}


unsigned long long **matrix2 = calloc(row1, sizeof(unsigned long long*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned long long));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

receiver = va_arg(ap, unsigned long long**);
matrix2 = va_arg(ap, unsigned long long**);

for (x=0;x<row;x++){
    for(y=0;y<col;y++){
        matrix1[x][y] = (double)receiver[x][y]; // it will lose precision if the long long value is very big
    }
}

double **inverse_matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){inverse_matrix2[x] = calloc(col1, sizeof(double));}
if (inverse_matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

 // Find the inverse of the second matrix
 inverse_matrix2 = mInverse(row1, col1, "llu", matrix2);
 // multiply the first matrix by the inverse
 double **result = calloc(row, sizeof(double*));
for (x=0;x<row1;x++){result[x] = calloc(col1, sizeof(double));}
if (result == NULL){printf("No Enough Memory\n"); exit(0);}
result = mMult(row, col, row1, col1, "lf", matrix1, inverse_matrix2);
/*free Arrays*/
for (x=0;x<row1;x++){free(inverse_matrix2[x]);} free(inverse_matrix2);
for (x=0;x<row;x++){free(matrix1[x]);} free(matrix1);

 //return the result
return result;

}


else if (strcasecmp(format, "hu") == 0 ){ /*Unsigned Short*/
unsigned short **receiver = calloc(row, sizeof(unsigned short*));
for (x=0;x<row;x++){receiver[x] = calloc(col, sizeof(unsigned short));}
if (receiver == NULL){printf("No Enough Memory\n"); exit(0);}

double **matrix1 = calloc(row, sizeof(double*));
for (x=0;x<row;x++){matrix1[x] = calloc(col, sizeof(double));}
if (matrix1 == NULL){printf("No Enough Memory\n"); exit(0);}


unsigned short **matrix2 = calloc(row1, sizeof(unsigned short*));
for (x=0;x<row1;x++){matrix2[x] = calloc(col1, sizeof(unsigned short));}
if (matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

receiver = va_arg(ap, unsigned short**);
matrix2 = va_arg(ap, unsigned short**);

for (x=0;x<row;x++){ /*converting from int to double*/
    for(y=0;y<col;y++){
        matrix1[x][y] = (double)receiver[x][y];
    }
}

double **inverse_matrix2 = calloc(row1, sizeof(double*));
for (x=0;x<row1;x++){inverse_matrix2[x] = calloc(col1, sizeof(double));}
if (inverse_matrix2 == NULL){printf("No Enough Memory\n"); exit(0);}

 // Find the inverse of the second matrix
 inverse_matrix2 = mInverse(row1, col1, "hu", matrix2);
 // multiply the first matrix by the inverse
 double **result = calloc(row, sizeof(double*));
for (x=0;x<row1;x++){result[x] = calloc(col1, sizeof(double));}
if (result == NULL){printf("No Enough Memory\n"); exit(0);}
result = mMult(row, col, row1, col1, "lf", matrix1, inverse_matrix2);
/*free Arrays*/
for (x=0;x<row1;x++){free(inverse_matrix2[x]);} free(inverse_matrix2);
for (x=0;x<row;x++){free(matrix1[x]);} free(matrix1);

 //return the result
return result;

}



else {printf("Unknown Number Type!\n"); exit(0);}

}
}




























/*FIND THE DETERMINANT OF A GIVEN SQUARE MATRIX*/

















double *mDet(int s, const char* format, ...){
va_list ap; // Argument Parameter: A Variable to hold the information needed for "va_start"
va_start(ap, format); // macro to initialize va_list with the number of arguments(second parameter i.e format)

/*possibilities*/

if (strcasecmp(format, "i") == 0 || strcasecmp(format, "d") == 0){ /*Integer*/ // It returns 0 when they are alike
double *determinant = calloc(1,sizeof(double)); // the final answer: the determinant
if(determinant == NULL){printf("No Enough Memory\n"); exit(0);}

int COL, x ,y , **input_matrix, **receiver;

receiver = calloc(s, sizeof(int*));
for(x=0; x<s;x++){receiver[x]= calloc(s,sizeof(int));}
if (receiver == NULL){printf("No Enough Memory\n"), exit(0);}

input_matrix = calloc(s, sizeof(int*));
for(x=0; x<s;x++){input_matrix[x]= calloc(s,sizeof(int));}
if (input_matrix == NULL){printf("No Enough Memory\n"), exit(0);}
receiver = va_arg(ap, int**); // why not directly to input_matrix? not to affect the original matrix

for (x=0;x<s;x++){
    for(y=0;y<s;y++){
        input_matrix[x][y] = receiver[x][y];
    }
}



COL = s;
/*if user wants to know the determinant of 2x2 matrix, no need for all of this hard work, it can be calculated easily!*/
if (COL==2){ /*find 2x2 determinant*/

    /*FIND THE DETERMINANT*/
    *determinant = (double)((input_matrix[0][0] * input_matrix[1][1]) - (input_matrix[0][1] * input_matrix[1][0]));

    /*Free Input_matrix*/

    for(x=0;x<COL; x++){free(input_matrix[x]);}
    free(input_matrix);

    /*RETURN THE DETERMINANT*/
    return determinant;
}



/*FIND THE DETERMINANT FOR A MATRIC HIGHER THAN 2X2*/
else if (COL>2){
double *container, *pick_up_array;
int copy_variable, container_index, number_of_matrices_to_split, COL_value, number_of_2x2_elements, pick_up_index, move_to_next_dimenssion;
copy_variable=0; container_index=0; number_of_matrices_to_split=COL; COL_value=COL; number_of_2x2_elements=0; pick_up_index=0; move_to_next_dimenssion = COL-3;

    /*ESTIMATE THE SIZE OF THE CONTAINER*/
    register unsigned int var1 = 3, var2; //start from the 3*3 matrices, these variables ill be used later in other loops
    unsigned long elements =4; // the size of 2*2 matrices inside every 3*3 matrix

    while (var1<=COL){
        elements *= var1;
        var1++;
    }

    number_of_2x2_elements = elements-1; // we subtract 1 because container starts from index 0 and "number_of_2x2_elements" will be used in later calculations
    elements += (elements*0.75); //to include the 2*2 matrices AND the 3*3 matrices

    container =  calloc(elements , sizeof(double)); // create the array "container" of size elements
    if (container == NULL){printf("***No Enough Memory****\n"); exit(0);}




    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/
    register unsigned int var3, col1, unwanted_col;


    /*START SPLITTING*/
    for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
        for (var3=0; var3<COL; var3++){// will loop the matrix row /*here we finish all the columns in every row i.e. row row*/
            for (col1=0; col1<COL; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                 if (var3!=0 && col1 !=unwanted_col){
                     container[container_index]= (double)input_matrix[var3][col1]; // if it is not the first row and not the unwanted column then assign it to splitter
                     container_index++;

        }
        }
        }
        }






   /*PICK UP REQUIRED ELEMENTS FROM EACH SPLIT MATRIX(i.e. FIRST ROW)*/
    unsigned int no_of_elements_to_save=1; register double change_s=1;// change_sign variable to control the sings of the elements, it always starts positive
   if (COL_value==3){no_of_elements_to_save=3;}
   else {
        var1=3;
        while (var1<COL_value){// a method to estimate how many elements will be saved in the pick_up_array
                if (var1==3){no_of_elements_to_save = (no_of_elements_to_save * (var1 *(var1+1)));}
                else{no_of_elements_to_save = (no_of_elements_to_save * (var1+1));}
                no_of_elements_to_save = no_of_elements_to_save + (var1+1);
                var1++;
                }
                }

    pick_up_array = calloc(no_of_elements_to_save, sizeof(double)); //Create the pick_up_array
    if (pick_up_array == NULL) {printf("***No Enough Memory****\n"); exit(0);}

    /*fill in the pick_up_array*/
    for (var1=0; var1<COL; var1++,pick_up_index++){ // we need to pick up only the first row of every matrix, that can be controlled by the COL value

            pick_up_array[pick_up_index] = (double)input_matrix[0][var1];
            pick_up_array[pick_up_index] *= change_s;
            change_s *= (-1);
            }

COL--; //Decrement COL for next level




register int a, b;
/*the main work and flow in high level of details*/
for(a=0; a<move_to_next_dimenssion; a++){
        for (b=0; b<number_of_matrices_to_split; b++){

                /*create array*/
                double **input_matrix = calloc(COL, sizeof(double*));
                for(var1= 0 ; var1<COL ; var1++){input_matrix[var1] = calloc(COL, sizeof(double));}
                if (input_matrix == NULL){printf("***No Enough Memory****\n"); exit(0);}

                /*copy_container_to_input_matrix every time based on the size of COL*/
                for (var1= 0; var1<COL ; var1++){
                    for (var2=0; var2<COL; var2++, copy_variable++ ){
                        input_matrix[var1][var2] = container[copy_variable]; // copy the container to the input_matrix
                        }
                        }

                /*pick_up_required_elements*/
                change_s=1;
                for (var1=0; var1<COL; var1++, pick_up_index++ ){
                        pick_up_array[pick_up_index] = input_matrix[0][var1];
                        pick_up_array[pick_up_index] *= change_s;
                        change_s = change_s * (-1);
                        }

                    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/


                  /*START SPLITTING*/
                  for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
                        for (var3=0; var3<COL; var3++){
                            for ( col1=0; col1<COL; col1++){
                                if (var3!=0 && col1!=unwanted_col){
                                    container[container_index]= input_matrix[var3][col1];
                                    container_index++;

                 }
                 }
                 }
                 }




            /*free_array(input_matrix);*/
            for (var1=0; var1<(COL-1); var1++){free(input_matrix[var1]);}
            free(input_matrix);
            }


/*CHANGE VARIABLE "NUMBER OF MATRICES TO SPLIT"*/
number_of_matrices_to_split *= COL;
/*DECREMENT COL FOR NEXT LEVEL*/
COL--;

/*REMOVE UNWANTED ELEMENTS FROM THE CONTAINER TO REDUCE ITS SIZE(copy_variable IS THE REFERENCE); */
var1=copy_variable; var2=0;

while (var1!=container_index){// index represent the current size of the array "container"
        container[var2]=container[var1]; // this way only copies the required elements over th unwanted elements
        var1++;
        var2++;
        }

container_index -= copy_variable; //decrement the container_index by "copy_variable"
copy_variable = 0;// make it zero because it will start over form the index zero while copying from container to input_matrix
}

/**************THE END OF THE LOOP*************/




/*CHANGE CONTAINER TO 2X2 DETERMINANTS*/
for (var1=0 ,var2=0; var1<=number_of_2x2_elements; var1=var1+4 , var2++){// jump over every 4 elements in every loop because the 2in2 matrix size 4 elements
        container[var2] = ((container[var1] * container[var1+3])-(container[var1+1] * container[var1+2]));
        }
number_of_2x2_elements = var2; // now the number of 2x2 elements is reduced



/*FURTHER PROCESS TO FIND THE DETERMINANT*/
int var4=0, x, limit = COL_value, col_size=(COL_value-1); // limit starts with the size of the first row of the main matrix
var3=COL_value; var2=0;
for (var1=0; var1<(COL_value-3); var1++){
        while (var2!=limit){
            for(x =0; x<col_size; x++,var3++){
                pick_up_array[var3] = pick_up_array[var3] * pick_up_array[var4]; //multiply the first row in the main matrix by the first row in the next lower level

                }
            var2++;// var2 here to stop "while loop" when it equals to the limit
            var4++;
            }
        limit *= col_size ; // then limit increases according to the size of the new matrix e.g. 4x4 matrix has 4 "3x3" matrices (12 elements to cycle through)
        col_size--; // decrement the size of the col for the next-lower level
        var2=0;//start while loop again from zero to count how many loop to do
        }

var3--; // decrement var3 because the array in general start with index 0 , and var3 here should represent the final index

int var =(number_of_2x2_elements-1);
       while (var>=0){
        container[var] = (container[var]) * (pick_up_array[var3]); //multiply the 2x2_determinants in the container by the pick_up_elements
        var--;
        var3--;
        }


for (var1=0 ; var1<number_of_2x2_elements; var1++){

        *determinant =  *determinant + container[var1]; // add all the elements to find the determinant
        }



free(container);
free(pick_up_array);
return determinant;

}
else{exit(0);}
}




else if (strcasecmp(format, "ld") == 0 || strcasecmp(format, "li") == 0){ /*Long*/
double *determinant = calloc(1,sizeof(double)); // the final answer: the determinant
if(determinant == NULL){printf("No Enough Memory\n"); exit(0);}

int COL, x ,y; long **input_matrix, **receiver;

receiver = calloc(s, sizeof(long*));
for(x=0; x<s;x++){receiver[x]= calloc(s,sizeof(long));}
if (receiver == NULL){printf("No Enough Memory\n"), exit(0);}

input_matrix = calloc(s, sizeof(long*));
for(x=0; x<s;x++){input_matrix[x]= calloc(s,sizeof(long));}
if (input_matrix == NULL){printf("No Enough Memory\n"), exit(0);}
receiver = va_arg(ap, long**); // why not directly to input_matrix? not to affect the original matrix

for (x=0;x<s;x++){
    for(y=0;y<s;y++){
        input_matrix[x][y] = receiver[x][y];
    }
}


COL = s;
/*if user wants to know the determinant of 2x2 matrix, no need for all of this hard work, it can be calculated easily!*/
if (COL==2){ /*find 2x2 determinant*/

    /*FIND THE DETERMINANT*/
    *determinant = (double)((input_matrix[0][0] * input_matrix[1][1]) - (input_matrix[0][1] * input_matrix[1][0]));

    /*Free Input_matrix*/

    for(x=0;x<COL; x++){free(input_matrix[x]);}
    free(input_matrix);

    /*RETURN THE DETERMINANT*/
    return determinant;
}



/*FIND THE DETERMINANT FOR A MATRIC HIGHER THAN 2X2*/
else if (COL>2){
double *container, *pick_up_array;
int copy_variable, container_index, number_of_matrices_to_split, COL_value, number_of_2x2_elements, pick_up_index, move_to_next_dimenssion;
copy_variable=0; container_index=0; number_of_matrices_to_split=COL; COL_value=COL; number_of_2x2_elements=0; pick_up_index=0; move_to_next_dimenssion = COL-3;

    /*ESTIMATE THE SIZE OF THE CONTAINER*/
    register unsigned int var1 = 3, var2; //start from the 3*3 matrices, these variables ill be used later in other loops
    unsigned long elements =4; // the size of 2*2 matrices inside every 3*3 matrix

    while (var1<=COL){
        elements *= var1;
        var1++;
    }

    number_of_2x2_elements = elements-1; // we subtract 1 because container starts from index 0 and "number_of_2x2_elements" will be used in later calculations
    elements += (elements*0.75); //to include the 2*2 matrices AND the 3*3 matrices

    container =  calloc(elements , sizeof(double)); // create the array "container" of size elements
    if (container == NULL){printf("***No Enough Memory****\n"); exit(0);}




    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/
    register unsigned int var3, col1, unwanted_col;


    /*START SPLITTING*/
    for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
        for (var3=0; var3<COL; var3++){// will loop the matrix row /*here we finish all the columns in every row i.e. row row*/
            for (col1=0; col1<COL; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                 if (var3!=0 && col1 !=unwanted_col){
                     container[container_index]= (double)input_matrix[var3][col1]; // if it is not the first row and not the unwanted column then assign it to splitter
                     container_index++;

        }
        }
        }
        }






   /*PICK UP REQUIRED ELEMENTS FROM EACH SPLIT MATRIX(i.e. FIRST ROW)*/
    unsigned int no_of_elements_to_save=1; register double change_s=1;// change_sign variable to control the sings of the elements, it always starts positive
   if (COL_value==3){no_of_elements_to_save=3;}
   else {
        var1=3;
        while (var1<COL_value){// a method to estimate how many elements will be saved in the pick_up_array
                if (var1==3){no_of_elements_to_save = (no_of_elements_to_save * (var1 *(var1+1)));}
                else{no_of_elements_to_save = (no_of_elements_to_save * (var1+1));}
                no_of_elements_to_save = no_of_elements_to_save + (var1+1);
                var1++;
                }
                }

    pick_up_array = calloc(no_of_elements_to_save, sizeof(double)); //Create the pick_up_array
    if (pick_up_array == NULL) {printf("***No Enough Memory****\n"); exit(0);}

    /*fill in the pick_up_array*/
    for (var1=0; var1<COL; var1++,pick_up_index++){ // we need to pick up only the first row of every matrix, that can be controlled by the COL value

            pick_up_array[pick_up_index] = (double)input_matrix[0][var1];
            pick_up_array[pick_up_index] *= change_s;
            change_s *= (-1);
            }

COL--; //Decrement COL for next level




register int a, b;
/*the main work and flow in high level of details*/
for(a=0; a<move_to_next_dimenssion; a++){
        for (b=0; b<number_of_matrices_to_split; b++){

                /*create array*/
                double **input_matrix = calloc(COL, sizeof(double*));
                for(var1= 0 ; var1<COL ; var1++){input_matrix[var1] = calloc(COL, sizeof(double));}
                if (input_matrix == NULL){printf("***No Enough Memory****\n"); exit(0);}

                /*copy_container_to_input_matrix every time based on the size of COL*/
                for (var1= 0; var1<COL ; var1++){
                    for (var2=0; var2<COL; var2++, copy_variable++ ){
                        input_matrix[var1][var2] = container[copy_variable]; // copy the container to the input_matrix
                        }
                        }

                /*pick_up_required_elements*/
                change_s=1;
                for (var1=0; var1<COL; var1++, pick_up_index++ ){
                        pick_up_array[pick_up_index] = input_matrix[0][var1];
                        pick_up_array[pick_up_index] *= change_s;
                        change_s = change_s * (-1);
                        }

                    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/


                  /*START SPLITTING*/
                  for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
                        for (var3=0; var3<COL; var3++){
                            for ( col1=0; col1<COL; col1++){
                                if (var3!=0 && col1!=unwanted_col){
                                    container[container_index]= input_matrix[var3][col1];
                                    container_index++;

                 }
                 }
                 }
                 }




            /*free_array(input_matrix);*/
            for (var1=0; var1<(COL-1); var1++){free(input_matrix[var1]);}
            free(input_matrix);
            }


/*CHANGE VARIABLE "NUMBER OF MATRICES TO SPLIT"*/
number_of_matrices_to_split *= COL;
/*DECREMENT COL FOR NEXT LEVEL*/
COL--;

/*REMOVE UNWANTED ELEMENTS FROM THE CONTAINER TO REDUCE ITS SIZE(copy_variable IS THE REFERENCE); */
var1=copy_variable; var2=0;

while (var1!=container_index){// index represent the current size of the array "container"
        container[var2]=container[var1]; // this way only copies the required elements over th unwanted elements
        var1++;
        var2++;
        }

container_index -= copy_variable; //decrement the container_index by "copy_variable"
copy_variable = 0;// make it zero because it will start over form the index zero while copying from container to input_matrix
}

/**************THE END OF THE LOOP*************/




/*CHANGE CONTAINER TO 2X2 DETERMINANTS*/
for (var1=0 ,var2=0; var1<=number_of_2x2_elements; var1=var1+4 , var2++){// jump over every 4 elements in every loop because the 2in2 matrix size 4 elements
        container[var2] = ((container[var1] * container[var1+3])-(container[var1+1] * container[var1+2]));
        }
number_of_2x2_elements = var2; // now the number of 2x2 elements is reduced



/*FURTHER PROCESS TO FIND THE DETERMINANT*/
int var4=0, x, limit = COL_value, col_size=(COL_value-1); // limit starts with the size of the first row of the main matrix
var3=COL_value; var2=0;
for (var1=0; var1<(COL_value-3); var1++){
        while (var2!=limit){
            for(x =0; x<col_size; x++,var3++){
                pick_up_array[var3] = pick_up_array[var3] * pick_up_array[var4]; //multiply the first row in the main matrix by the first row in the next lower level

                }
            var2++;// var2 here to stop "while loop" when it equals to the limit
            var4++;
            }
        limit *= col_size ; // then limit increases according to the size of the new matrix e.g. 4x4 matrix has 4 "3x3" matrices (12 elements to cycle through)
        col_size--; // decrement the size of the col for the next-lower level
        var2=0;//start while loop again from zero to count how many loop to do
        }

var3--; // decrement var3 because the array in general start with index 0 , and var3 here should represent the final index

int var =(number_of_2x2_elements-1);
       while (var>=0){
        container[var] = (container[var]) * (pick_up_array[var3]); //multiply the 2x2_determinants in the container by the pick_up_elements
        var--;
        var3--;
        }


for (var1=0 ; var1<number_of_2x2_elements; var1++){

        *determinant =  *determinant + container[var1]; // add all the elements to find the determinant
        }



free(container);
free(pick_up_array);
return determinant;

}
else{exit(0);}
}




else if (strcasecmp(format, "h") == 0 ){ /*Short*/
double *determinant = calloc(1,sizeof(double));  // the final answer: the determinant
if(determinant == NULL){printf("No Enough Memory\n"); exit(0);}

int COL, x ,y; short **input_matrix, **receiver;

receiver = calloc(s, sizeof(short*));
for(x=0; x<s;x++){receiver[x]= calloc(s,sizeof(short));}
if (receiver == NULL){printf("No Enough Memory\n"), exit(0);}

input_matrix = calloc(s, sizeof(short*));
for(x=0; x<s;x++){input_matrix[x]= calloc(s,sizeof(short));}
if (input_matrix == NULL){printf("No Enough Memory\n"), exit(0);}
receiver = va_arg(ap, short**); // why not directly to input_matrix? not to affect the original matrix

for (x=0;x<s;x++){
    for(y=0;y<s;y++){
        input_matrix[x][y] = receiver[x][y];
    }
}

COL = s;
/*if user wants to know the determinant of 2x2 matrix, no need for all of this hard work, it can be calculated easily!*/
if (COL==2){ /*find 2x2 determinant*/

    /*FIND THE DETERMINANT*/
    *determinant = (double)((input_matrix[0][0] * input_matrix[1][1]) - (input_matrix[0][1] * input_matrix[1][0]));

    /*Free Input_matrix*/

    for(x=0;x<COL; x++){free(input_matrix[x]);}
    free(input_matrix);

    /*RETURN THE DETERMINANT*/
    return determinant;
}



/*FIND THE DETERMINANT FOR A MATRIC HIGHER THAN 2X2*/
else if (COL>2){
double *container, *pick_up_array;
int copy_variable, container_index, number_of_matrices_to_split, COL_value, number_of_2x2_elements, pick_up_index, move_to_next_dimenssion;
copy_variable=0; container_index=0; number_of_matrices_to_split=COL; COL_value=COL; number_of_2x2_elements=0; pick_up_index=0; move_to_next_dimenssion = COL-3;

    /*ESTIMATE THE SIZE OF THE CONTAINER*/
    register unsigned int var1 = 3, var2; //start from the 3*3 matrices, these variables ill be used later in other loops
    unsigned long elements =4; // the size of 2*2 matrices inside every 3*3 matrix

    while (var1<=COL){
        elements *= var1;
        var1++;
    }

    number_of_2x2_elements = elements-1; // we subtract 1 because container starts from index 0 and "number_of_2x2_elements" will be used in later calculations
    elements += (elements*0.75); //to include the 2*2 matrices AND the 3*3 matrices

    container =  calloc(elements , sizeof(double)); // create the array "container" of size elements
    if (container == NULL){printf("***No Enough Memory****\n"); exit(0);}




    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/
    register unsigned int var3, col1, unwanted_col;


    /*START SPLITTING*/
    for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
        for (var3=0; var3<COL; var3++){// will loop the matrix row /*here we finish all the columns in every row i.e. row row*/
            for (col1=0; col1<COL; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                 if (var3!=0 && col1 !=unwanted_col){
                     container[container_index]= (double)input_matrix[var3][col1]; // if it is not the first row and not the unwanted column then assign it to splitter
                     container_index++;

        }
        }
        }
        }






   /*PICK UP REQUIRED ELEMENTS FROM EACH SPLIT MATRIX(i.e. FIRST ROW)*/
    unsigned int no_of_elements_to_save=1; register double change_s=1;// change_sign variable to control the sings of the elements, it always starts positive
   if (COL_value==3){no_of_elements_to_save=3;}
   else {
        var1=3;
        while (var1<COL_value){// a method to estimate how many elements will be saved in the pick_up_array
                if (var1==3){no_of_elements_to_save = (no_of_elements_to_save * (var1 *(var1+1)));}
                else{no_of_elements_to_save = (no_of_elements_to_save * (var1+1));}
                no_of_elements_to_save = no_of_elements_to_save + (var1+1);
                var1++;
                }
                }

    pick_up_array = calloc(no_of_elements_to_save, sizeof(double)); //Create the pick_up_array
    if (pick_up_array == NULL) {printf("***No Enough Memory****\n"); exit(0);}

    /*fill in the pick_up_array*/
    for (var1=0; var1<COL; var1++,pick_up_index++){ // we need to pick up only the first row of every matrix, that can be controlled by the COL value

            pick_up_array[pick_up_index] = (double)input_matrix[0][var1];
            pick_up_array[pick_up_index] *= change_s;
            change_s *= (-1);
            }

COL--; //Decrement COL for next level




register int a, b;
/*the main work and flow in high level of details*/
for(a=0; a<move_to_next_dimenssion; a++){
        for (b=0; b<number_of_matrices_to_split; b++){

                /*create array*/
                double **input_matrix = calloc(COL, sizeof(double*));
                for(var1= 0 ; var1<COL ; var1++){input_matrix[var1] = calloc(COL, sizeof(double));}
                if (input_matrix == NULL){printf("***No Enough Memory****\n"); exit(0);}

                /*copy_container_to_input_matrix every time based on the size of COL*/
                for (var1= 0; var1<COL ; var1++){
                    for (var2=0; var2<COL; var2++, copy_variable++ ){
                        input_matrix[var1][var2] = container[copy_variable]; // copy the container to the input_matrix
                        }
                        }

                /*pick_up_required_elements*/
                change_s=1;
                for (var1=0; var1<COL; var1++, pick_up_index++ ){
                        pick_up_array[pick_up_index] = input_matrix[0][var1];
                        pick_up_array[pick_up_index] *= change_s;
                        change_s = change_s * (-1);
                        }

                    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/


                  /*START SPLITTING*/
                  for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
                        for (var3=0; var3<COL; var3++){
                            for ( col1=0; col1<COL; col1++){
                                if (var3!=0 && col1!=unwanted_col){
                                    container[container_index]= input_matrix[var3][col1];
                                    container_index++;

                 }
                 }
                 }
                 }




            /*free_array(input_matrix);*/
            for (var1=0; var1<(COL-1); var1++){free(input_matrix[var1]);}
            free(input_matrix);
            }


/*CHANGE VARIABLE "NUMBER OF MATRICES TO SPLIT"*/
number_of_matrices_to_split *= COL;
/*DECREMENT COL FOR NEXT LEVEL*/
COL--;

/*REMOVE UNWANTED ELEMENTS FROM THE CONTAINER TO REDUCE ITS SIZE(copy_variable IS THE REFERENCE); */
var1=copy_variable; var2=0;

while (var1!=container_index){// index represent the current size of the array "container"
        container[var2]=container[var1]; // this way only copies the required elements over th unwanted elements
        var1++;
        var2++;
        }

container_index -= copy_variable; //decrement the container_index by "copy_variable"
copy_variable = 0;// make it zero because it will start over form the index zero while copying from container to input_matrix
}

/**************THE END OF THE LOOP*************/




/*CHANGE CONTAINER TO 2X2 DETERMINANTS*/
for (var1=0 ,var2=0; var1<=number_of_2x2_elements; var1=var1+4 , var2++){// jump over every 4 elements in every loop because the 2in2 matrix size 4 elements
        container[var2] = ((container[var1] * container[var1+3])-(container[var1+1] * container[var1+2]));
        }
number_of_2x2_elements = var2; // now the number of 2x2 elements is reduced



/*FURTHER PROCESS TO FIND THE DETERMINANT*/
int var4=0, x, limit = COL_value, col_size=(COL_value-1); // limit starts with the size of the first row of the main matrix
var3=COL_value; var2=0;
for (var1=0; var1<(COL_value-3); var1++){
        while (var2!=limit){
            for(x =0; x<col_size; x++,var3++){
                pick_up_array[var3] = pick_up_array[var3] * pick_up_array[var4]; //multiply the first row in the main matrix by the first row in the next lower level

                }
            var2++;// var2 here to stop "while loop" when it equals to the limit
            var4++;
            }
        limit *= col_size ; // then limit increases according to the size of the new matrix e.g. 4x4 matrix has 4 "3x3" matrices (12 elements to cycle through)
        col_size--; // decrement the size of the col for the next-lower level
        var2=0;//start while loop again from zero to count how many loop to do
        }

var3--; // decrement var3 because the array in general start with index 0 , and var3 here should represent the final index

int var =(number_of_2x2_elements-1);
       while (var>=0){
        container[var] = (container[var]) * (pick_up_array[var3]); //multiply the 2x2_determinants in the container by the pick_up_elements
        var--;
        var3--;
        }


for (var1=0 ; var1<number_of_2x2_elements; var1++){

        *determinant =  *determinant + container[var1]; // add all the elements to find the determinant
        }



free(container);
free(pick_up_array);
return determinant;

}
else{exit(0);}
}




else if (strcasecmp(format, "lf") == 0){ /*Double*/
double *determinant = calloc(1,sizeof(double)); // the final answer: the determinant
if(determinant == NULL){printf("No Enough Memory\n"); exit(0);}

int COL, x ,y; double **input_matrix, **receiver;

receiver = calloc(s, sizeof(double*));
for(x=0; x<s;x++){receiver[x]= calloc(s,sizeof(double));}
if (receiver == NULL){printf("No Enough Memory\n"), exit(0);}

input_matrix = calloc(s, sizeof(double*));
for(x=0; x<s;x++){input_matrix[x]= calloc(s,sizeof(double));}
if (input_matrix == NULL){printf("No Enough Memory\n"), exit(0);}
receiver = va_arg(ap, double**); // why not directly to input_matrix? not to affect the original matrix

for (x=0;x<s;x++){
    for(y=0;y<s;y++){
        input_matrix[x][y] = receiver[x][y];
    }
}

COL = s;
/*if user wants to know the determinant of 2x2 matrix, no need for all of this hard work, it can be calculated easily!*/
if (COL==2){ /*find 2x2 determinant*/

    /*FIND THE DETERMINANT*/
    *determinant = ((input_matrix[0][0] * input_matrix[1][1]) - (input_matrix[0][1] * input_matrix[1][0]));

    /*Free Input_matrix*/

    for(x=0;x<COL; x++){free(input_matrix[x]);}
    free(input_matrix);

    /*RETURN THE DETERMINANT*/
    return determinant;
}


/*FIND THE DETERMINANT FOR A MATRIC HIGHER THAN 2X2*/
else if (COL>2){
long double *container, *pick_up_array;
int copy_variable, container_index, number_of_matrices_to_split, COL_value, number_of_2x2_elements, pick_up_index, move_to_next_dimenssion;
copy_variable=0; container_index=0; number_of_matrices_to_split=COL; COL_value=COL; number_of_2x2_elements=0; pick_up_index=0; move_to_next_dimenssion = COL-3;

    /*ESTIMATE THE SIZE OF THE CONTAINER*/
    register unsigned int var1 = 3, var2; //start from the 3*3 matrices, these variables ill be used later in other loops
    unsigned long elements =4; // the size of 2*2 matrices inside every 3*3 matrix

    while (var1<=COL){
        elements *= var1;
        var1++;
    }

    number_of_2x2_elements = elements-1; // we subtract 1 because container starts from index 0 and "number_of_2x2_elements" will be used in later calculations
    elements += (elements*0.75); //to include the 2*2 matrices AND the 3*3 matrices

    container =  calloc(elements , sizeof(long double)); // create the array "container" of size elements
    if (container == NULL){printf("***No Enough Memory****\n"); exit(0);}




    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/
    register unsigned int var3, col1, unwanted_col;


    /*START SPLITTING*/
    for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
        for (var3=0; var3<COL; var3++){// will loop the matrix row /*here we finish all the columns in every row i.e. row row*/
            for (col1=0; col1<COL; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                 if (var3!=0 && col1 !=unwanted_col){
                     container[container_index]= (long double)input_matrix[var3][col1]; // if it is not the first row and not the unwanted column then assign it to splitter
                     container_index++;

        }
        }
        }
        }






   /*PICK UP REQUIRED ELEMENTS FROM EACH SPLIT MATRIX(i.e. FIRST ROW)*/
    unsigned int no_of_elements_to_save=1; register double change_s=1;// change_sign variable to control the sings of the elements, it always starts positive
   if (COL_value==3){no_of_elements_to_save=3;}
   else {
        var1=3;
        while (var1<COL_value){// a method to estimate how many elements will be saved in the pick_up_array
                if (var1==3){no_of_elements_to_save = (no_of_elements_to_save * (var1 *(var1+1)));}
                else{no_of_elements_to_save = (no_of_elements_to_save * (var1+1));}
                no_of_elements_to_save = no_of_elements_to_save + (var1+1);
                var1++;
                }
                }

    pick_up_array = calloc(no_of_elements_to_save, sizeof(long double)); //Create the pick_up_array
    if (pick_up_array == NULL) {printf("***No Enough Memory****\n"); exit(0);}

    /*fill in the pick_up_array*/
    for (var1=0; var1<COL; var1++,pick_up_index++){ // we need to pick up only the first row of every matrix, that can be controlled by the COL value

            pick_up_array[pick_up_index] = (long double)input_matrix[0][var1];
            pick_up_array[pick_up_index] *= (long double)change_s;
            change_s *= (-1);
            }

COL--; //Decrement COL for next level




register int a, b;
/*the main work and flow in high level of details*/
for(a=0; a<move_to_next_dimenssion; a++){
        for (b=0; b<number_of_matrices_to_split; b++){

                /*create array*/
                long double **input_matrix = calloc(COL, sizeof(long double*));
                for(var1= 0 ; var1<COL ; var1++){input_matrix[var1] = calloc(COL, sizeof(long double));}
                if (input_matrix == NULL){printf("***No Enough Memory****\n"); exit(0);}

                /*copy_container_to_input_matrix every time based on the size of COL*/
                for (var1= 0; var1<COL ; var1++){
                    for (var2=0; var2<COL; var2++, copy_variable++ ){
                        input_matrix[var1][var2] = container[copy_variable]; // copy the container to the input_matrix
                        }
                        }

                /*pick_up_required_elements*/
                change_s=1;
                for (var1=0; var1<COL; var1++, pick_up_index++ ){
                        pick_up_array[pick_up_index] = input_matrix[0][var1];
                        pick_up_array[pick_up_index] *= (long double)change_s;
                        change_s = change_s * (-1);
                        }

                    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/


                  /*START SPLITTING*/
                  for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
                        for (var3=0; var3<COL; var3++){
                            for ( col1=0; col1<COL; col1++){
                                if (var3!=0 && col1!=unwanted_col){
                                    container[container_index]= input_matrix[var3][col1];
                                    container_index++;

                 }
                 }
                 }
                 }




            /*free_array(input_matrix);*/
            for (var1=0; var1<(COL-1); var1++){free(input_matrix[var1]);}
            free(input_matrix);
            }


/*CHANGE VARIABLE "NUMBER OF MATRICES TO SPLIT"*/
number_of_matrices_to_split *= COL;
/*DECREMENT COL FOR NEXT LEVEL*/
COL--;

/*REMOVE UNWANTED ELEMENTS FROM THE CONTAINER TO REDUCE ITS SIZE(copy_variable IS THE REFERENCE); */
var1=copy_variable; var2=0;

while (var1!=container_index){// index represent the current size of the array "container"
        container[var2]=container[var1]; // this way only copies the required elements over th unwanted elements
        var1++;
        var2++;
        }

container_index -= copy_variable; //decrement the container_index by "copy_variable"
copy_variable = 0;// make it zero because it will start over form the index zero while copying from container to input_matrix
}

/**************THE END OF THE LOOP*************/




/*CHANGE CONTAINER TO 2X2 DETERMINANTS*/
for (var1=0 ,var2=0; var1<=number_of_2x2_elements; var1=var1+4 , var2++){// jump over every 4 elements in every loop because the 2in2 matrix size 4 elements
        container[var2] = ((container[var1] * container[var1+3])-(container[var1+1] * container[var1+2]));
        }
number_of_2x2_elements = var2; // now the number of 2x2 elements is reduced



/*FURTHER PROCESS TO FIND THE DETERMINANT*/
int var4=0, x, limit = COL_value, col_size=(COL_value-1); // limit starts with the size of the first row of the main matrix
var3=COL_value; var2=0;
for (var1=0; var1<(COL_value-3); var1++){
        while (var2!=limit){
            for(x =0; x<col_size; x++,var3++){
                pick_up_array[var3] = pick_up_array[var3] * pick_up_array[var4]; //multiply the first row in the main matrix by the first row in the next lower level

                }
            var2++;// var2 here to stop "while loop" when it equals to the limit
            var4++;
            }
        limit *= col_size ; // then limit increases according to the size of the new matrix e.g. 4x4 matrix has 4 "3x3" matrices (12 elements to cycle through)
        col_size--; // decrement the size of the col for the next-lower level
        var2=0;//start while loop again from zero to count how many loop to do
        }

var3--; // decrement var3 because the array in general start with index 0 , and var3 here should represent the final index

int var =(number_of_2x2_elements-1);
       while (var>=0){
        container[var] = (container[var]) * (pick_up_array[var3]); //multiply the 2x2_determinants in the container by the pick_up_elements
        var--;
        var3--;
        }


for (var1=0 ; var1<number_of_2x2_elements; var1++){

        *determinant =  *determinant + container[var1]; // add all the elements to find the determinant
        }



free(container);
free(pick_up_array);
return determinant;

}
else{exit(0);}
}





else if (strcasecmp(format, "lld") == 0 || strcasecmp(format, "lli") == 0){ /*Long Long*/
double *determinant = calloc(1,sizeof(double));
if (determinant == NULL){printf("No Enough Memory"); exit(0);}

int COL, x ,y; long long **input_matrix, **receiver;

receiver = calloc(s, sizeof(long long*));
for(x=0; x<s;x++){receiver[x]= calloc(s,sizeof(long long));}
if (receiver == NULL){printf("No Enough Memory\n"), exit(0);}

input_matrix = calloc(s, sizeof(long long*));
for(x=0; x<s;x++){input_matrix[x]= calloc(s,sizeof(long long));}
if (input_matrix == NULL){printf("No Enough Memory\n"), exit(0);}
receiver = va_arg(ap, long long**); // why not directly to input_matrix? not to affect the original matrix

for (x=0;x<s;x++){
    for(y=0;y<s;y++){
        input_matrix[x][y] = receiver[x][y];
    }
};

COL = s;
/*if user wants to know the determinant of 2x2 matrix, no need for all of this hard work, it can be calculated easily!*/
if (COL==2){ /*find 2x2 determinant*/

    /*FIND THE DETERMINANT*/
    *determinant = (double)((input_matrix[0][0] * input_matrix[1][1]) - (input_matrix[0][1] * input_matrix[1][0])); // it will lose precision if the value of long long is very big

    /*Free Input_matrix*/

    for(x=0;x<COL; x++){free(input_matrix[x]);}
    free(input_matrix);

    /*RETURN THE DETERMINANT*/
    return determinant;
}


/*FIND THE DETERMINANT FOR A MATRIC HIGHER THAN 2X2*/
else if (COL>2){
long long *container, *pick_up_array;
int copy_variable, container_index, number_of_matrices_to_split, COL_value, number_of_2x2_elements, pick_up_index, move_to_next_dimenssion;
copy_variable=0; container_index=0; number_of_matrices_to_split=COL; COL_value=COL; number_of_2x2_elements=0; pick_up_index=0; move_to_next_dimenssion = COL-3;

    /*ESTIMATE THE SIZE OF THE CONTAINER*/
    register unsigned int var1 = 3, var2; //start from the 3*3 matrices, these variables ill be used later in other loops
    unsigned long elements =4; // the size of 2*2 matrices inside every 3*3 matrix

    while (var1<=COL){
        elements *= var1;
        var1++;
    }

    number_of_2x2_elements = elements-1; // we subtract 1 because container starts from index 0 and "number_of_2x2_elements" will be used in later calculations
    elements += (elements*0.75); //to include the 2*2 matrices AND the 3*3 matrices

    container =  calloc(elements , sizeof(long long)); // create the array "container" of size elements
    if (container == NULL){printf("***No Enough Memory****\n"); exit(0);}




    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/
    register unsigned int var3, col1, unwanted_col;


    /*START SPLITTING*/
    for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
        for (var3=0; var3<COL; var3++){// will loop the matrix row /*here we finish all the columns in every row i.e. row row*/
            for (col1=0; col1<COL; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                 if (var3!=0 && col1 !=unwanted_col){
                     container[container_index]= input_matrix[var3][col1]; // if it is not the first row and not the unwanted column then assign it to splitter
                     container_index++;

        }
        }
        }
        }






   /*PICK UP REQUIRED ELEMENTS FROM EACH SPLIT MATRIX(i.e. FIRST ROW)*/
    unsigned int no_of_elements_to_save=1; register long long change_s=1;// change_sign variable to control the sings of the elements, it always starts positive
   if (COL_value==3){no_of_elements_to_save=3;}
   else {
        var1=3;
        while (var1<COL_value){// a method to estimate how many elements will be saved in the pick_up_array
                if (var1==3){no_of_elements_to_save = (no_of_elements_to_save * (var1 *(var1+1)));}
                else{no_of_elements_to_save = (no_of_elements_to_save * (var1+1));}
                no_of_elements_to_save = no_of_elements_to_save + (var1+1);
                var1++;
                }
                }

    pick_up_array = calloc(no_of_elements_to_save, sizeof(long long)); //Create the pick_up_array
    if (pick_up_array == NULL) {printf("***No Enough Memory****\n"); exit(0);}

    /*fill in the pick_up_array*/
    for (var1=0; var1<COL; var1++,pick_up_index++){ // we need to pick up only the first row of every matrix, that can be controlled by the COL value

            pick_up_array[pick_up_index] = input_matrix[0][var1];
            pick_up_array[pick_up_index] *= change_s;
            change_s *= (-1);
            }

COL--; //Decrement COL for next level




register int a, b;
/*the main work and flow in high level of details*/
for(a=0; a<move_to_next_dimenssion; a++){
        for (b=0; b<number_of_matrices_to_split; b++){

                /*create array*/
                long long **input_matrix = calloc(COL, sizeof(long long*));
                for(var1= 0 ; var1<COL ; var1++){input_matrix[var1] = calloc(COL, sizeof(long long));}
                if (input_matrix == NULL){printf("***No Enough Memory****\n"); exit(0);}

                /*copy_container_to_input_matrix every time based on the size of COL*/
                for (var1= 0; var1<COL ; var1++){
                    for (var2=0; var2<COL; var2++, copy_variable++ ){
                        input_matrix[var1][var2] = container[copy_variable]; // copy the container to the input_matrix
                        }
                        }

                /*pick_up_required_elements*/
                change_s=1;
                for (var1=0; var1<COL; var1++, pick_up_index++ ){
                        pick_up_array[pick_up_index] = input_matrix[0][var1];
                        pick_up_array[pick_up_index] *= change_s;
                        change_s = change_s * (-1);
                        }

                    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/


                  /*START SPLITTING*/
                  for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
                        for (var3=0; var3<COL; var3++){
                            for ( col1=0; col1<COL; col1++){
                                if (var3!=0 && col1!=unwanted_col){
                                    container[container_index]= input_matrix[var3][col1];
                                    container_index++;

                 }
                 }
                 }
                 }




            /*free_array(input_matrix);*/
            for (var1=0; var1<(COL-1); var1++){free(input_matrix[var1]);}
            free(input_matrix);
            }


/*CHANGE VARIABLE "NUMBER OF MATRICES TO SPLIT"*/
number_of_matrices_to_split *= COL;
/*DECREMENT COL FOR NEXT LEVEL*/
COL--;

/*REMOVE UNWANTED ELEMENTS FROM THE CONTAINER TO REDUCE ITS SIZE(copy_variable IS THE REFERENCE); */
var1=copy_variable; var2=0;

while (var1!=container_index){// index represent the current size of the array "container"
        container[var2]=container[var1]; // this way only copies the required elements over th unwanted elements
        var1++;
        var2++;
        }

container_index -= copy_variable; //decrement the container_index by "copy_variable"
copy_variable = 0;// make it zero because it will start over form the index zero while copying from container to input_matrix
}

/**************THE END OF THE LOOP*************/




/*CHANGE CONTAINER TO 2X2 DETERMINANTS*/
for (var1=0 ,var2=0; var1<=number_of_2x2_elements; var1=var1+4 , var2++){// jump over every 4 elements in every loop because the 2in2 matrix size 4 elements
        container[var2] = ((container[var1] * container[var1+3])-(container[var1+1] * container[var1+2]));
        }
number_of_2x2_elements = var2; // now the number of 2x2 elements is reduced



/*FURTHER PROCESS TO FIND THE DETERMINANT*/
int var4=0, x, limit = COL_value, col_size=(COL_value-1); // limit starts with the size of the first row of the main matrix
var3=COL_value; var2=0;
for (var1=0; var1<(COL_value-3); var1++){
        while (var2!=limit){
            for(x =0; x<col_size; x++,var3++){
                pick_up_array[var3] = pick_up_array[var3] * pick_up_array[var4]; //multiply the first row in the main matrix by the first row in the next lower level

                }
            var2++;// var2 here to stop "while loop" when it equals to the limit
            var4++;
            }
        limit *= col_size ; // then limit increases according to the size of the new matrix e.g. 4x4 matrix has 4 "3x3" matrices (12 elements to cycle through)
        col_size--; // decrement the size of the col for the next-lower level
        var2=0;//start while loop again from zero to count how many loop to do
        }

var3--; // decrement var3 because the array in general start with index 0 , and var3 here should represent the final index

int var =(number_of_2x2_elements-1);
       while (var>=0){
        container[var] = (container[var]) * (pick_up_array[var3]); //multiply the 2x2_determinants in the container by the pick_up_elements
        var--;
        var3--;
        }


for (var1=0 ; var1<number_of_2x2_elements; var1++){

        *determinant =  *determinant + ((double)container[var1]); // it will lose precision if the value of long long is very big
        }



free(container);
free(pick_up_array);
return determinant;

}
else{exit(0);}
}







else if (strcasecmp(format, "iu") == 0 || strcasecmp(format, "u") == 0){ /*Unsigned Integer*/
double *determinant= calloc(1,sizeof(double));
    if (determinant == NULL){printf("No Enough Memory"); exit(0);}

int COL, x ,y; unsigned int **input_matrix, **receiver;

receiver = calloc(s, sizeof(unsigned int*));
for(x=0; x<s;x++){receiver[x]= calloc(s,sizeof(unsigned int));}
if (receiver == NULL){printf("No Enough Memory\n"), exit(0);}

input_matrix = calloc(s, sizeof(unsigned int*));
for(x=0; x<s;x++){input_matrix[x]= calloc(s,sizeof(unsigned int));}
if (input_matrix == NULL){printf("No Enough Memory\n"), exit(0);}
receiver = va_arg(ap, unsigned int**); // why not directly to input_matrix? not to affect the original matrix

for (x=0;x<s;x++){
    for(y=0;y<s;y++){
        input_matrix[x][y] = receiver[x][y];
    }
}

COL = s;
/*if user wants to know the determinant of 2x2 matrix, no need for all of this hard work, it can be calculated easily!*/
if (COL==2){ /*find 2x2 determinant*/

    /*FIND THE DETERMINANT*/
    *determinant = (double)((input_matrix[0][0] * input_matrix[1][1]) - (input_matrix[0][1] * input_matrix[1][0]));

    /*Free Input_matrix*/

    for(x=0;x<COL; x++){free(input_matrix[x]);}
    free(input_matrix);

    /*RETURN THE DETERMINANT*/
    return determinant;
}



/*FIND THE DETERMINANT FOR A MATRIC HIGHER THAN 2X2*/
else if (COL>2){
double *container, *pick_up_array;
int copy_variable, container_index, number_of_matrices_to_split, COL_value, number_of_2x2_elements, pick_up_index, move_to_next_dimenssion;
copy_variable=0; container_index=0; number_of_matrices_to_split=COL; COL_value=COL; number_of_2x2_elements=0; pick_up_index=0; move_to_next_dimenssion = COL-3;

    /*ESTIMATE THE SIZE OF THE CONTAINER*/
    register unsigned int var1 = 3, var2; //start from the 3*3 matrices, these variables ill be used later in other loops
    unsigned long elements =4; // the size of 2*2 matrices inside every 3*3 matrix

    while (var1<=COL){
        elements *= var1;
        var1++;
    }

    number_of_2x2_elements = elements-1; // we subtract 1 because container starts from index 0 and "number_of_2x2_elements" will be used in later calculations
    elements += (elements*0.75); //to include the 2*2 matrices AND the 3*3 matrices

    container =  calloc(elements , sizeof(double)); // create the array "container" of size elements
    if (container == NULL){printf("***No Enough Memory****\n"); exit(0);}




    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/
    register unsigned int var3, col1, unwanted_col;


    /*START SPLITTING*/
    for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
        for (var3=0; var3<COL; var3++){// will loop the matrix row /*here we finish all the columns in every row i.e. row row*/
            for (col1=0; col1<COL; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                 if (var3!=0 && col1 !=unwanted_col){
                     container[container_index]= (double)input_matrix[var3][col1]; // if it is not the first row and not the unwanted column then assign it to splitter
                     container_index++;

        }
        }
        }
        }






   /*PICK UP REQUIRED ELEMENTS FROM EACH SPLIT MATRIX(i.e. FIRST ROW)*/
    unsigned int no_of_elements_to_save=1; register double change_s=1;// change_sign variable to control the sings of the elements, it always starts positive
   if (COL_value==3){no_of_elements_to_save=3;}
   else {
        var1=3;
        while (var1<COL_value){// a method to estimate how many elements will be saved in the pick_up_array
                if (var1==3){no_of_elements_to_save = (no_of_elements_to_save * (var1 *(var1+1)));}
                else{no_of_elements_to_save = (no_of_elements_to_save * (var1+1));}
                no_of_elements_to_save = no_of_elements_to_save + (var1+1);
                var1++;
                }
                }

    pick_up_array = calloc(no_of_elements_to_save, sizeof(double)); //Create the pick_up_array
    if (pick_up_array == NULL) {printf("***No Enough Memory****\n"); exit(0);}

    /*fill in the pick_up_array*/
    for (var1=0; var1<COL; var1++,pick_up_index++){ // we need to pick up only the first row of every matrix, that can be controlled by the COL value

            pick_up_array[pick_up_index] = (double)input_matrix[0][var1];
            pick_up_array[pick_up_index] *= change_s;
            change_s *= (-1);
            }

COL--; //Decrement COL for next level




register int a, b;
/*the main work and flow in high level of details*/
for(a=0; a<move_to_next_dimenssion; a++){
        for (b=0; b<number_of_matrices_to_split; b++){

                /*create array*/
                double **input_matrix = calloc(COL, sizeof(double*));
                for(var1= 0 ; var1<COL ; var1++){input_matrix[var1] = calloc(COL, sizeof(double));}
                if (input_matrix == NULL){printf("***No Enough Memory****\n"); exit(0);}

                /*copy_container_to_input_matrix every time based on the size of COL*/
                for (var1= 0; var1<COL ; var1++){
                    for (var2=0; var2<COL; var2++, copy_variable++ ){
                        input_matrix[var1][var2] = container[copy_variable]; // copy the container to the input_matrix
                        }
                        }

                /*pick_up_required_elements*/
                change_s=1;
                for (var1=0; var1<COL; var1++, pick_up_index++ ){
                        pick_up_array[pick_up_index] = input_matrix[0][var1];
                        pick_up_array[pick_up_index] *= change_s;
                        change_s = change_s * (-1);
                        }

                    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/


                  /*START SPLITTING*/
                  for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
                        for (var3=0; var3<COL; var3++){
                            for ( col1=0; col1<COL; col1++){
                                if (var3!=0 && col1!=unwanted_col){
                                    container[container_index]= input_matrix[var3][col1];
                                    container_index++;

                 }
                 }
                 }
                 }




            /*free_array(input_matrix);*/
            for (var1=0; var1<(COL-1); var1++){free(input_matrix[var1]);}
            free(input_matrix);
            }


/*CHANGE VARIABLE "NUMBER OF MATRICES TO SPLIT"*/
number_of_matrices_to_split *= COL;
/*DECREMENT COL FOR NEXT LEVEL*/
COL--;

/*REMOVE UNWANTED ELEMENTS FROM THE CONTAINER TO REDUCE ITS SIZE(copy_variable IS THE REFERENCE); */
var1=copy_variable; var2=0;

while (var1!=container_index){// index represent the current size of the array "container"
        container[var2]=container[var1]; // this way only copies the required elements over th unwanted elements
        var1++;
        var2++;
        }

container_index -= copy_variable; //decrement the container_index by "copy_variable"
copy_variable = 0;// make it zero because it will start over form the index zero while copying from container to input_matrix
}

/**************THE END OF THE LOOP*************/




/*CHANGE CONTAINER TO 2X2 DETERMINANTS*/
for (var1=0 ,var2=0; var1<=number_of_2x2_elements; var1=var1+4 , var2++){// jump over every 4 elements in every loop because the 2in2 matrix size 4 elements
        container[var2] = ((container[var1] * container[var1+3])-(container[var1+1] * container[var1+2]));
        }
number_of_2x2_elements = var2; // now the number of 2x2 elements is reduced



/*FURTHER PROCESS TO FIND THE DETERMINANT*/
int var4=0, x, limit = COL_value, col_size=(COL_value-1); // limit starts with the size of the first row of the main matrix
var3=COL_value; var2=0;
for (var1=0; var1<(COL_value-3); var1++){
        while (var2!=limit){
            for(x =0; x<col_size; x++,var3++){
                pick_up_array[var3] = pick_up_array[var3] * pick_up_array[var4]; //multiply the first row in the main matrix by the first row in the next lower level

                }
            var2++;// var2 here to stop "while loop" when it equals to the limit
            var4++;
            }
        limit *= col_size ; // then limit increases according to the size of the new matrix e.g. 4x4 matrix has 4 "3x3" matrices (12 elements to cycle through)
        col_size--; // decrement the size of the col for the next-lower level
        var2=0;//start while loop again from zero to count how many loop to do
        }

var3--; // decrement var3 because the array in general start with index 0 , and var3 here should represent the final index

int var =(number_of_2x2_elements-1);
       while (var>=0){
        container[var] = (container[var]) * (pick_up_array[var3]); //multiply the 2x2_determinants in the container by the pick_up_elements
        var--;
        var3--;
        }


for (var1=0 ; var1<number_of_2x2_elements; var1++){

        *determinant =  *determinant + container[var1]; // add all the elements to find the determinant
        }



free(container);
free(pick_up_array);
return determinant;

}
else{exit(0);}
}




else if (strcasecmp(format, "lu") == 0 ){ /*Unsigned Long*/
 double *determinant= calloc(1,sizeof(double));
    if (determinant == NULL){printf("No Enough Memory"); exit(0);}
int COL, x ,y; unsigned long **input_matrix, **receiver;

receiver = calloc(s, sizeof(unsigned long*));
for(x=0; x<s;x++){receiver[x]= calloc(s,sizeof(unsigned long));}
if (receiver == NULL){printf("No Enough Memory\n"), exit(0);}

input_matrix = calloc(s, sizeof(unsigned long*));
for(x=0; x<s;x++){input_matrix[x]= calloc(s,sizeof(unsigned long));}
if (input_matrix == NULL){printf("No Enough Memory\n"), exit(0);}
receiver = va_arg(ap, unsigned long**); // why not directly to input_matrix? not to affect the original matrix

for (x=0;x<s;x++){
    for(y=0;y<s;y++){
        input_matrix[x][y] = receiver[x][y];
    }
}

COL = s;
/*if user wants to know the determinant of 2x2 matrix, no need for all of this hard work, it can be calculated easily!*/
if (COL==2){ /*find 2x2 determinant*/

    /*FIND THE DETERMINANT*/
    *determinant = (double)((input_matrix[0][0] * input_matrix[1][1]) - (input_matrix[0][1] * input_matrix[1][0]));

       /*Free Input_matrix*/

    for(x=0;x<COL; x++){free(input_matrix[x]);}
    free(input_matrix);

    /*RETURN THE DETERMINANT*/
    return determinant;
}


/*FIND THE DETERMINANT FOR A MATRIC HIGHER THAN 2X2*/
else if (COL>2){
double *container, *pick_up_array;
int copy_variable, container_index, number_of_matrices_to_split, COL_value, number_of_2x2_elements, pick_up_index, move_to_next_dimenssion;
copy_variable=0; container_index=0; number_of_matrices_to_split=COL; COL_value=COL; number_of_2x2_elements=0; pick_up_index=0; move_to_next_dimenssion = COL-3;

    /*ESTIMATE THE SIZE OF THE CONTAINER*/
    register unsigned int var1 = 3, var2; //start from the 3*3 matrices, these variables ill be used later in other loops
    unsigned long elements =4; // the size of 2*2 matrices inside every 3*3 matrix

    while (var1<=COL){
        elements *= var1;
        var1++;
    }

    number_of_2x2_elements = elements-1; // we subtract 1 because container starts from index 0 and "number_of_2x2_elements" will be used in later calculations
    elements += (elements*0.75); //to include the 2*2 matrices AND the 3*3 matrices

    container =  calloc(elements , sizeof(double)); // create the array "container" of size elements
    if (container == NULL){printf("***No Enough Memory****\n"); exit(0);}




    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/
    register unsigned int var3, col1, unwanted_col;


    /*START SPLITTING*/
    for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
        for (var3=0; var3<COL; var3++){// will loop the matrix row /*here we finish all the columns in every row i.e. row row*/
            for (col1=0; col1<COL; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                 if (var3!=0 && col1 !=unwanted_col){
                     container[container_index]= (double)input_matrix[var3][col1]; // if it is not the first row and not the unwanted column then assign it to splitter
                     container_index++;

        }
        }
        }
        }






   /*PICK UP REQUIRED ELEMENTS FROM EACH SPLIT MATRIX(i.e. FIRST ROW)*/
    unsigned int no_of_elements_to_save=1; register double change_s=1;// change_sign variable to control the sings of the elements, it always starts positive
   if (COL_value==3){no_of_elements_to_save=3;}
   else {
        var1=3;
        while (var1<COL_value){// a method to estimate how many elements will be saved in the pick_up_array
                if (var1==3){no_of_elements_to_save = (no_of_elements_to_save * (var1 *(var1+1)));}
                else{no_of_elements_to_save = (no_of_elements_to_save * (var1+1));}
                no_of_elements_to_save = no_of_elements_to_save + (var1+1);
                var1++;
                }
                }

    pick_up_array = calloc(no_of_elements_to_save, sizeof(double)); //Create the pick_up_array
    if (pick_up_array == NULL) {printf("***No Enough Memory****\n"); exit(0);}

    /*fill in the pick_up_array*/
    for (var1=0; var1<COL; var1++,pick_up_index++){ // we need to pick up only the first row of every matrix, that can be controlled by the COL value

            pick_up_array[pick_up_index] = (double)input_matrix[0][var1];
            pick_up_array[pick_up_index] *= change_s;
            change_s *= (-1);
            }

COL--; //Decrement COL for next level




register int a, b;
/*the main work and flow in high level of details*/
for(a=0; a<move_to_next_dimenssion; a++){
        for (b=0; b<number_of_matrices_to_split; b++){

                /*create array*/
                double **input_matrix = calloc(COL, sizeof(double*));
                for(var1= 0 ; var1<COL ; var1++){input_matrix[var1] = calloc(COL, sizeof(double));}
                if (input_matrix == NULL){printf("***No Enough Memory****\n"); exit(0);}

                /*copy_container_to_input_matrix every time based on the size of COL*/
                for (var1= 0; var1<COL ; var1++){
                    for (var2=0; var2<COL; var2++, copy_variable++ ){
                        input_matrix[var1][var2] = container[copy_variable]; // copy the container to the input_matrix
                        }
                        }

                /*pick_up_required_elements*/
                change_s=1;
                for (var1=0; var1<COL; var1++, pick_up_index++ ){
                        pick_up_array[pick_up_index] = input_matrix[0][var1];
                        pick_up_array[pick_up_index] *= change_s;
                        change_s = change_s * (-1);
                        }

                    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/


                  /*START SPLITTING*/
                  for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
                        for (var3=0; var3<COL; var3++){
                            for ( col1=0; col1<COL; col1++){
                                if (var3!=0 && col1!=unwanted_col){
                                    container[container_index]= input_matrix[var3][col1];
                                    container_index++;

                 }
                 }
                 }
                 }




            /*free_array(input_matrix);*/
            for (var1=0; var1<(COL-1); var1++){free(input_matrix[var1]);}
            free(input_matrix);
            }


/*CHANGE VARIABLE "NUMBER OF MATRICES TO SPLIT"*/
number_of_matrices_to_split *= COL;
/*DECREMENT COL FOR NEXT LEVEL*/
COL--;

/*REMOVE UNWANTED ELEMENTS FROM THE CONTAINER TO REDUCE ITS SIZE(copy_variable IS THE REFERENCE); */
var1=copy_variable; var2=0;

while (var1!=container_index){// index represent the current size of the array "container"
        container[var2]=container[var1]; // this way only copies the required elements over th unwanted elements
        var1++;
        var2++;
        }

container_index -= copy_variable; //decrement the container_index by "copy_variable"
copy_variable = 0;// make it zero because it will start over form the index zero while copying from container to input_matrix
}

/**************THE END OF THE LOOP*************/




/*CHANGE CONTAINER TO 2X2 DETERMINANTS*/
for (var1=0 ,var2=0; var1<=number_of_2x2_elements; var1=var1+4 , var2++){// jump over every 4 elements in every loop because the 2in2 matrix size 4 elements
        container[var2] = ((container[var1] * container[var1+3])-(container[var1+1] * container[var1+2]));
        }
number_of_2x2_elements = var2; // now the number of 2x2 elements is reduced



/*FURTHER PROCESS TO FIND THE DETERMINANT*/
int var4=0, x, limit = COL_value, col_size=(COL_value-1); // limit starts with the size of the first row of the main matrix
var3=COL_value; var2=0;
for (var1=0; var1<(COL_value-3); var1++){
        while (var2!=limit){
            for(x =0; x<col_size; x++,var3++){
                pick_up_array[var3] = pick_up_array[var3] * pick_up_array[var4]; //multiply the first row in the main matrix by the first row in the next lower level

                }
            var2++;// var2 here to stop "while loop" when it equals to the limit
            var4++;
            }
        limit *= col_size ; // then limit increases according to the size of the new matrix e.g. 4x4 matrix has 4 "3x3" matrices (12 elements to cycle through)
        col_size--; // decrement the size of the col for the next-lower level
        var2=0;//start while loop again from zero to count how many loop to do
        }

var3--; // decrement var3 because the array in general start with index 0 , and var3 here should represent the final index

int var =(number_of_2x2_elements-1);
       while (var>=0){
        container[var] = (container[var]) * (pick_up_array[var3]); //multiply the 2x2_determinants in the container by the pick_up_elements
        var--;
        var3--;
        }


for (var1=0 ; var1<number_of_2x2_elements; var1++){

        *determinant =  *determinant + container[var1]; // add all the elements to find the determinant
        }



free(container);
free(pick_up_array);
return determinant;

}
else{exit(0);}
}




else if (strcasecmp(format, "llu") == 0 ){ /*Unsigned Long Long*/
double *determinant= calloc(1,sizeof(double));
    if (determinant == NULL){printf("No Enough Memory"); exit(0);}

int COL, x ,y; unsigned long long **input_matrix, **receiver;

receiver = calloc(s, sizeof(unsigned long long*));
for(x=0; x<s;x++){receiver[x]= calloc(s,sizeof(unsigned long long));}
if (receiver == NULL){printf("No Enough Memory\n"), exit(0);}

input_matrix = calloc(s, sizeof(unsigned long long*));
for(x=0; x<s;x++){input_matrix[x]= calloc(s,sizeof(unsigned long long));}
if (input_matrix == NULL){printf("No Enough Memory\n"), exit(0);}
receiver = va_arg(ap, unsigned long long**); // why not directly to input_matrix? not to affect the original matrix

for (x=0;x<s;x++){
    for(y=0;y<s;y++){
        input_matrix[x][y] = receiver[x][y];
    }
}

COL = s;
/*if user wants to know the determinant of 2x2 matrix, no need for all of this hard work, it can be calculated easily!*/
if (COL==2){ /*find 2x2 determinant*/

    /*FIND THE DETERMINANT*/
    *determinant = (double)(((double)input_matrix[0][0] * (double)input_matrix[1][1]) - ((double)input_matrix[0][1] * (double)input_matrix[1][0]));

    /*Free Input_matrix*/

    for(x=0;x<COL; x++){free(input_matrix[x]);}
    free(input_matrix);

    /*RETURN THE DETERMINANT*/
    return determinant;
}



/*FIND THE DETERMINANT FOR A MATRIC HIGHER THAN 2X2*/
else if (COL>2){
double *container, *pick_up_array;
int copy_variable, container_index, number_of_matrices_to_split, COL_value, number_of_2x2_elements, pick_up_index, move_to_next_dimenssion;
copy_variable=0; container_index=0; number_of_matrices_to_split=COL; COL_value=COL; number_of_2x2_elements=0; pick_up_index=0; move_to_next_dimenssion = COL-3;

    /*ESTIMATE THE SIZE OF THE CONTAINER*/
    register unsigned int var1 = 3, var2; //start from the 3*3 matrices, these variables ill be used later in other loops
    unsigned long elements =4; // the size of 2*2 matrices inside every 3*3 matrix

    while (var1<=COL){
        elements *= var1;
        var1++;
    }

    number_of_2x2_elements = elements-1; // we subtract 1 because container starts from index 0 and "number_of_2x2_elements" will be used in later calculations
    elements += (elements*0.75); //to include the 2*2 matrices AND the 3*3 matrices

    container =  calloc(elements , sizeof(double)); // create the array "container" of size elements
    if (container == NULL){printf("***No Enough Memory****\n"); exit(0);}




    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/
    register unsigned int var3, col1, unwanted_col;


    /*START SPLITTING*/
    for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
        for (var3=0; var3<COL; var3++){// will loop the matrix row /*here we finish all the columns in every row i.e. row row*/
            for (col1=0; col1<COL; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                 if (var3!=0 && col1 !=unwanted_col){
                     container[container_index]= (double)input_matrix[var3][col1]; // if it is not the first row and not the unwanted column then assign it to splitter
                     container_index++;

        }
        }
        }
        }






   /*PICK UP REQUIRED ELEMENTS FROM EACH SPLIT MATRIX(i.e. FIRST ROW)*/
    unsigned int no_of_elements_to_save=1; register double change_s=1;// change_sign variable to control the sings of the elements, it always starts positive
   if (COL_value==3){no_of_elements_to_save=3;}
   else {
        var1=3;
        while (var1<COL_value){// a method to estimate how many elements will be saved in the pick_up_array
                if (var1==3){no_of_elements_to_save = (no_of_elements_to_save * (var1 *(var1+1)));}
                else{no_of_elements_to_save = (no_of_elements_to_save * (var1+1));}
                no_of_elements_to_save = no_of_elements_to_save + (var1+1);
                var1++;
                }
                }

    pick_up_array = calloc(no_of_elements_to_save, sizeof(double)); //Create the pick_up_array
    if (pick_up_array == NULL) {printf("***No Enough Memory****\n"); exit(0);}

    /*fill in the pick_up_array*/
    for (var1=0; var1<COL; var1++,pick_up_index++){ // we need to pick up only the first row of every matrix, that can be controlled by the COL value

            pick_up_array[pick_up_index] = (double)input_matrix[0][var1];
            pick_up_array[pick_up_index] *= change_s;
            change_s *= (-1);
            }

COL--; //Decrement COL for next level




register int a, b;
/*the main work and flow in high level of details*/
for(a=0; a<move_to_next_dimenssion; a++){
        for (b=0; b<number_of_matrices_to_split; b++){

                /*create array*/
                double **input_matrix = calloc(COL, sizeof(double*));
                for(var1= 0 ; var1<COL ; var1++){input_matrix[var1] = calloc(COL, sizeof(double));}
                if (input_matrix == NULL){printf("***No Enough Memory****\n"); exit(0);}

                /*copy_container_to_input_matrix every time based on the size of COL*/
                for (var1= 0; var1<COL ; var1++){
                    for (var2=0; var2<COL; var2++, copy_variable++ ){
                        input_matrix[var1][var2] = container[copy_variable]; // copy the container to the input_matrix
                        }
                        }

                /*pick_up_required_elements*/
                change_s=1;
                for (var1=0; var1<COL; var1++, pick_up_index++ ){
                        pick_up_array[pick_up_index] = input_matrix[0][var1];
                        pick_up_array[pick_up_index] *= change_s;
                        change_s = change_s * (-1);
                        }

                    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/


                  /*START SPLITTING*/
                  for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
                        for (var3=0; var3<COL; var3++){
                            for ( col1=0; col1<COL; col1++){
                                if (var3!=0 && col1!=unwanted_col){
                                    container[container_index]= input_matrix[var3][col1];
                                    container_index++;

                 }
                 }
                 }
                 }




            /*free_array(input_matrix);*/
            for (var1=0; var1<(COL-1); var1++){free(input_matrix[var1]);}
            free(input_matrix);
            }


/*CHANGE VARIABLE "NUMBER OF MATRICES TO SPLIT"*/
number_of_matrices_to_split *= COL;
/*DECREMENT COL FOR NEXT LEVEL*/
COL--;

/*REMOVE UNWANTED ELEMENTS FROM THE CONTAINER TO REDUCE ITS SIZE(copy_variable IS THE REFERENCE); */
var1=copy_variable; var2=0;

while (var1!=container_index){// index represent the current size of the array "container"
        container[var2]=container[var1]; // this way only copies the required elements over th unwanted elements
        var1++;
        var2++;
        }

container_index -= copy_variable; //decrement the container_index by "copy_variable"
copy_variable = 0;// make it zero because it will start over form the index zero while copying from container to input_matrix
}

/**************THE END OF THE LOOP*************/




/*CHANGE CONTAINER TO 2X2 DETERMINANTS*/
for (var1=0 ,var2=0; var1<=number_of_2x2_elements; var1=var1+4 , var2++){// jump over every 4 elements in every loop because the 2in2 matrix size 4 elements
        container[var2] = ((container[var1] * container[var1+3])-(container[var1+1] * container[var1+2]));
        }
number_of_2x2_elements = var2; // now the number of 2x2 elements is reduced



/*FURTHER PROCESS TO FIND THE DETERMINANT*/
int var4=0, x, limit = COL_value, col_size=(COL_value-1); // limit starts with the size of the first row of the main matrix
var3=COL_value; var2=0;
for (var1=0; var1<(COL_value-3); var1++){
        while (var2!=limit){
            for(x =0; x<col_size; x++,var3++){
                pick_up_array[var3] = pick_up_array[var3] * pick_up_array[var4]; //multiply the first row in the main matrix by the first row in the next lower level

                }
            var2++;// var2 here to stop "while loop" when it equals to the limit
            var4++;
            }
        limit *= col_size ; // then limit increases according to the size of the new matrix e.g. 4x4 matrix has 4 "3x3" matrices (12 elements to cycle through)
        col_size--; // decrement the size of the col for the next-lower level
        var2=0;//start while loop again from zero to count how many loop to do
        }

var3--; // decrement var3 because the array in general start with index 0 , and var3 here should represent the final index

int var =(number_of_2x2_elements-1);
       while (var>=0){
        container[var] = (container[var]) * (pick_up_array[var3]); //multiply the 2x2_determinants in the container by the pick_up_elements
        var--;
        var3--;
        }


for (var1=0 ; var1<number_of_2x2_elements; var1++){

        *determinant =  *determinant + container[var1]; // add all the elements to find the determinant
        }



free(container);
free(pick_up_array);
return determinant;

}
else{exit(0);}
}






else if (strcasecmp(format, "hu") == 0 ){ /*Unsigned Short*/
double *determinant= calloc(1,sizeof(double));
if (determinant == NULL){printf("No Enough Memory"); exit(0);}

int COL, x ,y; unsigned short **input_matrix, **receiver;
receiver = calloc(s, sizeof(unsigned short*));
for(x=0; x<s;x++){receiver[x]= calloc(s,sizeof(unsigned short));}
if (receiver == NULL){printf("No Enough Memory\n"), exit(0);}

input_matrix = calloc(s, sizeof(unsigned short*));
for(x=0; x<s;x++){input_matrix[x]= calloc(s,sizeof(unsigned short));}
if (input_matrix == NULL){printf("No Enough Memory\n"), exit(0);}
receiver = va_arg(ap, unsigned short**); // why not directly to input_matrix? not to affect the original matrix

for (x=0;x<s;x++){
    for(y=0;y<s;y++){
        input_matrix[x][y] = receiver[x][y];
    }
}

COL = s;
/*if user wants to know the determinant of 2x2 matrix, no need for all of this hard work, it can be calculated easily!*/
if (COL==2){ /*find 2x2 determinant*/

    /*FIND THE DETERMINANT*/
    *determinant = (double)((input_matrix[0][0] * input_matrix[1][1]) - (input_matrix[0][1] * input_matrix[1][0]));

    /*Free Input_matrix*/

    for(x=0;x<COL; x++){free(input_matrix[x]);}
    free(input_matrix);

    /*RETURN THE DETERMINANT*/
    return determinant;
}


/*FIND THE DETERMINANT FOR A MATRIC HIGHER THAN 2X2*/
else if (COL>2){
double *container, *pick_up_array;
int copy_variable, container_index, number_of_matrices_to_split, COL_value, number_of_2x2_elements, pick_up_index, move_to_next_dimenssion;
copy_variable=0; container_index=0; number_of_matrices_to_split=COL; COL_value=COL; number_of_2x2_elements=0; pick_up_index=0; move_to_next_dimenssion = COL-3;

    /*ESTIMATE THE SIZE OF THE CONTAINER*/
    register unsigned int var1 = 3, var2; //start from the 3*3 matrices, these variables ill be used later in other loops
    unsigned long elements =4; // the size of 2*2 matrices inside every 3*3 matrix

    while (var1<=COL){
        elements *= var1;
        var1++;
    }

    number_of_2x2_elements = elements-1; // we subtract 1 because container starts from index 0 and "number_of_2x2_elements" will be used in later calculations
    elements += (elements*0.75); //to include the 2*2 matrices AND the 3*3 matrices

    container =  calloc(elements , sizeof(double)); // create the array "container" of size elements
    if (container == NULL){printf("***No Enough Memory****\n"); exit(0);}




    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/
    register unsigned int var3, col1, unwanted_col;


    /*START SPLITTING*/
    for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
        for (var3=0; var3<COL; var3++){// will loop the matrix row /*here we finish all the columns in every row i.e. row row*/
            for (col1=0; col1<COL; col1++){ // will loop the matrix column /* here we move from column to another in every loop, once we finish them all , we move to the next row
                 if (var3!=0 && col1 !=unwanted_col){
                     container[container_index]= (double)input_matrix[var3][col1]; // if it is not the first row and not the unwanted column then assign it to splitter
                     container_index++;

        }
        }
        }
        }






   /*PICK UP REQUIRED ELEMENTS FROM EACH SPLIT MATRIX(i.e. FIRST ROW)*/
    unsigned int no_of_elements_to_save=1; register double change_s=1;// change_sign variable to control the sings of the elements, it always starts positive
   if (COL_value==3){no_of_elements_to_save=3;}
   else {
        var1=3;
        while (var1<COL_value){// a method to estimate how many elements will be saved in the pick_up_array
                if (var1==3){no_of_elements_to_save = (no_of_elements_to_save * (var1 *(var1+1)));}
                else{no_of_elements_to_save = (no_of_elements_to_save * (var1+1));}
                no_of_elements_to_save = no_of_elements_to_save + (var1+1);
                var1++;
                }
                }

    pick_up_array = calloc(no_of_elements_to_save, sizeof(double)); //Create the pick_up_array
    if (pick_up_array == NULL) {printf("***No Enough Memory****\n"); exit(0);}

    /*fill in the pick_up_array*/
    for (var1=0; var1<COL; var1++,pick_up_index++){ // we need to pick up only the first row of every matrix, that can be controlled by the COL value

            pick_up_array[pick_up_index] = (double)input_matrix[0][var1];
            pick_up_array[pick_up_index] *= change_s;
            change_s *= (-1);
            }

COL--; //Decrement COL for next level




register int a, b;
/*the main work and flow in high level of details*/
for(a=0; a<move_to_next_dimenssion; a++){
        for (b=0; b<number_of_matrices_to_split; b++){

                /*create array*/
                double **input_matrix = calloc(COL, sizeof(double*));
                for(var1= 0 ; var1<COL ; var1++){input_matrix[var1] = calloc(COL, sizeof(double));}
                if (input_matrix == NULL){printf("***No Enough Memory****\n"); exit(0);}

                /*copy_container_to_input_matrix every time based on the size of COL*/
                for (var1= 0; var1<COL ; var1++){
                    for (var2=0; var2<COL; var2++, copy_variable++ ){
                        input_matrix[var1][var2] = container[copy_variable]; // copy the container to the input_matrix
                        }
                        }

                /*pick_up_required_elements*/
                change_s=1;
                for (var1=0; var1<COL; var1++, pick_up_index++ ){
                        pick_up_array[pick_up_index] = input_matrix[0][var1];
                        pick_up_array[pick_up_index] *= change_s;
                        change_s = change_s * (-1);
                        }

                    /*SPLIT THE INPUT_MATRIX FOR THE FIRST TIME*/


                  /*START SPLITTING*/
                  for (unwanted_col=0; unwanted_col<COL; unwanted_col++){
                        for (var3=0; var3<COL; var3++){
                            for ( col1=0; col1<COL; col1++){
                                if (var3!=0 && col1!=unwanted_col){
                                    container[container_index]= input_matrix[var3][col1];
                                    container_index++;

                 }
                 }
                 }
                 }




            /*free_array(input_matrix);*/
            for (var1=0; var1<(COL-1); var1++){free(input_matrix[var1]);}
            free(input_matrix);
            }


/*CHANGE VARIABLE "NUMBER OF MATRICES TO SPLIT"*/
number_of_matrices_to_split *= COL;
/*DECREMENT COL FOR NEXT LEVEL*/
COL--;

/*REMOVE UNWANTED ELEMENTS FROM THE CONTAINER TO REDUCE ITS SIZE(copy_variable IS THE REFERENCE); */
var1=copy_variable; var2=0;

while (var1!=container_index){// index represent the current size of the array "container"
        container[var2]=container[var1]; // this way only copies the required elements over th unwanted elements
        var1++;
        var2++;
        }

container_index -= copy_variable; //decrement the container_index by "copy_variable"
copy_variable = 0;// make it zero because it will start over form the index zero while copying from container to input_matrix
}

/**************THE END OF THE LOOP*************/




/*CHANGE CONTAINER TO 2X2 DETERMINANTS*/
for (var1=0 ,var2=0; var1<=number_of_2x2_elements; var1=var1+4 , var2++){// jump over every 4 elements in every loop because the 2in2 matrix size 4 elements
        container[var2] = ((container[var1] * container[var1+3])-(container[var1+1] * container[var1+2]));
        }
number_of_2x2_elements = var2; // now the number of 2x2 elements is reduced



/*FURTHER PROCESS TO FIND THE DETERMINANT*/
int var4=0, x, limit = COL_value, col_size=(COL_value-1); // limit starts with the size of the first row of the main matrix
var3=COL_value; var2=0;
for (var1=0; var1<(COL_value-3); var1++){
        while (var2!=limit){
            for(x =0; x<col_size; x++,var3++){
                pick_up_array[var3] = pick_up_array[var3] * pick_up_array[var4]; //multiply the first row in the main matrix by the first row in the next lower level

                }
            var2++;// var2 here to stop "while loop" when it equals to the limit
            var4++;
            }
        limit *= col_size ; // then limit increases according to the size of the new matrix e.g. 4x4 matrix has 4 "3x3" matrices (12 elements to cycle through)
        col_size--; // decrement the size of the col for the next-lower level
        var2=0;//start while loop again from zero to count how many loop to do
        }

var3--; // decrement var3 because the array in general start with index 0 , and var3 here should represent the final index

int var =(number_of_2x2_elements-1);
       while (var>=0){
        container[var] = (container[var]) * (pick_up_array[var3]); //multiply the 2x2_determinants in the container by the pick_up_elements
        var--;
        var3--;
        }


for (var1=0 ; var1<number_of_2x2_elements; var1++){

        *determinant =  *determinant + container[var1]; // add all the elements to find the determinant
        }



free(container);
free(pick_up_array);
return determinant;

}
else{exit(0);}
}




else {printf("Unknown Number Type!\n"); exit(0);}

}




















