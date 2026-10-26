#include <stdio.h>
int main() {
     printf("entre your height in feet and inches:");
     int foot;
     int inch;
     scanf("%d %d",&foot,&inch);
     printf("your height is %f metres.\n",
	 (foot+inch/12.0)*0.3048);
     return 0;
 }

#include <stdio.h>

int main() {
    float price = 12.34567;
    float pi = 3.1415926;
    
    // Keep 2 decimal places (auto rounding)
    printf("Price: %.2f\n", price); // Output: Price: 12.35
    
    // Keep 3 decimal places
    printf("Pi: %.3f\n", pi);       // Output: Pi: 3.142
    
    // Advanced: Total width 8, keep 2 decimal places (auto padding with spaces)
    printf("Width: %8.2f\n", price); // Output: Width:    12.35
    
    return 0;
}
