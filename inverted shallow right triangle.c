#include<stdio.h>
int main(){
	int i,j,N;
	
	printf("Enter number of rows/cols: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		for(j=1; j<=N-i; j++){
			if(j==N-i || j==1 || i==1){
				printf("*");
			}else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	return 0;
}
