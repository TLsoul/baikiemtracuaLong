#include<stdio.h>
int IsEvenNumber(int num){
	int IsEvenNumber;
	return !(num & 1);
}
int main()
{
	int n,m,num;
	
	printf("\nNhap n :",n);
	scanf("%d",&n);
	printf("\nNhap m :",m);
	scanf("%d",&m);
	printf("Even numbers between n to m (inclusive):\n",n,m);
	for(num = n;num < m;num++)
	{
		if(num%2==1)
		continue;
		printf("\n%d",num);
		
	}
	return 0;
}
