#include <stdio.h>
#include <setjmp.h>

jmp_buf env; 

void fib(int n, int *sum, int a, int b) {
    if (n <= 0) {
        longjmp(env, 1); 
    }
    
    *sum += a;
    fib(n - 1, sum, b, a + b); 
}

int main() {
    int n;
    printf("Vvedite chislo: ");
    scanf("%d", &n);

    int sum = 0;

    if (setjmp(env) == 0) {
        fib(n, &sum, 1, 1); 
    } else {
        printf("Suma chisel %d Fibonachi: %d\n", n, sum);
    }

    return 0;
}
