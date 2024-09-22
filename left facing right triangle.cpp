//left facing right tringle

#include<stdio.h>
int main(){
	int i,j,N;
	
	printf("Enter the number of rows and coloumns: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		// for loop to print leading spaces in decreasing order
		for(j=i; j<=N; j++){
			printf(" ");
		}
		
		//for loop to print stars
		for(j=1; j<=i; j++){
			printf("*");
		}	
		printf("\n");	
	}
	return 0;
}
