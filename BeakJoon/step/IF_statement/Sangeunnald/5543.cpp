#include <iostream>
#include <algorithm>

using namespace std;

int main(){
        int A = 0; //상덕버거
        int B = 0; //중덕버거
        int C = 0; //하덕버거
        int Coke = 0;
        int Cider = 0;
        int Aset,Bset,Cset = 0;
        int BuggerSet_offet = 50;
        int tmp = 0;

        cin >> A >> B >> C >> Coke >> Cider;

        //Aset = A + Coke
        if(A,B,C,Coke,Cider >= 100 && A,B,C,Coke,Cider <= 2000){
            if(Coke <= Cider){
                Aset = A+Coke - BuggerSet_offet;
                Bset = B+Coke - BuggerSet_offet;
                Cset = C+Coke - BuggerSet_offet;
            }
            else{
                Aset = A+Cider - BuggerSet_offet;
                Bset = B+Cider - BuggerSet_offet;
                Cset = C+Cider - BuggerSet_offet;
            }
            
            tmp = min(Aset,Bset);
            tmp = min(tmp, Cset);

            cout << tmp << endl;
        }
}