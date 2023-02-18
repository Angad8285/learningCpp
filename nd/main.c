#include <stdio.h>

int main() {
    int arr[] = {1, 2};
    for (int i =0; i<2; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    arr[2] = 3;
    for (int i =0; i<3; i++)
        printf("%d ", arr[i]);

    printf("The program ends here.");
}