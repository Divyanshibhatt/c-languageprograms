/* Q113: Write a program to take an integer array arr and an integer k as inputs. 
The task is to find the kth smallest element in the array. Print the kth smallest element as output. */

#include <stdio.h>
int main() {
 
    int n, k, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter array elements: ");
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of k: ");
    scanf("%d", &k);

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("The %dth smallest element is: %d\n", k, arr[k - 1]);

    return 0;
}