
#include <stdio.h>
//#include<math.h>
int largest(int arr[], int n)
{
	int i;
	int max=arr[0];
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

int main()
{
    int arr[10000];
    int n ;
    int i;
    scanf("%d", &n);
    for ( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
	printf("Largest in given array is %d", largest(arr, n));
	return 0;
}
