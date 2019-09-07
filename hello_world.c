#include <stdio.h>
#include <string.h> //needed for strlen

void test();

//Note: void main() worked just as well.
int main() {
	//comment 1
	/* comment 2 */
	const char NEWLINE = '\n';
		
	//printf("Enter a character:\n");
	//int c = getchar();
	int c = 80;
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
	
	char string_test[20] = "THIS IS A STRING";
	printf("%s\n", string_test);
	printf("%c\n", string_test[3]);
	printf("\n");
	
	char char_array[] = "HELLO THERE!";
	puts(char_array);
	
	for (char i=65; i<91; i++) {
		putchar(i);
	}
	printf("\n");
	printf("%lu\n", sizeof("Weird"));
	// sizeof a string seems to always be its length +1
	printf("%lu\n", strlen("Weird"));
	// strlen returns the right length
	
	
	
	printf("\n");
	return 0;
}

void test() {
	//Note: 125 octal = 85 decimal = 'U' in ASCII
	printf("\125 \n");
}

/*The only four primitive types in C are:
char
int
float
double
(and void)
also, pointers
*/

