#include<iostream>
using namespace std;

int main(){
    int n, i, k;
    cout << "Enter nth number" << endl;
    cin >> n;

    for(i = 2; i <= n; i++){
        for(k = 2; k < i; k++){
            if(i % k == 0){
                break;
            }
        }
        if(k == i){
            cout << i << endl;
        }
    }

    return 0;
}