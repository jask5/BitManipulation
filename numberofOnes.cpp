#include<iostream>
using namespace std;

//counting the number of 1's in binary representation of a number 

int numberOfOnes(int n) {
    int count = 0;

    while(n) {
        n = n & (n-1);
        count++;
    }

    return count;

}

int main(){
    cout << numberOfOnes(19)<<endl;


    return 0;
}