#include <stdio.h>
int main()
{
    int n[15] = {99, 97, 87, 76, 65, 63, 59, 58, 51, 43, 32, 31, 28, 15, 6};
    int num, low, high, mid;
    for (low=0, high=14, printf("Please enter number: "), scanf("%d", &num); low<=high;){
        mid=(low+high)/2;
        if (num>n[mid]) high=mid-1;
        else if (num<n[mid]) low=mid+1;
        else{
            printf("%d is No.%d number!\n", num, mid+1);
            break;
        }
    }
    if (num!=n[mid]) printf("No match!\n");
    return 0;
}