#include<stdio.h>
int main() {
   int a, b;
   scanf_s("%d,%d", &a, &b); // Corrected to scanf_s from
   printf("现在时间是 %02d:%02d\n", a, b);
    return 0;
}