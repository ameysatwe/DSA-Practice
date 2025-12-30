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
int linSearch(int key)
{
    for (int i = 0; i < p->length; i++)
    {
        if (p->A[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    Display(arr);

    add(&arr, 6);
    Display(arr);

    insert(&arr, 0, 10);
    Display(arr);

    int x = Delete(&arr, 1);
    printf("Deleted %d from the array \n", x);
    Display(arr);

    int k = 10;
    int lin_search = linSearch(k);
    printf("Found element %d at index %d \n", k, lin_search);

    return 0;
}