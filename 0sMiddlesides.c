#include<stdio.h>
int main(){
	int i,j,N;
	
	printf("Enter number of rows/cols: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		
		for(j=1; j<=N; j++){
			
		if((i==1 || i==N ) && (j==1 || j==N)){
		    printf("1");
		}else if(i==1 || i==N || j==1 || j==N){
			printf("0");
		}else{
			printf("1");
		}	
      }
      printf("\n");
	}
	return 0;
}
