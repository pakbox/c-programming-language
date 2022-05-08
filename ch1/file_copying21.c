#include <stdio.h>

/* copy input to output: 1st version */

int main(){
	int count = 0;

	while (getchar() != EOF) {
		count += 1;
	}
	printf("count: %d\n", count);
	return 0;
}
