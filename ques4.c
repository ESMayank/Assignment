#include <stdio.h>

int main() {
    int days, weeks, years;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    years = days / 365;
    weeks = (days % 365) / 7;
    

    printf("%d days = %d years, %d weeks, %d days", days, years, weeks, days);
    
    return 0;
}
