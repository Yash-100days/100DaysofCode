//Q70: Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>
int main() {
    int n, k, i;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &k);

    k = k % n;

    for (i = n - k; i < n; i++) {
        printf("%d ", arr[i]);
    }
    for (i = 0; i < n - k; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
