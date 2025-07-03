// Prints the ASCII values of characters from 'a' to 'z' and 'A' to 'Z' by Switch case

#include <stdio.h>

int main() {
    char ch;
    
    printf("Enter a character: ");
    scanf("%c", &ch);
    
    switch(ch) {
        // Lowercase letters
        case 'a': printf("ASCII value: 97\n"); break;
        case 'b': printf("ASCII value: 98\n"); break;
        case 'c': printf("ASCII value: 99\n"); break;
        case 'd': printf("ASCII value: 100\n"); break;
        case 'e': printf("ASCII value: 101\n"); break;
        case 'f': printf("ASCII value: 102\n"); break;
        case 'g': printf("ASCII value: 103\n"); break;
        case 'h': printf("ASCII value: 104\n"); break;
        case 'i': printf("ASCII value: 105\n"); break;
        case 'j': printf("ASCII value: 106\n"); break;
        case 'k': printf("ASCII value: 107\n"); break;
        case 'l': printf("ASCII value: 108\n"); break;
        case 'm': printf("ASCII value: 109\n"); break;
        case 'n': printf("ASCII value: 110\n"); break;
        case 'o': printf("ASCII value: 111\n"); break;
        case 'p': printf("ASCII value: 112\n"); break;
        case 'q': printf("ASCII value: 113\n"); break;
        case 'r': printf("ASCII value: 114\n"); break;
        case 's': printf("ASCII value: 115\n"); break;
        case 't': printf("ASCII value: 116\n"); break;
        case 'u': printf("ASCII value: 117\n"); break;
        case 'v': printf("ASCII value: 118\n"); break;
        case 'w': printf("ASCII value: 119\n"); break;
        case 'x': printf("ASCII value: 120\n"); break;
        case 'y': printf("ASCII value: 121\n"); break;
        case 'z': printf("ASCII value: 122\n"); break;
        
        // Uppercase letters
        case 'A': printf("ASCII value: 65\n"); break;
        case 'B': printf("ASCII value: 66\n"); break;
        case 'C': printf("ASCII value: 67\n"); break;
        case 'D': printf("ASCII value: 68\n"); break;
        case 'E': printf("ASCII value: 69\n"); break;
        case 'F': printf("ASCII value: 70\n"); break;
        case 'G': printf("ASCII value: 71\n"); break;
        case 'H': printf("ASCII value: 72\n"); break;
        case 'I': printf("ASCII value: 73\n"); break;
        case 'J': printf("ASCII value: 74\n"); break;
        case 'K': printf("ASCII value: 75\n"); break;
        case 'L': printf("ASCII value: 76\n"); break;
        case 'M': printf("ASCII value: 77\n"); break;
        case 'N': printf("ASCII value: 78\n"); break;
        case 'O': printf("ASCII value: 79\n"); break;
        case 'P': printf("ASCII value: 80\n"); break;
        case 'Q': printf("ASCII value: 81\n"); break;
        case 'R': printf("ASCII value: 82\n"); break;
        case 'S': printf("ASCII value: 83\n"); break;
        case 'T': printf("ASCII value: 84\n"); break;
        case 'U': printf("ASCII value: 85\n"); break;
        case 'V': printf("ASCII value: 86\n"); break;
        case 'W': printf("ASCII value: 87\n"); break;
        case 'X': printf("ASCII value: 88\n"); break;
        case 'Y': printf("ASCII value: 89\n"); break;
        case 'Z': printf("ASCII value: 90\n"); break;
        
        default:
            printf("Invalid character! Please enter a letter (a-z or A-Z)\n");
            break;
    }
    
    return 0;
}
