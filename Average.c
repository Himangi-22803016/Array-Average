#include <stdio.h>

int main() {
    int n;
    int arr[50];
    printf("Enter array size: ");
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        printf("Enter element-%d:", i+1);
        scanf("%d", &arr[i]);
    }
    float sum, avg;
    sum = 0;
    for(int i=0; i<n; i++)
    {
        sum+=arr[i];
    }
    avg = sum/n;
    
    printf("Average: %f\n", avg);
    return 0;
}
