#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m  = n % 10;
    if (m > 5) {
        printf("%d is greater than 5\n");
    } else if (lastDigit == 0) {
        printf("%d is 0\n");
    } else {
        printf(%d is "less than 6 and not 0\n");
    }
    return 0;
}
