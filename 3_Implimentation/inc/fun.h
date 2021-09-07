/**
 * @file fun.h
 * @author 311305
 * @ Cryptography Encryption Algorithms
 */
#ifndef __FUN_H
#define __FUN_H
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

/*function prototypes for all functions*/
/**
*   Perform ceaser encryption algorithm
* @param[in] value1
* @param[in] value2 
* @param[out] value3 
* @return Result of value3
*/
char ceaser(char *string, int n, char *encrypted_msg);
/*function prototypes for all functions*/
/**
*   Perform vernem encryption algorithm
* @param[in] value1
* @param[in] value2 
* @param[out] value3 
* @return Result of value3
*/
char vernem(char *str, char *key, char *encrypted_msg);
/*function prototypes for all functions*/
/**
*   Perform ceaser encryption algorithm
* @param[in] value1
* @param[in] value2 
* @param[out] value3 
* @param[out] value4 
* @return Result of value3
*/
char vignere(char *message, char *key, char *temp_key, char *encrypted_message);

#endif /* #define __Cryptography_Encryption_Algorithms_H__ */