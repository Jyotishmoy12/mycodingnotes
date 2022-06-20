
#include <stdio.h>
#include <limits.h>
void print3largest(int arr[], int arr_size)
{
	int i, first, second, third;
	if (arr_size < 3) {
		printf(" Invalid Input ");
		return;
	}
    third = first = second = INT_MIN;
	for (i = 0; i < arr_size; i++) {
		if (arr[i] > first) {
			third = second;
			second = first;
			first = arr[i];
		}
		else if (arr[i] > second) {
			third = second;
			second = arr[i];
		}

		else if (arr[i] > third)
			third = arr[i];
	}

	printf("Three largest elements are %d %d %d\n", first, second, third);
}
int main()
{
    int n =0 , i=0;
	printf("Enter the number of element you want . \n");
	scanf("%d", &n);
	int arr[n];
	for(i = 0; i<n; i++){
		printf("Enter %d Number " , i+1);
		scanf("%d", &arr[i]);
	}
	print3largest(arr , n);
	return 0;
}

