/**
 * @file test.c
 * @brief contains all the test functions with expexted output by providing default input.
 * @copyright Copyright (c) 2021
 */
#include "unity.h"
#include "fun.h"
#define PROJECT_NAME "Cryptography"
/* Required by the unity test framework */
void setUp()
{
}
/* Reequired by the unity test framework */
void tearDown()
{
}

/* Prototypes for all the test functions */
void test_ceaser(void);
void test_vernem(void);
void test_vignere(void);



int main(void){



    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();
    /* Run Test Functions */
    RUN_TEST(test_ceaser);
    RUN_TEST(test_vernem);
    RUN_TEST(test_vignere);

    /* Close the Unity Test Framework */
    return UNITY_END();
}

/* all test functions */
void test_ceaser(void){
    char string[60]="aaa";
    int key=2;
    char encrypted_msg[60];
    
        ceaser(string, key, encrypted_msg);
    	
	if(key<26){
	
	for (int i=0;i<strlen(string);i++){
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
    TEST_ASSERT_EQUAL_STRING("aaa",string);
    TEST_ASSERT_EQUAL_INT(2,key);
    TEST_ASSERT_EQUAL_STRING("ccc",encrypted_msg);
}


void test_vernem(void){
    char str[60]="harish";
    char key[60]="temper";
    char encrypted_msg[60];
    
	int i;
	int l=strlen(str); 
	int m=strlen(key); 
	int res[l]; 
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
 
	}
    TEST_ASSERT_EQUAL_STRING("harish",str);
    TEST_ASSERT_EQUAL_STRING("temper",key);
    TEST_ASSERT_EQUAL_STRING("MQPJIK",encrypted_msg);
}

void test_vignere(void){
    char message[50]="harish";
    char key[20]="ok";
    char gen_key[60], encrypted_message[60];

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

    TEST_ASSERT_EQUAL_STRING("harish",message);
    TEST_ASSERT_EQUAL_STRING("ok",key);
    TEST_ASSERT_EQUAL_STRING("okokok",gen_key);
    TEST_ASSERT_EQUAL_STRING("HWRESD",encrypted_message);
}