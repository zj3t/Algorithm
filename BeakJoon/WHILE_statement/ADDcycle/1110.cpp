#include <iostream>

using namespace std;

int main(){
    int N = 0;
    int cycle = 0;
    int tmp = 0;
    int first, second = 0;

    // example ) *26 -> 2+6 = 8 -> *68
    cin >> N;

    if(N >= 0 && N <= 99 ){
        tmp = N;

        while(tmp != N || cycle == 0){
            if(tmp/10 == 0){
                first = 0;
                second = tmp;
             }
            else{
                first = tmp / 10;
                second = tmp % 10;
            }
            tmp = (second * 10) + ((first + second) % 10);
            cycle ++;
        }
        cout << cycle << "\n";
    }
    return 0;
}