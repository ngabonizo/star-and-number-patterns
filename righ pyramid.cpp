#include<stdio.h>
int main(){
	int i,j,H,cols;
	
	printf("Enter the height: ");
	scanf("%d",&H);
	
	for(i=1; i<=2*H; i++){
		for(j=1; j<=cols; j++){
			printf("*");
		}
		
		if(i<H)
		cols ++;
		else
		cols --;
		printf("\n");
	}

	return 0;
}
