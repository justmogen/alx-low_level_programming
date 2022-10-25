#include <stdio.h>
void __attribute__((print)) justaString(void);
/**
 *  justaString - prints a str before main function is executed
 */
void  justaString(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
