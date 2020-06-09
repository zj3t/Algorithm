#include <iostream>
#include <vector>

using namespace std;

int main(){
    int first_num;
    int second_num;
    int result;
    
    char first[4];
    char second[4];

    cin.tie(NULL);
    ios_base::sync_with_stdio(false);

    cin >> first_num >> second_num;

    first[0] = char(first_num % 10 + 0x30);
    first[1] = char(first_num /10 %10 +0x30);
    first[2] = char(first_num /100 % 10 + 0x30);
    first[3] = 0x00;

    second[0] = char(second_num % 10 + 0x30);
    second[1] = char(second_num /10 %10 +0x30);
    second[2] = char(second_num /100 % 10 + 0x30);
    second[3] = 0x00;

    cout << max(atoi(first), atoi(second)) << "\n";
    return 0;

}