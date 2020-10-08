#include <stdio.h>

int main(){

	/*
	char c = 'c';
	int i = 5;
	long l = 34432;

	printf("&c: %p\n",&c);
	printf("&i: %p\n",&i);
	printf("&l: %p\n",&l);

	printf("&c: %lu\n",&c);
	printf("&i: %lu\n",&i);
	printf("&l: %lu\n",&l);

	char *cp = &c;
	int *ip = &i;
	long *lp = &l;

	printf("*cp %p\n",cp);
	printf("*ci %p\n", ip);
	printf("*cl %p\n",lp);

	*cp ='n';
	*ip = 10;
	*lp = 1000;

	printf("newChar %c\n",*cp);
	printf("newInt %d\n",*ip);
	printf("newLong %ld\n",*lp);
	*/


	unsigned int i = 2864434397;
	char *ic = &i;
	int *ii = &i;

	printf("ic: %p\n",ic);
	printf("*ic: %u\n",*ic);
	printf("ii: %p\n",ii);
	printf("*ii: %u\n",*ii);

	printf("hex: %x\n",i);
	printf("decimal: %u\n",i);

	printf("byte 1: %hhu\n",ic[0]);
	printf("byte 2: %hhu\n",ic[1]);
	printf("byte 3: %hhu\n",ic[2]);
	printf("byte 4: %hhu\n",ic[3]);

	/*
	ic[0]++;
	printf("decimal: %u\n",i);
	ic[1]++;
	printf("decimal: %u\n",i);
	ic[2]++;
	printf("decimal: %u\n",i);
	ic[3]++;
	printf("decimal: %u\n",i);
	*/

	ic[0]+=16;
	printf("decimal: %u\n",i);
	ic[1]+=16;
	printf("decimal: %u\n",i);
	ic[2]+=16;
	printf("decimal: %u\n",i);
	ic[3]+=16;
	printf("decimal: %u\n",i);
	

	printf("byte 1: %hhu\n",ic[0]);
	printf("byte 2: %hhu\n",ic[1]);
	printf("byte 3: %hhu\n",ic[2]);
	printf("byte 4: %hhu\n",ic[3]);


	return 0;
}


