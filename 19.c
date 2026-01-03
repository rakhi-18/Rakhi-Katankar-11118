//Program using string functions (strlen, strcpy, strcat, strcmp)
#include <stdio.h>
#include <string.h>

int main() {
    char str1[50], str2[50], str3[100];
    int length, result;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    length = strlen(str1);
    printf("\nLength of first string: %d", length);

    strcpy(str3, str1);
    printf("\nCopied string (str3): %s", str3);

    strcat(str3, str2);
    printf("\nConcatenated string (str3): %s", str3);

    result = strcmp(str1, str2);
    if (result == 0)
        printf("\nBoth strings are equal");
    else if (result > 0)
        printf("\nFirst string is greater than second string");
    else
        printf("\nFirst string is smaller than second string");

    return 0;
}
