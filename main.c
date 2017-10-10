#include <stdio.h>
#include <math.h>


//打印沙漏
void print_img() {
    int num, ceng;
    char ch;
    scanf("%d %c", &num, &ch);

    ceng = (int) sqrt((num + 1) / 2);


    int i, j;
    //up
    for (i = ceng; i >= 1; i--) {
        for (j = ceng - i; j > 0; j--)
            printf(" ");
        for (j = 0; j < 2 * i - 1; j++)
            printf("%c", ch);
        printf("\n");
    }
    //down
    for (i = 2; i <= ceng; i++) {
        for (j = ceng - i; j > 0; j--)
            printf(" ");
        for (j = 0; j < 2 * i - 1; j++)
            printf("%c", ch);
        printf("\n");
    }

    printf("%d\n", num - 2 * ceng * ceng + 1);
}


//判断素数
int isPrime(int num) {
    if (num == 1)
        return 0;
    else if (num == 2 || num == 3)
        return 1;
    else if (num % 2 == 0)
        return 0;
    else {
        int start, end;
        end = (int) sqrt(num) + 1;
        for (start = 3; start < end; start++) {
            if (num % start == 0)
                return 0;
        }
        return 1;
    }
}


//孪生素数对猜想
int luanshengsushu() {
    int num;
    scanf("%d", &num); //输入范围数
    int pair_cnt = 0;
    for (int i = 2; i < num; i++) {
        if (isPrime(i) && isPrime(i + 2) && i + 2 <= num)
            pair_cnt += 1;
    }
    printf("%d\n", pair_cnt);
}


int main() {
    //print_img();
    luanshengsushu();
    return 0;
}