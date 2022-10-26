#include<stdio.h>
int IsEvenNumber( int num)
{
	if( num % 2==0){	
	return 1;
}else{
	return 0;
}
}
int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d",&num);
	if (IsEvenNumber(num) == 1){
		printf("\n%d is an even:",num);
	}else{
		printf("\n%d is not even:",num);
	}
	return 0;
}

