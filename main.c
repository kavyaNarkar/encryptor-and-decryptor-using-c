#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void stringToBinary(char str[]) {
    for (int i = 0; i < strlen(str); i++) {
        for (int j = 7; j >= 0; j--) {
            printf("%d", (str[i] >> j) & 1);
        }
        printf(" "); 
    }
    printf("\n");
}


void binaryToString(char binary[]) {
    int len = strlen(binary);
    for (int i = 0; i < len; i += 9) { 
        int value = 0;
        for (int j = 0; j < 8; j++) {
            value = value * 2 + (binary[i + j] - '0'); 
        }
        printf("%c", value); 
    }
    printf("\n");
}

int main() {
    int choice;
    while(1) {
        printf("1. String to Binary\n2. Binary to String\n3. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        getchar(); 

        switch (choice) {
            case 1: {
                char str[100];
                printf("Enter a string: ");
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = '\0'; 
                stringToBinary(str);
                break;
            }
            case 2: {
                char binary[800];
                printf("Enter binary (8 bits per character, separated by spaces): ");
                fgets(binary, sizeof(binary), stdin);
                binary[strcspn(binary, "\n")] = '\0'; 
                binaryToString(binary);
                break;
            }
            case 3:
                exit(0); 
            default:
                printf("Invalid choice! Please enter 1, 2, or 3.\n");
                break;
        }
    }
    return 0;
}
