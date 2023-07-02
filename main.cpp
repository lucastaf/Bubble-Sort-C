#include <iostream>
#include <time.h>
using namespace std;
#define size 10 


void print_array(int nums[size]){
    for (int i = 0; i<size; i++){
        cout << nums[i] << "\n";
    }
    cout << "\n";
}

int main(){
    int nums[size];
    int x, lastid = size;

    srand(time(NULL));
    for (int i = 0;i<size;i++){
        nums[i] = rand()%500;
    }
    print_array(nums);
    for (int i = 0; i < size; i++){
        for (int j = 0; j<size-1;j++){
            if(nums[j]>nums[j+1]){
                x = nums[j+1];
                nums[j+1] = nums[j];
                nums[j] = x;
            }
        }
    }

    print_array(nums);

    return 0;
}