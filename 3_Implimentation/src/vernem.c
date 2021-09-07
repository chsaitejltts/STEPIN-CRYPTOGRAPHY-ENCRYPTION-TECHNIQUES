#include "fun.h"

char vernem(char *str, char *key, char *encrypted_msg){
	int i;
	int l=strlen(str); //plaintext length
	int m=strlen(key); //key length
	int res[l]; 
	// ((int(p[i]-96) )+ (int (k[i]-96))) %26 + 96 
	// z(plaintext)----c(ciphertextt)= 122 +3 =125 -96=29 mod 26 =3 +96=99---->c 
	//according to ascii values, value of c is 99 
	if(l!=m) 
	printf("not possible,because plaintext and key lengths are different");
	else 
	{
		for(i=0;i<l;i++) 
		{
			res[i]=str[i]-'A'+key[i]-'A'; 
		} 

		for( i=0;i<l;i++) 
		{	
			encrypted_msg[i]=res[i]%26+65;
		} 
		printf("\n");  	
 
	}
	
}