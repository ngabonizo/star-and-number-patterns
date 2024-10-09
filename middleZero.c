#include<stdio.h>
int main(){
	int i,j,N;
//	int midposition = (N+1)/2;
	
	printf("Enter number of rows/cols: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
		   if(j== (N+1)/2  &&  i == (N+1)/2){
		   	printf("0");
		   }else{
		   	printf("1");
		   }
		}
		printf("\n");
	}
	return 0;
}
