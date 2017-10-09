#include <stdio.h>
#include <math.h>

// gcc dayinshalou.c -o  dayinshalou -lm
void print_img(int num, char ch) {
    int i, j;
    //up
    for (i = num; i >= 1; i--) {
        for (j = num - i; j > 0; j--)
            printf(" ");
        for (j = 0; j < 2 * i - 1; j++)
            printf("%c", ch);
        printf("\n");
    }
    //down
    for (i = 2; i <= num; i++) {
        for (j = num - i; j > 0; j--)
            printf(" ");
        for (j = 0; j < 2 * i - 1; j++)
            printf("%c", ch);
        printf("\n");
    }
}


int main() {
    int num, ceng;
    char ch;
    scanf("%d %c", &num, &ch);
    ceng = (int) sqrt((num + 1) / 2);
    print_img(ceng, ch);
    printf("%d\n", num - 2 * ceng * ceng + 1);
    return 0;
}