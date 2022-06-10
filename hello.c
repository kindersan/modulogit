#include<stdio.h>
	

int main(void){
	int vetor[]={9,80,45,10,100};
	int length= sizeof(vetor)/sizeof(vetor[0]);
	for(int i=0;i <length;i++)
	printf("%d\n",vetor[i]);
	printf("\nOla Fátima\n");		
	return 0;
}



