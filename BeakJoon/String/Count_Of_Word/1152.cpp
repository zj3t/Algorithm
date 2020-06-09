#include<iostream>

using namespace std;

int main(){

    string sentence = "";
    int count = 0;
    int sentence_len = 0;
    //cin >> sentence;
    getline(cin, sentence); //띄어쓰기 포함 "\n" 까지 씀

    //cout << sentence <<endl;
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    sentence_len = sentence.length();
    
    if(sentence_len <= 1000000){
        for(int i=0; i<sentence_len; i++){

            if(i == 0 || i == sentence_len -1){
                if(int(sentence[i]) == 0x20){
                    count--;
                }
            }
            if(int(sentence[i]) == 0x20){
                count++;
            }
        }
    }
    if(sentence_len == 0){ // input == "\n"
        cout << "0" << "\n";
    }
    else if(sentence_len == 1 && int(sentence[0]) == 0x20){ //input == " \n"
        cout << count << "\n";
    }
    else{
        cout << count +1 << "\n";
    }
    return 0;
}