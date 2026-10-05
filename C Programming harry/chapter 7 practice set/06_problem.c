// 6. Write a program containing functions which counts the number of positive integers in
// an array.

#include<stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6 };
    printArray(arr, 6);
    reverse(arr, 6);
    printArray(arr, 6);
    return 0;
}