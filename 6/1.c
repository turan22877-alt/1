#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void) {
    setlocale(LC_CTYPE, "RUS");
    int yeas;
    printf("вводи год");
    scanf("%d", &yeas);




    system("pause");
    return 0;
}