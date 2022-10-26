#include <stdio.h>
#include <iostream>
using namespace std;

int main(void)
{
	struct{
		char name[20];
		int birth_year;
		int power;
		char master[20];
		char occation[20];
	}servent;
	
	printf("Holy Cup War servent login system:\n");
	printf("Enter your Name: ");			scanf("%s",servent.name);
	printf("Enter your Birth year: ");		scanf("%d",&servent.birth_year);
	printf("Enter your Occation: ");		scanf("%s",servent.occation);
	printf("Enter your Master's name: ");	scanf("%s",servent.master);
	printf("Enter your power: ");			scanf("%d",&servent.power);
	printf("Servent: %s, power: %d, born in %d, is a(n) %s. Master is %s."
			,servent.name ,servent.power, servent.birth_year, servent.occation, servent.master);
	
	system("PAUSE");
	return 0;
}
