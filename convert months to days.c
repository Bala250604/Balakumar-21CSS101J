#include <stdio.h>
int main() {
    int months;
    int days;
    printf("RA2211042010053\n");
    printf("Enter days\n");
    scanf("%d",&days);
    months= days / 30;
    days= days % 30;
    printf("Months= %d Days = %d",months, days);
    return 0;
}
