#include<stdio.h>
#include<stdbool.h>
void ChangePosition(int *n1, int *n2) 
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void BubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++) 
    {
        for(j = 0; j < n-i-1; j++)
        {
            if (arr[j] < arr[j+1])
               ChangePosition(&arr[j], &arr[j+1]); 
        }
    }
}

// bool IsGreaterThan(int n1, int n2) {
//     return (n1 > n2) ? true : false;
// }


int print_arr(int arr[], int n) {
    int i;
    for (i = 0; i < n-1; i++)
        printf("%d ,", arr[i]);
    
    printf("\n end of the ordering");
}

int main(int argc, char const *argv[])
{
    int arr[] = {100, 1992, 0, 5, -1, 60, 70, 14, 15, 10};
    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr, n);
    print_arr(arr, n);
    printf("\n");
    return 0;
}
