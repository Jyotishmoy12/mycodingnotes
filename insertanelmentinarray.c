#include <stdio.h>
int main()
{
    int arr[50], i, n, key;
    printf("enter the no of elements\n");
    scanf("%d", &n);
    printf("enter the elements in array\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("enter the target element\n");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            printf("yes %d", i);
            return 0;
        }
    }
    printf("no %d",key);
    return 0;
}
