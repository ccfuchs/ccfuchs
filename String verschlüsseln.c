#include <stdio.h>
#include <string.h>
	int messen(char mystring[], int msgLen){
		printf("String:  ");
		scanf("%s", mystring);
	msgLen = strln(mystring);
	return msgLen;
}	
	int main(int argc, char *argv[]){
	
	char key[] = "APPLE"; 
	char mystring[];
	char xstring[10]; 
	scanf("%s", mystring);
	int keyLen = strlen(key), i, j;
	char newKey[msgLen], encryptedMsg[msgLen], decryptedMsg[msgLen];	
	//msgLen = strlen(mystring),
	    for(i = 0, j = 0; i < msgLen; ++i, ++j){
        if(j == keyLen)
            j = 0;
   //encryption
    for(i = 0; i < msgLen; ++i)
        encryptedMsg[i] = ((msg[i] + newKey[i]) % 26) + 'A';
 
    encryptedMsg[i] = '\0';
 
	
	
	printf("String:  ");
	scanf("%s", mystring);	
	return 0;
}