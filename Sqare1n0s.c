#include<stdio.h>
int main(){
	int i,j,N;
	
	printf("enter number of rows/cols: ");
	scanf("%d",&N);
	
	for(i=1; i<=N; i++){
		for(j=1; j<=N; j++){
			if(j%2==0){
				printf("1");
			}else{
				printf("0");
			}
		}
		printf("\n");
	}
	return 0;
}
