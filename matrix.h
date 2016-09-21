#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

/*Author: Yahya Almardeny
24/07/2016
*/

/*Types of Numbers Available and Their Placeholders:
- int -> "d" or "i"
- unsigned int -> "u" or "iu"
- short -> "h"
- unsigned short -> "hu"
- long -> "ld" or "li"
- unsigned long -> "lu"
- long long -> "lli" or "lld"
- unsigned long long -> "llu"
- double -> "lf"

Important Note: No Need To Type "%" before The Placeholder.
*/

double *mDet(int s, const char* foramt, ...);
/*First Para is The Size of The Matrix: e.g. 5x5 Matrix its size that should be passed is 5.
*Receives Pointer To pointer **Array (Matrix) and Returns a *Pointer of Type "Double".
* Pros: Very High Precision & Accuracy.
* Cons: Consumes A lot of Time & Memory for matrices bigger than 10x10!
*/

double **mMult(int row , int col, int row2, int col2, const char* format ,...); //Multiply two matrices
/* Returns a pointer to pointer **Array (Matrix) of Type "Double"
* Pros: Very High Precision & Accuracy.
* Cons: May Lose Precision for Matrices of Type "Long Long" if and ONLY if the matrix contains very very big numbers that don't fit in type "double"!
*/

double **mDiv(int row, int col, int row1, int col1, const char* format, ...); //Divide one matrix by another (second one must be square)
/* Returns a pointer to pointer **Array (Matrix) of Type "Double"
* Pros: Very High Precision & Accuracy.
* Cons: May Lose Precision for Matrices of Type "Long Long" if and ONLY if the matrix contains very very big numbers that don't fit in type "double"!
*/

double **mInverse(int row , int col, const char* format, ...); //Find the inverse of a given matrix (must be square)
/* Returns a pointer to pointer **Array (Matrix) of Type "Double"
* Pros: Very High Precision & Accuracy.
* Cons: May Lose Precision for Matrices of Type "Long Long" if and ONLY if the matrix contains very very big numbers that don't fit in type "double"!
*/

void **mTrans(int row, int col, const char* format, ...); //Find the transpose of a given matrix
/* Returns a pointer to pointer **Array (Matrix) of The Same Type The Given Matrix is (i.e the parameter)
* Pros: Very High Precision & Accuracy.
* Cons: None!
IMPORTANT NOTE: Needs Cast of the same type of the given matrix (parameter), e.g. The Answer = (int**) mTrans(5,5,"d",matrix of type int)
*/

double **mAdd(int row, int col, int row1, int col1, const char *format, ...); //Add two matrices
/* Returns a pointer to pointer **Array (Matrix) of Type "Double"
* Pros: Very High Precision & Accuracy.
* Cons: May Lose Precision for Matrices of Type "Long Long" if and ONLY if the matrix contains very very big numbers that don't fit in type "double"!
*/

double **mSub(int row, int col, int row1, int col1, const char *format, ...); // Subtract one matrix from another.
/* Returns a pointer to pointer **Array (Matrix) of Type "Double"
* Pros: Very High Precision & Accuracy.
* Cons: May Lose Precision for Matrices of Type "Long Long" if and ONLY if the matrix contains very very big numbers that don't fit in type "double"!
*/


#endif
