#include <stdio.h>
#include <stdlib.h>
struct Array
{
    int A[20];
    int size;
    int length;
};
struct Array arr = {{1, 2, 3, 4, 5}, 10, 5};
Array *p = &arr;
void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
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
void add(Array *arr, int val)
{
    if (arr->length < arr->size)
    {
        // printf("Element inserted at index: %d\n", arr.length++);
        arr->A[arr->length] = val;
        arr->length++;
    }
}

void insert(Array *arr, int index, int val)
{
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; --i)
        {

            arr->A[i] = arr->A[i - 1];
        }
        arr->A[index] = val;
        arr->length++;
    }
}
int Delete(struct Array *arr, int index)
{
    int x;
    if (index >= 0 && index <= arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->A[arr->length] = 0;
        arr->length--;
        return x;
    }
    return 0;
}
int linSearch(Array arr, int key)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int bSearch(Array arr, int key)
{
    int l = 0, h = arr.length;
    int mid;

    while (l <= h)
    {
        mid = (l + h) / 2;
        if (arr.A[mid] == key)
        {
            return mid;
        }
        else if (key < arr.A[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}
int get(struct Array arr, int index)
{
    if (index >= arr.length || index < 0)
    {
        return -1;
    }
    return arr.A[index];
}
void set(struct Array *arr, int index, int val)
{
    if (index >= arr->length || index < 0)
    {
        return;
    }
    arr->A[index] = val;
}
int max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
        {
            max = arr.A[i];
        }
    }
    return max;
}
int min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
        {
            min = arr.A[i];
        }
    }
    return min;
}
int sum(Array arr)
{
    int sum = 0;
    for (int i = 0; i < arr.length; i++)
    {
        // printf("%d", sum);
        sum = sum + arr.A[i];
    }
    return sum;
}
float avg(Array arr)
{
    // printf("len %d\n", arr.length);
    return (float)sum(arr) / arr.length;
}
void reverse(Array *arr)
{
    int l = 0;
    int r = arr->length - 1;

    while (l <= r)
    {
        swap(&arr->A[l], &arr->A[r]);
        l++;
        r--;
    }
    return;
}
int main()
{
    Display(arr);

    // add(&arr, 6);
    // Display(arr);

    // // insert(&arr, 0, 10);
    // Display(arr);

    // int x = Delete(&arr, 1);
    // printf("Deleted %d from the array \n", x);
    // Display(arr);

    // int k = 10;
    // int lin_search = linSearch(arr, k);
    // printf("Found element %d at index %d \n", k, lin_search);

    // int bK = 5;
    // int bin_search = bSearch(arr, bK);
    // printf("Found element %d at index %d \n", bK, bin_search);

    // printf("Element at index 2 is %d \n", get(arr, 2));
    // set(&arr, 2, 100);
    // printf("Element at index 2 is %d \n", get(arr, 2));
    // printf("Max element is %d \n", max(arr));
    // printf("Min element is % d\n", min(arr));
    // Display(arr);

    // printf("Sum of array is %d\n", sum(arr));
    // printf("Avg of array is %f\n", avg(arr));
    reverse(&arr);
    Display(arr);
    return 0;
}