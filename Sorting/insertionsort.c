#include <stdio.h>
#include <stdlib.h>
#define MAX_ARRAY 225

/*Note:
    -To copy an array we can use 3 differt way;
        1. Use dinamycall allocate memory
        2. Use static array
        3. Use structure
*/
int* insertionSort(int *arr,int leght){
    int temp, i,j;
    static int arr2[MAX_ARRAY];

    for(j = 0; j<leght;j++){
         arr2[j] = arr[j];
    }
    for(j = 1; j<leght;j++){
        temp = arr2[j];
        i = j-1;
        while(temp < arr2[i] && i>=0){
            arr2[i+1] = arr2[i];
            i--;
        }
        arr2[i+1]=temp;
    }
    return arr2;
}

int main()
{
    int arr[] = {70, 53, 12, 52, 53, 62, 513, 784, 45, 2, 16, 0, 123};
    int leght = sizeof(arr)/sizeof(arr[0]);
    int *p = insertionSort(arr,leght);
    for(int i = 0; i<leght;i++){
        printf("%d\n", p[i]);
    }
    return 0;
}