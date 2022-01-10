#include <stdio.h>

int main(void) {

	int matice[4][5];
	//vyplneni pole
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 5; i++) {
			matice[j][i] = i + 1 + 5*j;
			printf("j,i: %d,%d, matice[j][i]: %d\n", j, i, matice[j][i]);
		}
		printf("\n");
	}
	int soucet = 0;
	for(int j = 0; j < 5; j++) {
		for (int i = 0; i < 4; i++) {
			soucet += matice[i][j];
		}
		printf("soucet: %d", soucet );
	}
}
