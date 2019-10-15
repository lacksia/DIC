#include <stdio.h>
#include <stdlib.h>
int main() {
	int v[6] = { 0,0,0,0,0,0 };
	int i;
	for (i = 0; i < 6000; i++)
		v[rand() % 6]++;
	for (i = 0; i < 6; i++)
		printf("[%d]=%d\n", i + 1, v[i]);
}