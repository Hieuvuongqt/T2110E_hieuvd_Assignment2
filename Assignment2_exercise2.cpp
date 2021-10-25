#include <stdio.h>
#include <math.h>

int main(){
	int a,b;
	float c;
	
	printf("Enter the amount: ");
	scanf("%d",&a);
	
	printf("Enter the number of years: ");
	scanf("%d",&b);
	
	printf("Enter interest rate: ");
	scanf("%f",&c);
	
	a = a + (a*c/100);
	b = b - 1;
	if(b != 0){
		a = a + (a*c/100);
		b = b - 1;
		if(b != 0){
			a = a + (a*c/100);
			b = b - 1;
			
			if(b != 0){
				a = a + (a*c/100);
				b = b - 1;
				
				if(b != 0){
					a = a + (a*c/100);
					b = b - 1;
				}else{
					printf("The total amount: %d",a);
				}
			}else{
				printf("The total amount: %d",a);
			}
		}else{
			printf("The total amount: %d",a);
		}
	}else{
		printf("The total amount: %d",a);
	}
}