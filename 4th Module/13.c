#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("Enter the total numbers that you want: ");
    scanf("%d", &n);
    int arr[n];
    float sum = 0, mean = 0, var = 0, dev = 0, sqSum = 0, stdDev = 0;
    for(int i =0; i<n; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("Sum = %f\n", sum);
    mean = sum / (float) n;
    printf("mean = %f\n", mean);
    for(int i =0; i<n; i++){
        dev = mean - arr[i];
        sqSum += dev * dev;
    }
    var = sqSum / (float) n;
    stdDev = sqrt(var);
    printf("Standard Deviation = %f", stdDev);

    return 0;
}