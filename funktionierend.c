#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){

	char mystring[10];
	printf("String:  ");
	scanf("%s", mystring);	
	
	for (int i = 0; i < strlen(mystring); i++) { 
		mystring[i] = ((mystring[i] - 'A' + 13) % 26) + 'A';
}
	printf ("%s\n", mystring);
	return 0;
}