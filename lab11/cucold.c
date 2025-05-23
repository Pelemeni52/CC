#include <stdarg.h>
#include <limits.h>
#include <stdio.h>


int cucold_sum(int count, ...) {
    va_list args;
    va_start(args, count);
    int sum = 0;
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}


int find_max(int count, ...) {
    if (count <= 0) return INT_MIN; 
    
    va_list args;
    va_start(args, count);
    int max = va_arg(args, int);
    
    for (int i = 1; i < count; i++) {
        int current = va_arg(args, int);
        if (current > max) {
            max = current;
        }
    }
    va_end(args);
    return max;
}


int find_min(int count, ...) {
    if (count <= 0) return INT_MAX; 
    
    va_list args;
    va_start(args, count);
    int min = va_arg(args, int);
    
    for (int i = 1; i < count; i++) {
        int current = va_arg(args, int);
        if (current < min) {
            min = current;
        }
    }
    va_end(args);
    return min;
}


double cucold_average(int count, ...) {
    if (count <= 0) return 0.0;
    
    va_list args;
    va_start(args, count);
    int sum = 0;
    
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int);
    }
    va_end(args);
    
    return (double)sum / count;
}
