#include <stdio.h>

void towerOfHanoi(int n, char fromPeg, char toPeg, char auxPeg){
    if (n==1){
        printf("\nMove %d from %c to %c", n, fromPeg, toPeg);
        return;
    }
    towerOfHanoi(n-1, fromPeg, auxPeg, toPeg);
    printf("\nMove %d from %c to %c", n, fromPeg, toPeg);
    towerOfHanoi(n-1, auxPeg, toPeg, fromPeg);
}

int main(){
    int n;
    printf("Enter number of discs: ");
    scanf("%d", &n);
    printf("\nSteps to solve are: ");
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}