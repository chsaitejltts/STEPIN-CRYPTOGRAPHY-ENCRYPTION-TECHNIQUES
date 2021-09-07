#include "fun.h"

char ceaser(char *string, int key, char *encrypted_msg) {
	int i;
	if(key<26){
	
	for ( i=0;i<strlen(string);i++){
	encrypted_msg[i]=string[i]+key;
	}
	}
		else{
            int temp;
		temp=key%26;
		for (int i=0;i<strlen(string);i++){
		encrypted_msg[i]=string[i]+temp;
		}						
		}
  
}