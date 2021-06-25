//Write by Narazura
#include <stdio.h>
#include <stdlib.h>
/*
    *Concept of binary search search algoritm
    *1. First one, we must pay attention for data because in binary search data must on sort.
    *Algorithm:
    1. Sort the data before search.
    2. Check the leght of array.
    3. Chosee the target
    4. Start search from minddle of array than comparae them.
    5. If target matches with the middle of array, we return the mid index
    6. else if target greater than the middle of array, then target can only lie in the reight half subarrat after the mid element. So we recu for the right half
    7. Else target smaller, recur for the left half
    Note:
    Kelebihan:
        Mengurangi data yang perlu diperiksa.Cukup efektid digunakan untuk jumlah data besar.
    Kekurangan:
        Perlu dilakukan sorting terlebih dahulu.
*/
int binarySearch(int arr[],int left, int right, int target){
    int mid = (left + right)/2;
    if(right >= left){
        if(arr[mid]==target){
            return mid;
        }
        else if (target>arr[mid]){
            return binarySearch(arr,mid+1,right,target);
        }
        else{
            return binarySearch(arr,left,mid-1,target);
        }
    }
    return -1;  
}
void main(){
    int arr[] = {0,2,12,16,45,52,53,62,70,513,784}; //Anggap data telah terurut.
    int leght = (sizeof(arr) / sizeof(arr[0]))-1;
    int result = binarySearch(arr,0,leght,784);
    (result == -1)
    ? printf("Element isn't available in array")
    : printf("Element is available in index %d\n", result);
}