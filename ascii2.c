//Autor: Daniel Ubeda Sanchez
#include <stdio.h>

int main() {
	char c;
	int n,i;
		
	printf("TAULA ASCII MAJÚSCULES 14-2-2018\n");
	printf("CAR  HEX  DEC\n");
	n='Z'-'A';
	for (i=n;i>=0;i--) {
		printf("%c    %x   %d\n",c+32,c+32,c+32);
		c='A'+i;
		printf("%c    %x   %d\n",c,c,c);
	}
	return(0);
}
