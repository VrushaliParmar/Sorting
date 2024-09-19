#include<stdio.h>

//Function to perform Bubble Sort
void bubbleSort(int arr[], int n)
{
    int i, j, temp;
    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

//Function to perform Selection Sort
void selectionSort(int arr[], int n)
{
    int i, j, minIdx, temp;
    for(i=0; i<n-1; i++)
    {
        minIdx=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j] < arr[minIdx])
            {
                minIdx=j;
            }
            temp=arr[minIdx];
            arr[minIdx]=arr[i];
            arr[i]= temp;
        }
    }
}

//Function to perform Insertion Sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for(i=1; i<n ; i++)
    {
        key=arr[i];
        j=i-1;
        while( j>=0 && arr[j] > key)
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]= key;
    }
}

//Function to print Array
void printArray(int arr[], int n)
{
    int i;
    for(i=0; i<n ; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");
}


int main()
{
    int arr[50], n, choice, i;

    //asking user for number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    //taking input for array
    printf("Enter the %d elements of array:\n", n);
    for( i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //menu for choosing sorting methods
    printf("\nChoose the sorting technique:\n");
    printf("1. Bubble Sort\n");
    printf("2. Selection Sort\n");
    printf("3. Insertion Sort\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    //using switch case for sorting options
    switch(choice)
    {
        case 1:
        bubbleSort(arr, n);
        printf("\nArray sorted using Bubble Sort: \n");

        break;

        case 2:
        selectionSort(arr, n);
        printf("\nArray sorted using Selection Sort: \n");

        break;

        case 3:
        insertionSort(arr, n);
        printf("\nArray sorted using Insertion Sort: \n");
        
        break;

        default:
        printf("Invalid choice\n");
        return 0;
    }

    //display sorted array
    printArray(arr, n);
    return 0;
}
