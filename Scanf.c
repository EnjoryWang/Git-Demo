#include <stdio.h>

int main()
{
    int hour1=0, minute1=0;
    int hour2=0, minute2=0;
    printf("请输入初始时间，格式为1,11");
    scanf("%d,%d", &hour1, &minute1);
    printf("请输入末时间，格式为1,11");
    scanf("%d,%d", &hour2, &minute2);
    int im = minute2 - minute1;
    int ih = hour2 - hour1;
    if (im < 0) {
        im = im + 60;
        ih = ih - 1;
    }
    printf("相差的时间为%d小时%d分", ih, im);
    return 0;
}
