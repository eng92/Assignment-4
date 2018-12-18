#include "main.h"

int **multiply(int **x, int **y, int n, int m) {
    // Write your code here
    
    int **result = new  int*[n];
	for (int i = 0; i < n; i++)
	{
		result[i] = new int[n];
	}
	int i, j, k;                 
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++){
			result[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j<n; j++)
		{
			for (k = 0; k < m; k++)
			{
				result[i][j] += x[i][k] * y[k][j];
			}
		}
	}
    return result;
}
