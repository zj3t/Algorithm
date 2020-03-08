//g++ -o 15945 15954.cpp
#include <iostream>
#include <math.h>

using namespace std;

void result(int n, int k){
    int *array = new int[n];
    double m=0; //산술평균
    double d=0; //분산
    double sd=0; //표준편차
    double min = 1000000.000000000000;

    cout.precision(12);

    for(int i=0; i<n; i++){
        cin >> array[i];

        if(array[i] < 0 || array[i] > pow(10,6)){
            exit(0);
        }
    }
    int tmp= n-k;

    for (int a=0; a<=tmp; a++){
        for(int i=0; i<=n-k; i++){
            m=0;
            d=0;
            for(int j=i; j<i+k; j++){ //산술평균
                m += array[j];
            }
            m = (double)m/(double)k;

            for(int j=i; j<i+k; j++){ //분산
                d += pow((array[j]-m),2);
            }
            d = (double)d/(double)k;

            sd = abs(sqrt(d)); //표준편차
            /*
            cout << "분산: " << d << endl;
            cout << "평균: " << m << endl;
            cout << "표준편차: " << sd << endl;
            */
            if(min > sd){
			    min = sd;
		    }
        }
        k=k+1;
    }
    cout << min << endl;
    delete[] array;
}
int main(){
    int N,K=0;

    cin >> N >> K;

    if(N >= 1 && N <= 500 && K >=1 && K <= N){
        result(N,K);
    }
    return 0;
}