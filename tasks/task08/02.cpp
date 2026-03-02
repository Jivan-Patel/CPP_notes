#include <iostream>
#include <vector>
using namespace std;

int search(int nums[], int req) {
    int* i = nums; 
    int* j = nums + 5 - 1;
    while(i <= j) {
        int* mid = i + (j-i)/2;
        if(*mid == req) {
            return mid - nums;
        }
        else if(*mid > req) {
            j = mid - 1;
        }
        else {
            i = mid + 1;
        }
    }
    return -1;
}

int main() {
    
    int nums1[] = {1,2,3,5,7};

    cout << search(nums1,4) << endl;

    return 0;
}