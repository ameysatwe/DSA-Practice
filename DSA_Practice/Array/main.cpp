#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[20];
    int size;
    int length;
};
void Display(struct Array arr)
{
    int i;
    printf("Elements are: \n");
    for (i = 0; i < arr.length; i++)
    {
        printf("%d, ", arr.A[i]);
    }
    printf("\n");
}
int main()
{
    Array arr = {{1, 2, 3, 4, 5}, 10, 5};
    // int n, i;
    // printf("Enter the size of the array: ");
    // scanf("%d", &arr.size);
    // arr.A = (int *)malloc(arr.size * sizeof(int));
    // arr.length = 0;

    // printf("Enter the number of elements in the array: ");
    // scanf("%d", &n);
    // printf("Enter the elements: ");
    // for (i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr.A[i]);
    //     arr.length = arr.length + 1;
    // }
    Display(arr);

    return 0;
}