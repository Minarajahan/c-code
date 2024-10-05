#include <stdio.h>

int main() {
    char lowercase, uppercase;
    
    scanf("%c", &lowercase);
    
    uppercase = lowercase - 32;
    printf("%c\n", uppercase);
    
    return 0;
}