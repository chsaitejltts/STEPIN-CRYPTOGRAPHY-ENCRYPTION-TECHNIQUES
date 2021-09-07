#include "fun.h"

char vignere(char *message, char *key, char *gen_key, char *encrypted_message){
	int count, j;
	for(count = 0, j = 0; count < strlen(message); ++count, ++j)
	{
			if(j == strlen(key))
			{
				j = 0;
			}
			gen_key[count] = key[j];
	}
	gen_key[count] = '\0';
	count = 0;
	while(count < strlen(message))
	{
			encrypted_message[count] = ((message[count] + gen_key[count]) % 26) + 'A';
			count = count + 1;
	}
	encrypted_message[count] = '\0';
	
}