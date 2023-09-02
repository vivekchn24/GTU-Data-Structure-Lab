#include <stdio.h>

int main() {
    int array1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int array2[10];
    int i;

    for (i = 0; i < 11; i++) {
        printf("Enter numbers: ");
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < 11; i++) {
        if (array1[i] != array2[i]) {
            printf("Not equal \n");
        } else 
        {
            printf("they are equal. \n");
        }
    }
}

