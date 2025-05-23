#include <stdio.h>
#include "cucold.c"

int main() {
    int sum = cucold_sum(5, 10, 20, 30, 40, 50);
    int max = find_max(5, 10, 20, 30, 40, 50);
    int min = find_min(5, 10, 20, 30, 40, 50);
    double avg = cucold_average(5, 10, 20, 30, 40, 50);

    printf("sum: %d\n", sum);  
    printf("max: %d\n", max);   
    printf("min: %d\n", min);    
    printf("average: %.2f\n", avg);  

    return 0;
}
