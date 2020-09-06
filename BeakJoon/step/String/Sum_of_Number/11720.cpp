#include <iostream>
#include <vector>

using namespace std;

int main(){
    int N = 0;
    int sum = 0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;
    vector<char> number(N);

    if(1<=N && N<=100){
        for(int i=0; i<N; i++){
            cin >> number[i];
        }
    }
    for(int i=0; i<N; i++){
        sum += (int)number[i]-48;
    }
    cout << sum << '\n';

    return 0;
}