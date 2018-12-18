#include "main.h"

int multiply(const int x[], const int y[], int n) {
    int result = 0;
    // Copy code from problem 3 of assignment 3 here
    for (int counter = 0; counter < n; counter++)
	{
		result += (x[counter] * y[counter]);
	}
    return result; 
    
}

int *multiply(int x[], int *y[], int n) {
    // Write your code here
    
    int **result = new  int*[n];
	for (int i = 0; i < n; i++)
	{
		result[i] = new int[n];
	}
	y = transpose(y, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			result += x[i] * y[i][j];
		}
	}
    return  *result ;
}
