#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int First;
	int Second;
	int Third;
	int Fourth;
	float Sum;
	float Average;
	float Squares;
	
	printf("Enter First Number:");
	scanf("%d", &First);
	printf("Enter Second Number:");
	scanf("%d", &Second);
	printf("Enter Third Number:");\
	scanf("%d",&Third);
	printf("Enter Fourth Number:");
	scanf("%d",&Fourth);

	Sum = First + Second + Third + Fourth;
	Average = Sum / 4;
	Squares = First * First + Second * Second + Third * Third + Fourth * Fourth; 
	
	printf("Sum:%.2f",Sum);
	printf("\nAverage:%.2f",Average);
	printf("\nSum of Squares:%.2f",Squares);
	//Don't write system("pause");
	return 0;
}
