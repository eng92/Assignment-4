#include "main.h"

long factorial(int n) {
    // Write your code here
    if (n > 1)
		return n * factorial(n - 1);
	else
		return 1;
   
}
