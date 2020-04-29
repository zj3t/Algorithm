#include <iostream>
#include <vector>

using namespace std;

vector<bool> selfNumber(10001);

int d(int n){
    int sum = 0;

    sum = n;

    if(1 <= n && n <= 9){
        sum += n % 10;
    }
    else if(10 <= n && n <= 99){
        sum += (n / 10) + (n % 10);
    }
    else if(100 <= n && n <= 999){
        sum += (n/ 100) + (n/10 %10) + (n %10);
    }
    else if(1000 <= n && n <= 9999){
        sum += (n/1000) + (n/100 %10) + (n/10 %10) + (n%10);
    }

    return sum;
}

int main(){
    int Not_SN = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    for(int i=1; i<=10000; i++){
        Not_SN = d(i);
        if(Not_SN <= 10000){
            selfNumber[Not_SN] = true;
        }
    }

    for(int i=1; i<10000; i++){
        if(selfNumber[i] != true){
            cout << i << "\n";
        }
    }

    return 0;
}