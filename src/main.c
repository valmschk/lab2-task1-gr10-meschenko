#include <stdio.h>
#include <stdlib.h>
#include "lucky.h"
int main(int argc, char *argv[]) {
		if (argc < 3) return 1;
		int s = atoi(argv[1]), e = atoi(argv[2]);
		printf("Result: %d\n", count_lucky_numbers(s, e));
		return 0;
}