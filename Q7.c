#include <stdio.h>
#include <string.h>

char toLowerChar(char c) {
    if(c >= 'A' && c <= 'Z') 
        return c + ('a' - 'A');  
    return c;
}

int isPalindrome(char str[], int start, int end) {
    if(start >= end) return 1;  
    if(toLowerChar(str[start]) != toLowerChar(str[end])) return 0;
    return isPalindrome(str, start + 1, end - 1);
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;  

    if(isPalindrome(str, 0, strlen(str)-1))
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
