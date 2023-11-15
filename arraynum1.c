#include <stdio.h>

	int main (){
		
		int arr[50], i, num, x;
		
		printf("Input the number of elements:");
		scanf("%d", &num);
		
		printf("Enter %d Number to store in each element:\n", num);
		for (i = 1; i <= num; i++){
			scanf("%d", &arr[i]);
		}printf("\n Elements of the array are: \n");
		for (i = 1; i <= num; i++){
			printf("Element of %d position is %d \n", i, arr[i]);
		}printf("\nEnter the number to be searched: ");
		scanf("%d", &x);
		for (i = 1; i <= num; i++){
			if (x == arr[i]){
				printf("\nThe number you searched is present.");
				return 0;
			}
		}printf("\nThe number you searched is not present.");
		return 0;
	}
