#include "main.h"

int **transpose(int **y, int n) {
    // Write your code here
    int **result = new  int*[n];
	for (int i = 0; i < n; i++)
	{
		result[i] = new int[n];
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			result[j][i] = y[i][j];
			 
		}

	}
    return result ;
    
    
    
}
