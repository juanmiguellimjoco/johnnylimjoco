#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	char answer[20];
	printf("What is your name?");
	scanf(" %[^\n]s",answer);
	printf("Hello %s, have a nice day!",answer);
		
	//Don't write system("pause");
	return 0;
}
