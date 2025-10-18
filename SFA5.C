#include <stdio.h>
int main() {
    int i, num;
    float sum = 0;
    for(i = 1; i <= 5; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        sum += num;
    }
    printf("Average = %.2f", sum / 5);
    return 0;
}
