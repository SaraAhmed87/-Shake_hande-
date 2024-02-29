#include <stdio.h>


// Function to calculate the triangular number
int calculateHandshakes(int n) {
    return (n * (n - 1)) / 2;
}

int main() {
    int numPeople;

    printf("Enter the number of people present: ");
    scanf("%d", &numPeople);

    if (numPeople <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the number of handshakes
    int totalHandshakes = calculateHandshakes(numPeople);

    printf("Total number of handshakes: %d\n", totalHandshakes);

    return 0;
}
