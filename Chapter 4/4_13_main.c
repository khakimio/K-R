#include <stdio.h>
#include <string.h>

void recursion (char s[], int i, int size);

int main () {
    
    char arr[] = "Hakim";
    recursion(arr, 0, strlen(arr));
    printf ("%s\n", arr);
    
    return 0;
}

void recursion (char arr[], int i, int size){
    
    int j, temp;
    j = size - (i + 1);
    
    if (i < j) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        recursion(arr, ++i, size);
    }
}
