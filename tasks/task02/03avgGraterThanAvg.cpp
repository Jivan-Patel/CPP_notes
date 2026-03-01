#include <iostream>
#include <cstdio>
using namespace std;

int main() {

    int arr[5];
    int l = 5;
    for(int i = 0; i < l; i++) {
        scanf("%d\n",&arr[i]);
    }
    int sum = 0;
    for(int i = 0; i < l; i++) {
        sum += arr[i]; 
    }
    float avg = sum / l;
    int count = 0;
    for(int i = 0; i < l; i++) {
        if (avg <= arr[i]) count++;
    }

    printf("Average Marks: %.2f\n" ,avg);
    printf("Higher than average Marks: %d\n" ,count);

    return 0;
}