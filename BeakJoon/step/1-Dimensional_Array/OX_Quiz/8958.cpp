#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<char> OX;
    
    int N = 0;
    int score = 0;
    int count = 0;

    string answer;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    for(int i = 0; i < N; i++){
        score = NULL;
        count = 0;
        cin >> answer;

        for(int i=0; i<answer.length(); i++){
            if(answer.length() > 80){
                exit(0);
            }
            if(answer[i] == 'O'){ // "O"라면 1점으로 계산.
                if(count != 0) //이전 문제가 맞았을 경우
                    count += 1;
                else if(count == 0) //이전 문제가 X이고 현재 O일 경우 1로 세팅
                    count = 1;
            }
            else if(answer[i] == 'X'){ //"X"라면 0점으로 계산.
                count = 0;
            }
            score += count;
        }
        cout << score << "\n";
    }
    return 0;
}