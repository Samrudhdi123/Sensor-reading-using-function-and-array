#include <stdio.h>

// Function to input sensor readings
void inputReadings(int readings[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &readings[i]);
    }
}

// Function to find average
float calculateAverage(int readings[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += readings[i];
    }
    return (float)sum / n;
}

int main() {
    int readings[5];
    float avg;

    printf("Enter 5 sensor readings:\n");
    inputReadings(readings, 5);

    avg = calculateAverage(readings, 5);

    printf("Average Sensor Reading = %.2f\n", avg);

    return 0;
}
