#include <stdio.h>

int main(void)
{
	typedef struct {
		char weapon[50];
		char occation[50];
	} servent;
	
	servent Emiya = {"Unlimited Blade Works", "Archer"};
	servent Arthoria = {"Ex©@­ù´Î", "Saber"};
	
	printf("%s\n",Emiya.weapon);
	printf("%s\n",Emiya.occation);
	printf("%s\n",Arthoria.weapon);
	printf("%s",Arthoria.occation);
	return 0;
}
 
