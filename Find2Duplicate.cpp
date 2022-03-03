#include<iostream>
using namespace std;

int setBit(int n, int pos) {
    return (n & ((1<<pos)!=0));
}


void unique(int arr[], int n) {
    int xorsum = 0;
    for(int i = 0; i < n; i++) {
        xorsum = xorsum^arr[i]; //this will give me xor of the two unique nos in the array
        //now need to find the rightmost bit of xorsum
    }
        int tempxor = xorsum; //storing the value of xor of the complete array before editing it
        int setbit = 0;
        int pos = 0;
        while(setbit != 1){
            setbit = xorsum & 1;
            pos++; // to know the position of set bit
            xorsum = xorsum>>1; //to find the pos at which I'll finally get a set bit

        }
        int newxor = 0;
        for(int i =0; i <n; i++){
            if(setBit(arr[i], pos-1)) {
                newxor = newxor^arr[i]; //got my first unique number// by using xor for all array elements where there's a set bit 
                //at the same position as I got for my unique function 
            }
        }
    cout << newxor <<endl; //first unique number 
    cout << (tempxor^newxor) << endl; //got second unique number 

       

}
    

int main() {

    int arr[] = {1,2,3,1,2,3,5,7};
    unique(arr, 8);
    return 0;
}