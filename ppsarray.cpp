#include<iostream>
using namespace std;

int main(){
    int array[]={17,19,27,35,45,57,67,76,89,92};
    int sum;
    int size=10;
    for(int i=0; i<size/2; i++){
        sum = array[i] + array[size - 1 - i];
        cout << sum << endl;
    }
    return 0;
}