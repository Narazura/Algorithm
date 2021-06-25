//Write by Narazura
#include <stdio.h>
#include <stdlib.h>

/*
    *Concept of linear search algoritm
    *1. Would do looping until it's found the target
    *First try, use array.
    Note:
    Kelebihan:
    kita tidak perlu melakukan pengurutan terlebih dahulu sehingga mengurangi baris program yang digunakan.
    Kekurangan:
    kita akan memerulkan banyak waktu untuk memrika seluruh data, terlebih bila jumlah data sangat banyak.
*/
int linearSearch(int arr[],int leght,int target){
    for(int i = 0; i<leght ; i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;
}

int linearSearch2(int arr[],int leght, int target){
    
}
void main(){
    int arr[]={70,53,12,52,53,62,513,784,45,2,16,0,123};
    int leght = sizeof(arr)/sizeof(arr[0]);
    int result = linearSearch(arr,leght,0);
    (result == -1)
    ?printf("Element isn't available in array")
    :printf("Element is available in index %d\n",result);
    float x;
    x = 9,3;
    printf("%.f",x);
}
//If you want to use linear search concept in string, you can use strcmp or strncmp to compare both of string
