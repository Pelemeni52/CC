#include <stdio.h>
#include <stdint.h>


int bits_count(unsigned char *data, int size) {
    int count = 0;  

    
    for (int i = 0; i < size; i++) {
        unsigned char byte = data[i];  
        
        for (int j = 7; j >= 0; j--) {
            int bit = (byte >> j) & 1; 
            printf("%d", bit);         
            if (bit) count++;          
        }
        printf(" "); 
    }

    printf("\n");
    return count;
}

int main() {
    long l;
    double d;

    printf("input long: ");
    scanf("%ld", &l);

    printf("input double: ");
    scanf("%lf", &d);


    printf("\nlong in bits:\n");
    int count_long = bits_count((unsigned char*)&l, sizeof(l)); 
    printf("1 in long: %d\n", count_long); 

    printf("\ndouble in bits:\n");
    int count_double = bits_count((unsigned char*)&d, sizeof(d)); 
    printf("1 in double: %d\n", count_double);
    return 0;
}
