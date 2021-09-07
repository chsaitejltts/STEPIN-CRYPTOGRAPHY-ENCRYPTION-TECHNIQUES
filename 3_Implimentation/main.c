/**
 * @file main.c
 * @author 311305
 * @brief main file has function calling
 * @version 0.1
 *
 * @copyright Copyright (c) 2021
 * 
 */
#include "fun.h"


int main(){
	printf("\n ***************Welcome to the Cryptography Encryption Techniques******************\n");
	printf("\n Cryptography deals mostly with encryption and decryption\n");
	printf("\n Here we are going to perform some Encryption techniques :-\n");
	printf("\nBelow are some of the encryption cipher tecniques:-\n");
	printf("1:vignere cipher\n");
	printf("2:vernem cipher\n");
	printf("3:ceaser cipher\n");
	
	printf("\nchoose one of the above technique that you want to perform:-\n");
	printf("Please enter the value of the technique:-\n");
	int n;
	scanf("%d",&n);
	system("cls");
	switch(n){
		case 1: 
			{
			
				printf("\n\n**************** Vignere Cipher ******************\n\n");
				printf("\n Below are some of the guidelines to run the programme more accurately.\n");
				printf("\n These guidelines are for those who are new to this:-");
				printf(" 1.To encrypt vignere cipher you have to give the plain text which you wants to encrypt as a string.\n");
				printf(" 2.Key can be a character or a string.\n");
				printf(" 3.In vignere cipher if the key length is less than plaintext, the key will repeat itself till it is equal to plaintext\n");
				printf(" 4.If key length is more than the plain text, don't worry because the code will ignore the extra length of the key.\n");
				    	char message[50];
      					char key[20];
						char gen_key[60], encrypted_message[60];
      					printf("\nEnter Plain text To Encode:\t");
      					fflush(stdin);
      					scanf("%[^\n]s", message);
      					printf("\nEnter Key:\t");
      					fflush(stdin);
      					scanf("%[^\n]s", key);
      					vignere(message,key,gen_key,encrypted_message);
						printf("\n-------------------------------\n");
						printf("\nIntial String:\t%s", message);
						printf("\nKey:\t%s", key);
						printf("\nGenerated Key:\t%s", gen_key);
						printf("\nEncrypted Message:\t%s", encrypted_message);
						printf("\n------------------------------\n");
						printf("\n------------------------------\n");
						printf("\n press enter to exit\n");

				break;
			}
		case 2:
			{
			
				printf("\n\n**************** Vernem Cipher ******************\n\n");
				printf("\n Below are some of the guidelines to run the programme more accurately.\n");
				printf("\n These guidelines are for those who are new to this:-");
				printf(" 1.To encrypt vernem cipher you have to give the plain text which you wants to encrypt as a string.\n");
				printf(" 2.Key should be same legth of the plain text\n");
				
						char str[60];
 						char key[60]; 
						printf("\nenter plain text:\n");
 						scanf("%s",str); 
 						printf("enter key:\n");
 						scanf("%s",key);
 						char encrypted_msg[60];
 						vernem(str,key,encrypted_msg);
 						printf("\n-------------------------------\n");
						printf("\nIntial String:\t%s", str);
						printf("\nKey:\t%s", key);
						printf("\nencrypted msg:\t%s",encrypted_msg);
						printf("\n------------------------------\n");
						printf("\n press enter to exit\n");
				break;
			}

		case 3:
			{
			
				printf("\n\n**************** Ceaser Cipher ******************\n\n");
				printf("\n Below are some of the guidelines to run the programme more accurately.\n");
				printf("\n These guidelines are for those who are new to this:-");
				printf(" 1.To encrypt ceaser cipher you have to give the plain text which you wants to encrypt as a string.\n");
				printf(" 2.Key should be a positve integer\n");
						char string[60];
						printf("\nenter the plain test\n");
						scanf("%s",string);
						int key;
						printf("enter the key (key should be a positve integer)\n");
						scanf("%d",&key);
						char encrypted_msg[60];
						
					    ceaser(string, key, encrypted_msg);
						printf("\n-------------------------------\n");
						printf("\nIntial String:\t%s", string);
						printf("\nKey:\t%d", key);
						printf("\nyour encrypted text is:-");
						printf("%s\n",encrypted_msg);
						printf("\n------------------------------\n");
						printf("\n press enter to exit\n");						
				break;
			}
		default :
				printf("\n\n**************** None Of The Above ******************\n\n");
						printf("\n------------------------------\n");
						printf("\n press enter to exit\n");		
			break;
	}
	return 0;
}