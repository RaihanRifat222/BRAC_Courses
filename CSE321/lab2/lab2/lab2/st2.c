#include <stdio.h>

void find_perfect(int a, int b){
	while (a<=b){
		int d =1;
		int sum = 0;
		while (d<a){
			if (a%d ==0){
				sum+=d;
				
			}
			d++;
		}
		if (sum ==a){
			printf("%d \n",a);
		}
		a++;
	}
	
};

int main(){
	int a, b;
	scanf("%d",&a);
	printf("\n");
	scanf("%d",&b);
	printf("\n");
	find_perfect(a,b);
	
}
