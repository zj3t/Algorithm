#include <iostream>
#include <vector>

using namespace std;

bool hansu(int n){
    int count = 0;
    int diff1 = 0;
    int diff2 = 0;

    vector<int> number(3);

    number[0] = n /100;
    number[1] = n / 10 % 10;
    number[2] = n % 10;

    diff1 = number[1] - number[0];
    diff2 = number[2] - number[1];

    if(diff1 == diff2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int N;
    int count;
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);   

    cin >> N;
    if(1<=N && N <=1000){
        if(1 <= N && N <100){
            count = N;
        }
        else if(100<=N){
            count = 99;
            for(int i=100; i<=N; i++){
                if(hansu(i)==true){
                    count ++;
                }     
            }
        }
    }
    cout << count << "\n";
}