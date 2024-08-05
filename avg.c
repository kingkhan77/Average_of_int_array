#include <stdio.h>
int main() {
    int n, i;
    int num[100], sum = 0.0, avg;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf(" Enter Array: \n");
    for (i = 0; i < n; i++) {
        scanf("%d", &num[i]);
        sum += num[i];
    }

    avg = sum / n;
    printf("Average = %.2f\n", avg);

    return 0;
}
