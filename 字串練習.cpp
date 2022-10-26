#include <stdio.h>
#include <string.h>

int count_blank(char *str);
char *strcat(char *str, const char *str3);

int main(void)
{
	int k = 0;
	char str[] = "Fuck ya! OMG Wa shi lin lao bei";
	char str2[15];
	char str3[] = ". Gan ni nyan.";
	
	k = count_blank(str);
	printf("%d\n",k);
	
	strcpy(str2, str);
	printf("%s\n",str2);
	printf("%d\n",strlen(str2));
	
	printf("%s\n", strcat(str, str3));
	
	return 0;
} 
 
int count_blank(char *str)
{
	int i, count = 0;
	
	for (; *str != '\0'; str++)
		if (*str == ' ')
			count++;
	
	return count;
	
}

char *strcat(char *str, const char *str3)
{
	char *p = str;
	
	while (*p)
		p++;
	while (*p++ = *str3++);

	return str;	
}


