#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    int N = 0;
    vector<int> before_score;
    vector<double> after_score;
    int tmp = 0;
    int max = 0;
    double average = 0.0;

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> N;

    if(N <= 1000 && N > 0){
        for(int i=0; i<N; i++){
            cin >> tmp;
            if(tmp >= 0 && tmp <= 100)
                before_score.push_back(tmp);
        }
        max = *max_element(before_score.begin(), before_score.end());


        for(int i=0; i<N; i++){
            after_score.push_back((double)((double)before_score[i]/(double)max) * 100);
            //cout << "after_score " << i << " " << after_score[i] << endl;
            average += after_score[i];
        }
        cout << (double)(average/(double)N) << "\n";
    }
    return 0;
}