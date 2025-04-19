#include <stdio.h>
#include <math.h>

int main()
{
    FILE *f1, *f2;
    
    f1 = fopen("input.txt", "r");
    f2 = fopen("output.txt", "w");
    char s1[100];
    
    while(fgets(s1, 50, f1)){
        char s2[100];
        strncpy(s2, s1+strlen(s1)-5, strlen(s1));
        if(atoi(s2) > 1980)
            fprintf(f2, "%s", s1);
    }
    fclose(f1);
    fclose(f2);

    return 0;
}
