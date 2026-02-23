#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

char* generatePassword(int length, bool includeNumbers, bool includeSymbols) {
    // Calculate total length including optional characters
    int totalLength = length;
    if (includeNumbers) totalLength += 1;
    if (includeSymbols) totalLength += 10;
    char* password = (char*)malloc((totalLength + 1) * sizeof(char)); // +1 for null terminator
    if (!password) {
        return NULL;
    }
    int index = 0;
    
    // Fill with random letters
    const char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    for (int i = 0; i < length; ++i) {
        password[index++] = letters[rand() % 52];
    }
    
    // Add number if requested
    if (includeNumbers) {
        password[index++] = (rand() % 10) + '0';
    }
    
    // Add symbols if requested
    if (includeSymbols) {
        const char symbols[] = "!@#$%^&*()";
        for (int i = 0; i < 10; ++i) {
            password[index++] = symbols[i];
        }
    }
    
    password[index] = '\0';
    return password;
}

int main() {
    srand(time(NULL));
    char* pwd = generatePassword(12, true, true);
    printf("%s\n", pwd);
    free(pwd);
    return 0;
}
