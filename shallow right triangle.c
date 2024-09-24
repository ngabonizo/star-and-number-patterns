#include<stdio.h>
int main(){
	int i,j,N;
	
	printf("Enter number of cols and rows: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		for(j=1; j<=i; j++){
			if( j==i || i==N || j==1){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	return 0;
}
