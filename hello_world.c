#include <stdio.h>

void test() {
	//Note: 125 octal = 85 decimal = 'U' in ASCII
	printf("\125 \n");
}


int main() {
	//comment 1
	/* comment 2 */
	const char NEWLINE = '\n';
		
	printf("Enter a character:\n");
	int c = getchar();
	putchar(c);
	
	printf("\nYou entered: %c.", c); //Note: the char is not printed directly, string formatting is used
	
	printf(c=='d'||c=='D' ? " YAY!\n" : " Ok.\n");
	
	char f = 'f';
	
	test();
	
	int a = 4;
	printf("%d ", a << 1);
	printf("%d ", a);
	printf("%d ", a >> 1);
	printf("%d ", a >> 2);
	printf("%d \n\n", a >> 3);
	
	char *pointer_test = "THIS IS A STRING";
	puts(pointer_test);
	printf("%c", pointer_test[3]);
	printf("\n");
	
	return 0;
}



/*The only four variable typse in C are:
char
int
float
double
(and void)
*/

