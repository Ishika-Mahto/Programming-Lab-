#include <stdio.h>

int my_strlen(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void my_strcpy(char *dest, const char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}

int my_strcmp(const char *s1, const char *s2) {
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
        i++;
    }
    return s1[i] - s2[i];
}

void my_strcat(char *dest, const char *src) {
    int dest_len = 0;
    int i = 0;

    while (dest[dest_len] != '\0') {
        dest_len++;
    }

    while (src[i] != '\0') {
        dest[dest_len + i] = src[i];
        i++;
    }

    dest[dest_len + i] = '\0';
}

int main() {
    char s_len[] = "Programming";
    char s_copy_src[] = "Copy me!";
    char s_copy_dest[20];
    char s_cmp_a[] = "apple";
    char s_cmp_b[] = "apricot";
    char s_cat_dest[50] = "Hello ";
    char s_cat_src[] = "friends!";
    int cmp_result;

    printf("--- String Operations Without <string.h> ---\n\n");

    int length = my_strlen(s_len);
    printf("1. Length of '%s': %d\n", s_len, length);

    my_strcpy(s_copy_dest, s_copy_src);
    printf("2. Copied string: '%s' -> '%s'\n", s_copy_src, s_copy_dest);

    cmp_result = my_strcmp(s_cmp_a, s_cmp_b);
    printf("3. Comparison of '%s' and '%s': Result = %d\n", s_cmp_a, s_cmp_b, cmp_result);

    my_strcat(s_cat_dest, s_cat_src);
    printf("4. Concatenation: '%s'\n", s_cat_dest);

    return 0;
}
