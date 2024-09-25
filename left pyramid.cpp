#include<stdio.h>
int main(){
	int i,j,k,N;
	
	printf("Enter number of rows: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		for(j=1; j<=N-i; j++){
			printf(" ");
		}
		for(j=1; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=N-1; i>=1; i--){
		for(j=1; j<=N-i; j++){
			printf(" ");
		}
		
		for(k=1; k<=i; k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
