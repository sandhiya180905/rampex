#include<stdio.h>
int main() {
    char s[100];            
    scanf("%s", s);        
    int dig = 1;            
    for (int i = 0; s[i] != '\0'; i++) {     
        if (s[i] < '0' || s[i] > '9') {    
            dig = 0;                        
            break;                            
        }
    }
    if (dig) {
        printf("Contains only digits\n");
    } else {
        printf("Not only digits\n");
    }

    return 0;
}
