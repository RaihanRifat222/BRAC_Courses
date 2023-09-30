#include<stdio.h>
struct food{
	int quantity;
	int price;
};

int main(){
	struct food paratha;
	struct food vegetable;
	struct food water;
	
	printf("Quantity of Paratha: ");
	scanf("%d", &paratha.quantity);
	printf("Unit Price: ");
	scanf("%d", &paratha.price);
	
	
	printf("Quantity of Vegetables: ");
	scanf("%d", &vegetable.quantity);
	printf("Unit Price: ");
	scanf("%d", &vegetable.price);
	
	
	printf("Quantity of Mineral Water: ");
	scanf("%d", &water.quantity);
	printf("Unit Price: ");
	scanf("%d", &water.price);
	
	int people, bill;
	float per_person;
	
	printf("Number of people: ");
	scanf("%d", &people);
	
	bill = (paratha.quantity*paratha.price ) + (vegetable.quantity* vegetable.price) + (water.quantity*water.price);
	per_person = bill/people;
	
	printf("Individual people will pay: %.2f tk", per_person);
}

