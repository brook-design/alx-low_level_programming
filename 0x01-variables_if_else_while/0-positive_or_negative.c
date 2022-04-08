#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n <= 0.0) {
        if (n == 0.0)
            printf("is zero");
        else
            printf("is negative");
    } 
    else
        printf("is positive");
   
	return (0);
}
