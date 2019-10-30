#include <stdio.h>
#include <string.h>

//	int messen(char mystring[], int msgLen){
//		printf("String:  ");
//		scanf("%s", mystring);
//	msgLen = strlen(mystring);
//	return msgLen;
//}	

int main(int argc, char *argv[]){
char mystring[1000];
char key[] = "APPLE";
int msgLen;	
int keyLen = strlen(key), i, j;


//Wort messen	
printf("String:  ");
scanf("%s",	mystring);
msgLen = strlen(mystring);										
printf("%d", msgLen);

char newKey[msgLen];
//new key generating	
 for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
		newKey[i] = key [j];
}
printf( "%s\n", newKey);
	
	return 0;
}