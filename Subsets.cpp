#include<iostream>
using namespace std;

void getSubsets(int arr[], int n) {
    for(int i = 0; i < (1<<n); i++){ //running from 0 to number of subsets - 1 i.e. 2^n
        for(int j = 0; j < n; j++) { //loop for the elements in the array
            if(i & (1<<j)) {
                cout << arr[j] << " ";
            }
        }
        cout << endl;

    } 
}

int main() {
    int arr[4] = {1,2,3,4};
    getSubsets(arr, 4);


    return 0;
}