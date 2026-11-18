#include <stdio.h>
int sum_array(int *arr, int size)
{
    int i;
    int total = 0;

    for (i = 0; i < size; i++)
    {
        total = total + *(arr + i);
    }
    return total;
}
void reverse(int *arr, int size)
{
    int *left = arr;
    int *right = arr + size - 1;
    while (left < right)
    {
        int temp = *left;
        *left = *right;
        *right = temp;

        left++;
        right--;
    }
}
void print_array(int *arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
int main(void)
{
    int data[5] = {1, 2, 3, 4, 5};
    printf("Before: ");
    print_array(data, 5);
    printf("Sum: %d\n", sum_array(data, 5));
    reverse(data, 5);
    printf("After:  ");
    print_array(data, 5);
    return 0;
}