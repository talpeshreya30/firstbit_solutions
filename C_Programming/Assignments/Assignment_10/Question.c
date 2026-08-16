#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100];
    char *p;

    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    // 1. strlen
    printf("\n1. Length = %d", strlen(str1));

    // 2. strcpy
    strcpy(str3, str1);
    printf("\n2. strcpy = %s", str3);

    // 3. strncpy
    strncpy(str3, str1, 3);
    str3[3] = '\0';
    printf("\n3. strncpy = %s", str3);

    // 4. strcat
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("\n4. strcat = %s", str3);

    // 5. strncat
    strcpy(str3, str1);
    strncat(str3, str2, 3);
    printf("\n5. strncat = %s", str3);

    // 6. strcmp
    printf("\n6. strcmp = %d", strcmp(str1, str2));

    // 7. strncmp
    printf("\n7. strncmp = %d", strncmp(str1, str2, 3));

    // 8. strchr
    p = strchr(str1, 'a');
    printf("\n8. strchr = %s", p);

    // 9. strrchr
    p = strrchr(str1, 'a');
    printf("\n9. strrchr = %s", p);

    // 10. strstr
    p = strstr(str1, str2);
    printf("\n10. strstr = %s", p);

    // 11. strtok
    strcpy(str3, str1);
    p = strtok(str3, " ");
    printf("\n11. strtok = %s", p);

    // 12. strspn
    printf("\n12. strspn = %d", strspn(str1, "abcdefghijklmnopqrstuvwxyz"));

    // 13. strcspn
    printf("\n13. strcspn = %d", strcspn(str1, " "));

    // 14. strpbrk
    p = strpbrk(str1, "aeiou");
    printf("\n14. strpbrk = %s", p);

    // 15. memchr
    p = memchr(str1, 'a', strlen(str1));
    printf("\n15. memchr = %s", p);

    // 16. memcpy
    memcpy(str3, str1, strlen(str1) + 1);
    printf("\n16. memcpy = %s", str3);

    // 17. memmove
    memmove(str3, str1, strlen(str1) + 1);
    printf("\n17. memmove = %s", str3);

    // 18. memcmp
    printf("\n18. memcmp = %d", memcmp(str1, str2, 3));

    // 19. memset
    memset(str3, '*', 5);
    str3[5] = '\0';
    printf("\n19. memset = %s", str3);

    // 20. strcoll
    printf("\n20. strcoll = %d", strcoll(str1, str2));

    // 21. strxfrm
    strxfrm(str3, str1, 100);
    printf("\n21. strxfrm = %s", str3);

    return 0;
}