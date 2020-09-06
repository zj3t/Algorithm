#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    int C = 0;
    int N = 0;
    int sum = 0;
    int count = 0;
    double average = 0.0;
    stack<int> Score;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    cout.precision(3);
    
    cin >> C;

    for(int i = 0 ; i < C; i++){
        sum = 0;
        count = 0;
        cin >> N;
        
        vector<int> tmp(N);

        if(N < 1 && N > 1000){
            exit(0);
        }

        for(int j = 0; j < N; j++){
            cin >> tmp[j];
            if(tmp[j] >= 0 && tmp[j] <= 100){
                Score.push(tmp[j]);
                sum += Score.top();
            }
        }
        average = (double)sum/(double)N;
        
        for(int h = 0; h < N; h++){
            if(tmp[h] > average){
                count++;
            }
        }
        average = (double)((double)count / (double)N) * 100.0;

        
        cout << fixed << average << "%" << "\n"; //소수점 3자리 설정 --> 알아서 반올림
    }
    return 0;
}